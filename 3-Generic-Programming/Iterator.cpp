#include <iostream>
#include <vector>
using namespace std;
int main()
{
        vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(8);
        vec.pop_back();

        vector<int>::iterator iter = vec.begin();
        vector<int>::iterator last = vec.end();

        while(iter != last)
        {
                cout << *iter<<endl;
                iter++;
        }

        const vector<int> vec1(vec);

        vector<int>::const_iterator citer = vec1.begin();
        vector<int>::const_iterator liter = vec1.end();
        while(citer != liter)
        {
                cout << *citer << endl;
                citer++;
        }



        return 0;

}
