/*
 * init_object.cpp
 *
 *  Created on: 2014-7-1
 *      Author: tracyliang
 */

/* two way
 *  1.c style, = (but only support one initial argument
 *  2. constructor type, multiply argument support
 * */
#include <iostream>
#include <complex>

const double pi = 3.14152653;

using namespace std;
int main()
{
        int a=10;
        int b(9);
        bool flag=true;

        complex<double> c(1,1);

        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

        return 0;
}



