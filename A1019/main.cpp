#include <stdio.h>

int main(int argc, char **argv)
{
    int data[40];
    int index = 0;
    int n,base;
    scanf("%d%d",&n,&base);
    
    if(n < base){
        printf("Yes\n%d",n);
        return 0;
    }
    
    while(n > 0){
        data[index++] = n % base;
        n /= base;
    }
    
    int i;
    for(i = 0;i <= index / 2;++i){
        if(data[i] != data[index - i - 1]) break;
    }
    
    if(i > index / 2){
        printf("Yes\n");
    }else {
        printf("No\n");
    }
    printf("%d",data[index-1]);
    for(i = index -2;i >= 0;--i){
        printf(" %d",data[i]);
    }
    
	return 0;
}
