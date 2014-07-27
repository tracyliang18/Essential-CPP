#include <iostream>

using namespace std;


//template <class T>
//class MyClass
//{
//        T state;
//
//public:
//        MyClass(T s)
//        {
//                state=s;
//        }
//   void MyFunc();
//};
//
//template <class T>
//void MyClass<T>::MyFunc()
//{
//        cout << state << endl;
//}
//
//int main()
//{
//        int a=9;
//        MyClass<int> mc (a);
//        mc.MyFunc();
//
//        return 0;
//}

template <class T>
class MyClass
{
   void MyFunc();

   template <class T2>
   static void MyFunc2(T2* data);
};

template <class T>
void MyClass<T>::MyFunc()
{
  //...implementation goes here
}

template <class T, class T2>
void MyClass<T>::MyFunc2(T2* pData)
{
  //...implementation goes here
}
