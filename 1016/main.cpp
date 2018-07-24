#include <stdio.h>

int main(int argc, char **argv)
{
    int a,da,b,db;
    int pa = 0,pb = 0;
    
    scanf("%d%d%d%d",&a,&da,&b,&db);
    
    while(a){
        if(a % 10 == da){
            pa = pa * 10 + da;
        }
        a /= 10;
    }
    
    while(b){
        if(b % 10 == db){
            pb = pb * 10 + db;
        }
        b /= 10;
    }
	printf("%d",pa+pb);
	return 0;
}
