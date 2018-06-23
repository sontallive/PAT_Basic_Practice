#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    stack<string> s;
    string str;
    while(cin >> str){
        s.push(str);
        if(getchar() == '\n') break;
    }
    cout << s.top();
    s.pop();
    while(!s.empty()){
        cout << " " << s.top();
        s.pop();
    }
}
