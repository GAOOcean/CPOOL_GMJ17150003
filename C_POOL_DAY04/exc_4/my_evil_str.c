
//#include<stdio.h>

/*int my_strlen(char *str)    
{  
	if(*str == '\0') 
		return 0;   
	else  
	return 1+ my_strlen(str+1); 
}*/
char *my_evil_str(char *str)
{  
	int len = my_strlen(str);  
	if(len <= 1)   
		return 0;  
	else  
	{  
		char temp = str[0];     
        	str[0] = str[len-1];  
        	str[len-1] = '\0';   
        	my_evil_str(str+1); 
        	str[len-1] = temp;  
	}  
}    
  
/*int main()  
{  
	char c[] = "abcdefghijklmno";
	my_evil_str(c);  
	printf("%s ",c);  
	printf("\n");  
	return 0;  
}*/


