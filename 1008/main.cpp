#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n,r;
    cin >> n;
    cin >> r;
    r = (n - r % n) % n; //very important
    int data[105];
    for(int i = 0;i < n;++i) cin >> data[i];
    
    cout << data[r];
    for(int i = r+1;i < n;++i){
        cout << " " << data[i];
    }
    for(int i = 0;i < r;++i){
        cout <<" "<< data[i];
    }
	return 0;
}
