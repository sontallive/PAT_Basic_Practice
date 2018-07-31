#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

typedef struct Time{
    char name[6];
    int year;
    int month;
    int day;
} Time;

int compare(Time& t1,Time& t2){
    if(t1.year != t2.year) return t1.year < t2.year;
    if(t1.month != t2.month) return t1.month < t2.month;
    if(t1.day != t2.day) return t1.day < t2.day;
    return 0;
}


int main(int argc, char **argv)
{
    int n;
    Time times[100009];
    scanf("%d",&n);
    int sum = 0;
    char name[6];
    int year,month,day;
    while(n--){
       scanf("%s %d/%d/%d",name,&year,&month,&day);
       int dy = 2014 - year;
       if(year > 2014 || year == 2014 && month > 9 
                      || year == 2014 && month == 9 && day > 6) {
            continue;
        }
       if(dy < 200 || dy == 200 && month > 9 
                      || dy == 200 && month == 9 && day >= 6){
           strcpy(times[sum].name,name);
           times[sum].year = year;
           times[sum].month = month;
           times[sum].day = day;
           sum++;
       }
    }
    
    sort(times,times+sum,compare);
    
    if(sum) {
        printf("%d %s %s",sum,times[0].name,times[sum-1].name);
    }else{
        printf("0");
    }
	return 0;
}
