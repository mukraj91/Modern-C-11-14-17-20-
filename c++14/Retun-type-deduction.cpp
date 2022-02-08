/*
Using an auto return type in C++14, the compiler will attempt to deduce the type for you. With lambdas, 
you can now deduce its return type using auto, which makes returning a deduced reference or rvalue reference possible.
*/
#include<iostream>
using namespace std;

auto fun(const int v)
{
    return v;
}


template<typename T> auto& man(const T&& t){
    return t;
}


// Retun a reference to a deduced type.

auto f(int i) {
 return i;
}

//main
int main()
{

int value = fun(5);
cout<<"Value = "<<value<<endl;

auto temp = man<int>(9.0);
cout<<"Temp value = "<<temp<<endl;


// with lambda



auto g = [](auto &p) -> auto&
{
    return f(p);
};

int x = 123;

cout<<"Value with lambda expression = " <<g(x)<<endl;

    return 0;
}