/*
 * array_vector.cpp
 *
 *  Created on: 2014-7-1
 *      Author: tracyliang
 */

#include <iostream>
#include <complex>

using namespace std;

#include <vector>
int count = 6;
int array[]={
               1,2,3,
               4,5,6
};

int main()
{
        /*init*/
        vector<double> v1(count);
        vector<int> v2(array, array+sizeof(array)/sizeof(int));
        vector <int> v3;
        vector <int> v4(v2.begin(),v2.end());
        vector <int> v5(v4);
        vector <int> v6 = v5;

        v6 = vector<int>();

       // cout<<v1.size()<<endl;
        //cout<<v2.size()<<endl;

        for(int i=7;i<=10;i++)
        {
                v5.push_back(i);
        }

        /*begin*/
        for(vector<int>::iterator it = v5.begin(); it != v5.end(); it++)
        {
                cout<<*it<<endl;
        }

        for(vector<int>::reverse_iterator it = v5.rbegin(); it != v5.rend(); it++)
        {
                cout<<*it<<endl;
        }

        return 0;

}






