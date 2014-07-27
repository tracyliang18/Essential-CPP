#include "stack.h"
#include <iostream>

using namespace std;
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



