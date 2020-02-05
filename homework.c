#include<stdio.h>
#include<string.h>
char str[11][4]={"零","一","二","三","四","五","六","七","八","九","十"};
int exchange(char a[]); 
void inexchange(int sum);
void operation(char name[],char op[],char num[],int sum);
int main()
{ 
	freopen("homework.txt","r",stdin);
	char var[10],name[100],op[100],num[10];     //变量类型，变量名，运算// 
	scanf("%s %s %s %s",var,name,op,num);
	int sum;
	sum=exchange(num);//初始化// 
	operation(name,op,num,sum);
	return 0; 
}
void operation(char name[],char op[],char num[],int sum){     //运算// 
	int a;
	
	while((scanf("%s",name))!=EOF) {
	    if(strcmp(name,"看看")!=0){
			scanf("%s %s",op,num);
			a=exchange(num);
			if(strcmp(op,"增加")==0)
			sum+=a; 
		    else if(strcmp(op,"减少")==0)
			sum-=a;
		    else
		    printf("错误操作\n");	
		}
		else {
			scanf("%s",op);//注意此时name存储的是操作，op存储的是变量名字//
			inexchange(sum);
		}
	}
}
int exchange(char a[]){                     //汉字转数字// 
	int i,j,n,sum;
	char tens[10],unit[10];
    if(strlen(a)==2) {                        //1-10// 
		for(i=0;i<=10;i++){
            if((strcmp(a,str[i])==0))
            return i;
	    }
	}
	if(strlen(a)==4){                        //11-20，10的倍数// 
	    tens[0]=a[0];tens[1]=a[1]; 
		unit[0]=a[2];unit[1]=a[3];
		if(strcmp(tens,"十")==0){
			for(i=0;i<=10;i++){
				if(strcmp(unit,str[i])==0)
				return 10+i;
			} 
		}
		if(strcmp(unit,"十")==0){
			for(i=0;i<=10;i++){
				if(strcmp(tens,str[i])==0)
				return i*10;
			}
		}	
	}
	else {                                       //几十几//
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
void inexchange(int sum){     //数字转文本//
    int unit=sum%10,tens=sum/10;                
	if(sum<=10)//0-10//
	printf("%s\n",str[sum]); 
	else if(sum>=11&&sum<=20||sum%10==0){
		if(sum%10==0)
		printf("%s十\n",str[tens]);
		else
		printf("十%s\n",str[unit]);	 
	} 
	else{
		printf("%s十%s\n",str[tens],str[unit]);
	}
}
