/**
 * ac time: 13m
 */


#include <iostream>

using namespace std;

bool func(int n){
    if(n == 2) return true; 
    if(n % 2 == 0) return false;
    for(int i = 3;i*i <=n;i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

int main(int argc, char **argv)
{
	int n;
    cin >> n;
    int old = 2,num = 0;
    for(int i = 2;i <= n;++i){
        if(func(i)) {
            if(i - old == 2) num++;
            old = i;
        }
    }
    cout << num;
    return 0;
}
