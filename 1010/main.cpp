#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    int k,n;
    cin >> k >> n;
    int flag = 0;
	while(cin >> k >> n != EOF){
        if(flag == 0){
            if(n * k == 0) continue;
            cout << k*n << " "<< n-1;
            flag = 1;
        }else{
            if(n * k == 0) continue;
            cout << " " << k*n << " "<< n-1 ;
        }
    }
    
    if(flag == 0) cout << "0 0";
    return 0;
}
