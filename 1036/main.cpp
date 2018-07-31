#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
    int l = n / 2.0 + 0.5;
    for(int i = 0;i<l;++i){
        if(i==0 || i == l-1){
            for(int j = 0;j < n;++j){
                printf("%c",c);
            }
        }else{
            for(int j = 0;j < n;++j){
                if(j==0 || j==n-1) {
                    printf("%c",c);
                } else printf(" ");
            }
        }
        printf("\n");
    }
	return 0;
}
