#include <iostream>
#include <vector>

using namespace std;

void display_message(const string &, const vector<int >&);
void display_message(const string&, const vector<double>&);
void display_message(const string&, const vector<string>&);


void display_message(const string &msg, const vector<int> &vec)
{
        cout << msg;
        for(int ix = 0; ix < vec.size(); ++ix)
        {
                cout << vec[ix]<<' ';
        }
        cout << endl;
}

void display_message(const string &msg, const vector<double> &vec)
{
        return;
}

void display_message(const string&, const vector<string>&)
{
        return;
}


