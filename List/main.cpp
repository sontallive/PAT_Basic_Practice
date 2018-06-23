#include <iostream>
#include "List.h"
using namespace std;

bool lessi(const int& i,const int& j){
    return i < j;
}

int main(int argc, char **argv)
{
    List<int> list(5);
    
    list.setComparator(lessi);
    for(int i = 0;i < 8;++i){
        list.push_back(i);
    }
    for(int i = 0;i < list.size();++i) cout << list[i];
    cout << endl;
    
    list.sort();
    
    for(int i = 0;i < list.size();++i) cout << list[i];
    cout << endl;
	return 0;
}
