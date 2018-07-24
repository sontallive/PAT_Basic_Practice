#include <stdio.h>
#include <math.h>
int main(int argc, char **argv)
{
    int c1,c2;
    int time,h,m,s;
    scanf("%d%d",&c1,&c2);
    time = round((c2 - c1) / 100.0);
    h = time / (60 * 60);
    m = time / 60 % 60;
    s = time % 60;
	printf("%02d:%02d:%02d",h,m,s);
	return 0;
}
