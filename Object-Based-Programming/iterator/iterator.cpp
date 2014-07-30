#include <vector>
#include <iostream>
using namespace::std;
const int MAX= 1024;
class data_iterator
{
public:
        data_iterator(int start) :_index(start){}
        bool operator==(const data_iterator &e) const;
        bool operator !=(const data_iterator &e) const;
        //int operator*() const;
        data_iterator &operator++();
        data_iterator operator++(int);

        int operator*();
        bool isOk() const;

private:

        int _index;
};

class data
{

        friend int data_iterator::operator*();
        friend bool data_iterator::isOk() const;

public:
        typedef data_iterator iterator;
        data(){count = 0;}
        static void push(int e);
        static void print();
        data_iterator begin() const
        {
                return data_iterator(0);
        }

        data_iterator end() const
        {
                return data_iterator(count );
        }

private:
        static int count;
        static vector<int> elem;

};

vector<int> data::elem;
int data::count ;

bool data_iterator::operator==(const data_iterator &e) const
{
        return _index == e._index;
}

bool data_iterator::operator !=(const data_iterator &e) const
{
        return !(*this == e);
}


int data_iterator::operator*()
{
        return data::elem[this->_index];
}

bool data_iterator::isOk() const
{
        if (_index >= data::count)
                return false;
        return true;
}

data_iterator &data_iterator::operator++()
{
        ++_index;
        if(!isOk())
        {
                //throw iterator_overflow();
                cout << "overflow"<<endl;
        }

        return *this;
}

data_iterator data_iterator::operator++(int)
{
        data_iterator  tmp = *this;
        _index++;
        if(!isOk())
        {
                cout << "overflow" << endl;
        }

        return tmp;
}





void data::push(int e)
{
        data::elem.push_back(e);
        count++;
        cout << "count " << count;
}

void data::print()
{
        cout<<elem.size()<<endl;
        for(int i=0; i < count; ++i)
                cout<<elem[i]<<endl;
}




int main()
{
        cout<<"haha\n";
        data *d = new data;
        d->push(0);
          d->push(1);
          d->push(2);

          data::iterator i = d->begin();
          data::iterator e = d->end();

          d->print();
          while(i != e)
          {
                  cout <<  *i  ;
                  ++i;
          }



        return 0;
}




