#include<stdio.h>
#include<string.h>
char str[11][4]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
int exchange(char a[]); 
void inexchange(int sum);
void operation(char name[],char op[],char num[],int sum);
int main()
{ 
	freopen("homework.txt","r",stdin);
	char var[10],name[100],op[100],num[10];     //�������ͣ�������������// 
	scanf("%s %s %s %s",var,name,op,num);
	int sum;
	sum=exchange(num);//��ʼ��// 
	operation(name,op,num,sum);
	return 0; 
}
void operation(char name[],char op[],char num[],int sum){     //����// 
	int a;
	
	while((scanf("%s",name))!=EOF) {
	    if(strcmp(name,"����")!=0){
			scanf("%s %s",op,num);
			a=exchange(num);
			if(strcmp(op,"����")==0)
			sum+=a; 
		    else if(strcmp(op,"����")==0)
			sum-=a;
		    else
		    printf("�������\n");	
		}
		else {
			scanf("%s",op);//ע���ʱname�洢���ǲ�����op�洢���Ǳ�������//
			inexchange(sum);
		}
	}
}
int exchange(char a[]){                     //����ת����// 
	int i,j,n,sum;
	char tens[10],unit[10];
    if(strlen(a)==2) {                        //1-10// 
		for(i=0;i<=10;i++){
            if((strcmp(a,str[i])==0))
            return i;
	    }
	}
	if(strlen(a)==4){                        //11-20��10�ı���// 
	    tens[0]=a[0];tens[1]=a[1]; 
		unit[0]=a[2];unit[1]=a[3];
		if(strcmp(tens,"ʮ")==0){
			for(i=0;i<=10;i++){
				if(strcmp(unit,str[i])==0)
				return 10+i;
			} 
		}
		if(strcmp(unit,"ʮ")==0){
			for(i=0;i<=10;i++){
				if(strcmp(tens,str[i])==0)
				return i*10;
			}
		}	
	}
	else {                                       //��ʮ��//
		tens[0]=a[0];tens[1]=a[1]; 
		unit[0]=a[4];unit[1]=a[5];
		for(i=0;i<=10;i++){
			if(strcmp(tens,str[i])==0)
			sum=i*10;
		}
		for(i=0;i<=10;i++){ 
			if(strcmp(unit,str[i])==0)
			sum+=i;
		}
		return sum;
	}
}
void inexchange(int sum){     //����ת�ı�//
    int unit=sum%10,tens=sum/10;                
	if(sum<=10)//0-10//
	printf("%s\n",str[sum]); 
	else if(sum>=11&&sum<=20||sum%10==0){
		if(sum%10==0)
		printf("%sʮ\n",str[tens]);
		else
		printf("ʮ%s\n",str[unit]);	 
	} 
	else{
		printf("%sʮ%s\n",str[tens],str[unit]);
	}
}
