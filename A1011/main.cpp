#include <stdio.h>

int main(int argc, char **argv)
{
    double odds[3];
    char kind[4] = "WTL";
    for(int i = 0;i<3;++i){
        int maxindex = 0;
        double o[3] = {0};
        for(int j = 0; j < 3;++j){
            scanf("%lf",&o[j]);
            if(o[j] > o[maxindex]) maxindex = j;
        }
        printf("%c ",kind[maxindex]);
        odds[i] = o[maxindex];
    }
    
    double sum = (odds[0] * odds[1] * odds[2] * 0.65 - 1) * 2;
    
	printf("%.2f",sum);
	return 0;
}
