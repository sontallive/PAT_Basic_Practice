#include <stdio.h>

typedef struct Poly{
    int exp;
    double conf;
}Poly;

Poly polys[1001];

double result[2001] = {0};

int main(int argc, char **argv)
{
    int n1,n2;
    scanf("%d",&n1);
    
    for(int i = 0; i < n1;++i){
        scanf("%d%lf",&polys[i].exp,&polys[i].conf);
    }
    
    scanf("%d",&n2);
    int exp;
    double conf;
    for(int i = 0; i < n2;++i){
        scanf("%d%lf",&exp,&conf);
        for(int j = 0;j < n1;++j){
            result[exp + polys[j].exp] += (polys[j].conf * conf);
            //printf("%d+%lf\n",exp + polys[j].exp,conf);
        }
    }
    int num = 0;
    for(int i = 0;i < 2001;++i){
        if(result[i] != 0.0) num++;
    }
    printf("%d",num);
    for(int i = 2000;i >=0;--i){
        if(result[i] != 0.0) printf(" %d %.1f",i,result[i]);
    }
    
    
	return 0;
}
