#include<stdio.h>
#include<string.h>
char str[11][4]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
char erro[11][4]={"ʲ","ô","Ҳ","��","��","��","ô","��","̫","��","��"}; 
int exchange(char a[]);
int main()
{
	int i,a,b,t[5]={15,19,11,30,55} ;
	for(i=0;i<11;i++)
	{
		a=exchange(str[i]);
		if(a!=i)
		printf("NO\n");
		else
		printf("PASS\n");
	}//��ȷ����//
	for(i=0;i<11;i++)
	{
		a=exchange(erro[i]);
		if(a!=i)
		printf("NO\n");
		else
		printf("PASS\n");
	} 	//�������// 
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
}
