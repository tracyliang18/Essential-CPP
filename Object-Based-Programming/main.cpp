#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
        Stack<string> s(256);
        string temp;
        string &rtemp=temp;
        s.push("hahaha");
        s.push("wakaka");
        s.peek(rtemp) ;
        cout << temp << endl;
        cout << s.empty() << endl;
        cout << s.full() << endl;
        cout << s.size() << endl;

        return 0;

}
