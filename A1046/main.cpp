#include <stdio.h>

//need pre calc to prevent time full
int dist[100010];
int main(int argc, char **argv)
{
    
    int n,t;
    int total = 0;
    scanf("%d",&n);
    dist[0] = 0;
    for(int i = 0;i < n;++i){
        scanf("%d",&t);
        dist[i+1] = dist[i] + t;
        total += t;
    }
    
    int m;
    int p1,p2;
    scanf("%d",&m);
    while(m--){
        scanf("%d%d",&p1,&p2);
        p1--;
        p2--;
        if(p1 > p2){
            int temp = p1;
            p1 = p2;
            p2 = temp;
        }
        int d = dist[p2] - dist[p1];
        d = d > total - d ? total - d : d;
        printf("%d\n",d);
    }

	return 0;
}
