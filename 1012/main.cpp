#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char **argv)
{
	int x,num;
    int a[5] = {0};
    int b[5] = {0};
    int flag = 1;
    float a4 = 0;
    cin >> num;
    for(int i = 0;i < num ;++i){
        cin >> x;
        if(x % 10 == 0) {
            a[0] += x;
            b[0]++;
        }
        if(x % 5 == 1){
            a[1] += flag * x;
            flag *= -1;
            b[1]++;
        }
        
        if(x % 5 == 2) {
            a[2]++;
            b[2]++;
        }
        
        if(x % 5 == 3) {
            a[3] += x;
            b[3]++;
        }
        
        if(x % 5 == 4) {
            a[4] = a[4] > x ? a[4]:x;
            b[4]++;
        }
    };
    
    a4 = a[3]* 1.0f / b[3];
    
    if(b[0] == 0) cout << "N";
    else cout << a[0];
    for(int i = 1;i < 5;++i){
        if(b[i] == 0) {
            cout << " N";
            continue;
        }
        if(i == 3) printf(" %.1f",a4);
        else cout << " " << a[i];
    }
	return 0;
}
