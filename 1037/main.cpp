#include <stdio.h>

int main(int argc, char **argv)
{
	int a[3],b[3];
    scanf("%d.%d.%d %d.%d.%d",a,a+1,a+2,b,b+1,b+2);
    
    int sum1,sum2;
    
    sum1 = a[0] * 17 * 29 + a[1] * 29 + a[2];
    sum2 = b[0] * 17 * 29 + b[1] * 29 + b[2];
    
    sum1 = sum2 - sum1;
    
    
    if(sum1 < 0) {
        printf("-");
        sum1 *= -1;
    }
    
    printf("%d.%d.%d",sum1 / (17 * 29),sum1 / 29 % 17,sum1 % 29);
    
	return 0;
}
