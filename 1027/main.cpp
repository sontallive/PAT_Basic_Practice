#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
    int n;
    char c;
    
    scanf("%d %c",&n,&c);
    
    int level = sqrt((n+1) / 2.0);
    
    for(int i = 0;i < level-1;i++){
        for(int j = 0;j < i;++j) printf(" ");
        for(int j = 0;j < 2 * (level - i) - 1;++j) printf("%c",c);
        printf("\n");
    }
    
    for(int i = 0;i < level-1;++i) printf(" ");
    printf("%c\n",c);
    for(int i = level-2;i >= 0;i--){
        for(int j = 0;j < i;++j) printf(" ");
        for(int j = 0;j < 2 * (level - i) - 1;++j) printf("%c",c);
        printf("\n");
    }
    
    printf("%d",n-2*level*level+1);
    
	return 0;
}
