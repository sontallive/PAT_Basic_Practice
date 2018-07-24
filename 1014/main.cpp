#include <iostream>
#include <cmath>
using namespace std;

void getSame1(char* str1,char* str2,char* data){
    int i = 0,flag = 0;
    int i1;
    while(true){
        if(str1[i] == str2[i] && isalnum(str1[i])){
            if(flag) {
                break;
            }else if(isalpha(str1[i])){
                i1 = i;
                flag = 1;
            }
        }
        
        i++;
    }
    data[0] = str1[i1];
    data[1] = str1[i];
}

int getSame2(char* str1,char* str2){
    int i = 0;
    while(true){
        if(str1[i] == str2[i] && isalpha(str1[i])){
            break;
        }
        i++;
    }
    return i;
}

int main(int argc, char **argv)
{
    char day[7][4] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
    char data[4][60] = {0};
	for(int i = 0;i < 4;++i){
        cin.getline(data[i],60);
    }
    char a[2];
    getSame1(data[0],data[1],a);
    int i2 = getSame2(data[2],data[3]);
    cout << day[tolower(a[0]) - 'a'] << " ";
    int hour = isalpha(a[1]) ? tolower(a[1]) - 'a' + 10:a[1] - '0';
    printf("%02i:%02i",hour,i2);
}

