#include<stdio.h>
#include<string.h>
char str[11][4]={"��","һ","��","��","��","��","��","��","��","��","ʮ"};
char right[8][10]={"ʮ��","ʮ��","��ʮ","��ʮ��","��ʮ","��ʮ��","��ʮ","��ʮ��"}; 
char error[8][10]={"�й�","����","�人","����","����","�Ǻ�","���ɹ�","̫����"};
int fact[8]={15,17,20,25,30,35,90,95};
int main()
{
	int i,b,k,c; 
	char tens[4],unit[4];
	for(i=0;i<8;i++)//��ȷ����// 
	{
		if(strlen(right[i])==4){
			tens[0]=right[i][0];tens[1]=right[i][1];
		    unit[0]=right[i][2];unit[1]=right[i][3];
		    if(strcmp(tens,"ʮ")==0){
			for(k=0;k<=10;k++){
				if(strcmp(unit,str[k])==0)
				{
					b=10+k;
					break;
				}
				
			    } 
		    }
		if(strcmp(unit,"ʮ")==0){
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
	for(i=0;i<8;i++)//�������// 
	{
		if(strlen(error[i])==4){
			tens[0]=error[i][0];tens[1]=error[i][1];
		    unit[0]=error[i][2];unit[1]=error[i][3];
		    if(strcmp(tens,"ʮ")==0){
			for(k=0;k<=10;k++){
				if(strcmp(unit,str[k])==0)
				{
					c=10+k;
					break;
				}
				
			    } 
		    }
		if(strcmp(unit,"ʮ")==0){
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
