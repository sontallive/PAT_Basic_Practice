#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef struct{
    int hour;
    int minute;
    int second;
    long nano;
} Time;

typedef struct Record{
    char name[16];
    Time start;
    Time finish;
} Record;

void CalcTime(Time& t){
    t.nano = t.hour * 3600 + t.minute * 60 + t.second;
}

int compareByStart(Record& r1,Record& r2){
    return r1.start.nano < r2.start.nano;
}

int compareByFinish(Record& r1,Record& r2){
    return r1.finish.nano > r2.finish.nano;
}

Record records[100009];

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    Time start,finish;
    char name[16];
    for(int i = 0;i < n;++i){
        scanf("%s",name);
        scanf("%d:%d:%d",&start.hour,&start.minute,&start.second);
        scanf("%d:%d:%d",&finish.hour,&finish.minute,&finish.second);
        strcpy(records[i].name,name);
        CalcTime(start);
        CalcTime(finish);
        records[i].start = start;
        records[i].finish = finish;
    }
    
    sort(records,records + n,compareByStart);
	printf("%s ",records[0].name);
    sort(records,records + n,compareByFinish);
	printf("%s",records[0].name);
	return 0;
}
