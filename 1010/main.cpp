#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
    int k,n;
    int flag = 1;
    
    do{
        cin >> k >> n;
        if(n > 0){
            if(flag){
                cout << k*n << " " << n-1;
                flag = 0;
            }else{
                cout << " "<< k*n << " " << n-1;
            }
        }
        if(flag) cout << "0 0";
    }while(getchar() != '\n');
    return 0;
}
