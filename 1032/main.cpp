#include <stdio.h>

int scores[100009] = {0};
int main(int argc, char **argv)
{
    int n;
    int max = 0;
    scanf("%d",&n);
    int num,score;
    while(n--){
        scanf("%d%d",&num,&score);
        max = max >= num ? max : num;
        scores[num] += score;
    }
    int index = 1;
    for(int i = 2;i<= max;++i){
        if(scores[i] > scores[index]){
            index = i;
        }
    }
    
	printf("%d %d",index,scores[index]);
	return 0;
}
