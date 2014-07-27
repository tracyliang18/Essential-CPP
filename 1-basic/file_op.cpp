/*
 * file_op.cpp
 *
 *  Created on: 2014-7-3
 *      Author: tracyliang
 */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        ofstream outfile("test.txt", ios_base::app);

        if(!outfile)
                cerr << "Opps"<<endl;
        else
                outfile << "haha"<<1<<" "<<'a'<<endl;

        return 0;
}



