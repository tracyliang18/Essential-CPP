#ifndef STACK_H
#define STACK_H
#include <vector>
#include <iostream>

using namespace std;
template<typename elem_type>
class Stack
{
public:
        bool push(const elem_type &e);
        bool pop(elem_type &e);
        bool peek(elem_type &e);
        bool empty();
        bool full();

        Stack(int maxSize);

        int size()
        {
                return _stack.size();
        }

private:
       std:: vector <elem_type> _stack;
       int _maxSize;
};

template<typename elem_type>
inline bool Stack<elem_type>::full()
{
        return _stack.size() == _maxSize;
}

template <typename elem_type>
bool Stack<elem_type>::push(const elem_type &e)
{
        if(full())
                return false;
        _stack.push_back(e);

        return true;
}

template <typename elem_type>
bool Stack<elem_type>::peek(elem_type &e)
{
        if(empty())
                return false;
        e = _stack.back();
        return true;
}

template<typename elem_type>
bool Stack<elem_type>::pop(elem_type &e)
{
        if(empty())
                return false;
        e = _stack.back();
         _stack.pop_back();
        return true;
}

template<typename elem_type>
bool Stack<elem_type>::empty()
{
        return _stack.empty();
}
template<typename elem_type>
Stack<elem_type>::Stack(int maxSize)
{
        if(maxSize < 0)
        {
                cout<<"size is less than 0"<<endl;
                maxSize=0;
        }

        _maxSize = maxSize;
}

#endif
