#include<stdio.h>
#include<string.h>
char str[11][4]={"零","一","二","三","四","五","六","七","八","九","十"};
char right[8][10]={"十五","十七","二十","二十五","三十","三十五","九十","九十五"}; 
char error[8][10]={"中国","加油","武汉","加油","哈哈","呵呵","内蒙古","太难了"};
int fact[8]={15,17,20,25,30,35,90,95};
int main()
{
	int i,b,k,c; 
	char tens[4],unit[4];
	for(i=0;i<8;i++)//正确测试// 
	{
		if(strlen(right[i])==4){
			tens[0]=right[i][0];tens[1]=right[i][1];
		    unit[0]=right[i][2];unit[1]=right[i][3];
		    if(strcmp(tens,"十")==0){
			for(k=0;k<=10;k++){
				if(strcmp(unit,str[k])==0)
				{
					b=10+k;
					break;
				}
				
			    } 
		    }
		if(strcmp(unit,"十")==0){
			for(k=0;k<=10;k++){
				if(strcmp(tens,str[k])==0)
				{
					b=k*10;
					break;
				}
				
		    	}
		    }	
		}
		else{
			tens[0]=right[i][0];tens[1]=right[i][1]; 
		    unit[0]=right[i][4];unit[1]=right[i][5];
		    for(k=0;k<=10;k++){
		    	if(strcmp(tens,str[k])==0)
		    	{
		    		b=k*10;
		    		break;
				}
			    
		    }
	    	for(k=0;k<=10;k++){ 
			    if(strcmp(unit,str[k])==0)
			    {
			    	b+=k;
			    	break;
				}
		    	
	    	}	
		}
		if(b==fact[i]) printf("PASS\n");
		else printf("NO\n");
	}	
	for(i=0;i<8;i++)//错误测试// 
	{
		if(strlen(error[i])==4){
			tens[0]=error[i][0];tens[1]=error[i][1];
		    unit[0]=error[i][2];unit[1]=error[i][3];
		    if(strcmp(tens,"十")==0){
			for(k=0;k<=10;k++){
				if(strcmp(unit,str[k])==0)
				{
					c=10+k;
					break;
				}
				
			    } 
		    }
		if(strcmp(unit,"十")==0){
			for(k=0;k<=10;k++){
				if(strcmp(tens,str[k])==0)
				{
					c=k*10;
					break;
				}
				
		    	}
		    }	
		}
		else{
			tens[0]=error[i][0];tens[1]=error[i][1]; 
		    unit[0]=error[i][4];unit[1]=error[i][5];
		    for(k=0;k<=10;k++){
		    	if(strcmp(tens,str[k])==0)
		    	{
		    		c=k*10;
		    		break;
				}
			    
		    }
	    	for(k=0;k<=10;k++){ 
			    if(strcmp(unit,str[k])==0)
			    {
			    	c+=k;
			    	break;
				}
		    	
	    	}	
		}
		if(c==fact[i]) printf("PASS\n");
		else printf("NO\n");
	}	
}
