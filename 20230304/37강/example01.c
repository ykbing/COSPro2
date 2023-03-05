#include <stdio.h>
#include <string.h>   

int main()
{
    char *s1 = "hello";   
	char s2[10] = "hello";
	
    printf("%d\n", strlen(s1));
    printf("%d\n", strlen(s2));

    return 0;
}