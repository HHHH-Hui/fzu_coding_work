#include<stdio.h>
#include<string.h>
char str[11][4]={"零","一","二","三","四","五","六","七","八","九","十"};
char erro[11][4]={"什","么","也","不","会","怎","么","办","太","难","了"}; 
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
	}//正确测试//
	for(i=0;i<11;i++)
	{
		a=exchange(erro[i]);
		if(a!=i)
		printf("NO\n");
		else
		printf("PASS\n");
	} 	//错误测试// 
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
}
