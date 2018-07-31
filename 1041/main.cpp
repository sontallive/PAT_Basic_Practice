#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    int students[1010] = {0};
    char nos[1010][15];
    int n;
    scanf("%d",&n);
    int seat,real;
    char s[15];
    for(int i = 0;i < n;++i){
        scanf("%s %d %d",s,&seat,&real);
        students[seat] = real;
        strcpy(nos[seat],s);
    }
    scanf("%d",&n);
    while(n--){
        scanf("%d",&seat);
        printf("%s %d\n",nos[seat],students[seat]);
    }
    
	
	return 0;
}
