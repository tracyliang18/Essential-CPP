#include <iostream>
#include <vector>

using namespace std;

template <typename elemtype>
void display_message(const string &msg,
                                                  const vector<elemtype> &vec)
{
        cout <<msg;
        for(int ix = 0; ix < vec.size(); ++ix)
        {
                elemtype t = vec[ix];
                cout << t << ' ';
        }

        cout << endl;
}

int count = 6;
int array[]={
               1,2,3,
               4,5,6
};

double darray[9]={1.0};


int main()
{
        vector <int>vec(array, array+sizeof(array)/sizeof(int));
        vector <double>vec2(darray, darray+10);
        display_message("haha", vec);
        display_message("wocao",vec2);
        return 0;
}
