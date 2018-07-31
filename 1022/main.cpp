#include <stdio.h>

int main(int argc, char **argv)
{
    int result[50];
    int index = 0;
    int a,b;
    int c;
    scanf("%d%d%d",&a,&b,&c);
    a = a + b;
    if(a+b == 0){
        printf("0");
        return 0;
    }
    while(a > 0){
        result[index++] = a % c;
        a /= c;
    }
    index--;
    while(index >= 0){
        printf("%d",result[index--]);
    }
	return 0;
}
