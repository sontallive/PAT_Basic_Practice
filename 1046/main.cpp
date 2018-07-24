#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    int av,aa,bv,ba;
    scanf("%d",&n);
    int af = 0,bf = 0;
    while(n--){
        scanf("%d%d%d%d",&av,&aa,&bv,&ba);
        if(aa == ba) continue;
        int sum = av + bv;
        if(aa == sum) bf ++;
        if(ba == sum) af++;
    }
    
	printf("%d %d",af,bf);
	return 0;
}
