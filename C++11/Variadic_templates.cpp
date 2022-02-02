/*
https://www.ibm.com/docs/en/zos/2.4.0?topic=only-variadic-templates-c11

Variadic template : 
-> A template with at least one parameter pack is called a variadic template.
The ... syntax creates a parameter pack or expands one. 
A template parameter pack is a template parameter that accepts zero or more template arguments (non-types, types, or templates).

* Template parameter packs
template<typename...A> struct Container{};

// Call 
Container<> a;
Container<int>b;
Container<true, false, true>c;


*Function papameter packs
template<typename...A> void func(A...agrs)

// call
func(); // void func();
func(1); // void func(int);
func(1, 2, 3, 4, 5); // void func(int, int, int, int, int);
func(1, 'x', aWidget); // void func(int, char, widget);
*/


#include<iostream>
using namespace std;







int main () 
{
    return 0;
}