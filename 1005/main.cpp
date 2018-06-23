#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void func(int n,set<int>& data){
    if(n == 1) return;
    if(n % 2 == 0) n /= 2;
    else n =(n * 3 + 1) / 2;
    data.insert(n);
    func(n,data);
}

void trim(set<int>& s){
    set<int> mys(s);
    
    for(set<int>::iterator i = mys.begin();i!= mys.end();++i){
        if(s.find(*i) == s.end()) continue;
        
        set<int> data;
        func(*i,data);
        
        for(set<int>::iterator j = data.begin();j!= data.end();++j){
            if(s.find(*j)!=s.end()) s.erase(*j);
        }
    }
}


int main(int argc, char **argv)
{
	int  num,i,j;
    set<int> s;
    cin >> num;
    i = num;
    while(i--){
        cin >> j;
        s.insert(j);
    }
    trim(s);
    set<int>::iterator iter = s.end();
    for(--iter;iter!= s.begin();--iter){
        cout << *iter << " ";
    }
    cout << *iter;
    return 0;
}

