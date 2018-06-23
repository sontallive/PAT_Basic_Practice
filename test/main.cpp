#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;

template <typename T>
void print(list<T> l){
        for(typename list<T>::iterator iter = l.begin();iter != l.end();iter++){
            cout << *iter;
        }
        cout << endl;
}

int main(int argc, char **argv)
{
    list<int> l;
    l.push_back(1);
    l.push_back(7);
    l.push_back(9);
    l.push_back(6);
    l.push_back(4);
    print(l);
    l.sort();
    print(l);
    return 0;
}
