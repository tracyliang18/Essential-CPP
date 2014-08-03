#include <iostream>
#include <vector>
using namespace std;
class num_sequence
{
public:
        virtual ~num_sequence();
        virtual const char * what_am_i() const=0;
        int elem(int pos) const;
        ostream &print(ostream &os = cout) const;
        int length() const{return _length;}
        int beg_pos() const{return _beg_pos;}
        static int max_elems(){ return 64;}

protected:
        virtual void gen_elems(int pos) const = 0;
        bool check_integrity(int pos, int size) const;
        num_sequence(int len, int bp, vector<int> &re)
                :_length(len),_beg_pos(bp),_relems(re){}

        int _length;
        int _beg_pos;
        vector<int> &_relems;
};

int num_sequence::elem(int pos) const
{
        if(check_integrity(pos, _relems.size()))
        {
                return _relems[pos];
        }
        else
        {
                return -1;
        }
}

bool num_sequence::check_integrity(int pos, int size) const
{
        if(pos < 0 || pos >=max_elems())
                return false;
        if(pos >= size)
                gen_elems(pos);

        return true;
}

class Fibonacci : public num_sequence
{
public:
        Fibonacci(int len, int beg_pos);
        virtual const char * what_am_i()
        {
                return "Fib";
        }

protected:
        virtual void gen_elems(int pos) const;
        static vector<int> _elems;


};
