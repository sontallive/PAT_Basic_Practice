#include <stdio.h>

int main(int argc, char **argv)
{
    long long a,b,c;
	int n;
    scanf("%d",&n);
    int i = 1;
    while(n--){
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a >= c && b > 0 || b >= c && a > 0 || a == c && b > 0 || b == c && a > 0){
            printf("Case #%d: true\n",i++);
            continue;
        }
        
        if(a <= c && b <= 0 || b <= c && a <= 0){
            printf("Case #%d: false\n",i++);
            continue;
        }
        
        
        if(a + b > c) printf("Case #%d: true\n",i++);
        else printf("Case #%d: false\n",i++);
    }
    
	return 0;
}
