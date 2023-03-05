#include <stdio.h>
#include <string.h>  

int main()
{
    char *s1 = "hello"; 
	char s2[10] = "hello";
	
    int ret = strcmp(s1,s2);
	
    printf("%d\n", ret); 
    
    printf("%d\n", strcmp("aaa","aaa"));  
    printf("%d\n", strcmp("aab","aaa"));  
    printf("%d\n", strcmp("aab","aac")); 

    return 0;
}