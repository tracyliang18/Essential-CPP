#include <iostream>
#include <map>
#include <string>

using namespace std;

map<string , int> words;

void print_map();

int main()
{
        string tword;
        while(cin >> tword)
                words[tword]++;

        print_map();

        if( words["wakaka"] == 0)
        {
                cout << "wakaka found!\n";
        }

        if(words.find("haha") != words.end())
        {
                cout << "haha found !\n";
        }

        if(words.count("java"))
        {
                cout << "java found\n";
        }

        if( words["wakaka"]==0)
        {
                cout << "wakaka1 found!\n";
        }


        return 0;
}

void print_map()
{
        map<string,int>::iterator it = words.begin();
        for(; it != words.end(); ++it)
        {
                cout << "Key : " << it->first << " value : " << it->second << endl;
        }

        return;

}
