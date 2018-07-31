#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    int n;
    char str[85];
    scanf("%s",str);
    n = strlen(str);
    int n1 = (n+2)/3;
    int n2 = n + 2 - 2 * n1;
    
	//printf("n1 = %d\nn2 = %d\n",n1,n + 2 - 2 * n1);
    
    
    for(int i = 0;i<n1-1;++i){
        printf("%c",str[i]);
        for(int j = 0;j < n2 - 2;++j) printf(" ");
        printf("%c\n",str[n-i-1]);
    }
    for(int i = 0;i < n2;++i){
        printf("%c",str[n1-1+i]);
    }
	return 0;
}
