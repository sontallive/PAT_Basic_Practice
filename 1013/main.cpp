#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3;i * i <= n;i += 2){
        if(n % i == 0) return false;
    }
    return true;
}

int main(int argc, char **argv)
{
	int count = 0;
    int a,b;
    cin >> a >> b;
    
    int i = 2;
    while(count < b){
        if(isPrime(i)){
            count++;
            if(count >= a){
                if((count - a) % 10 == 0) cout << i;
                else cout << " " << i;
                if((count - a) % 10 == 9) cout << endl;
            }
        }
        i += 1;
    }
	return 0;
}
