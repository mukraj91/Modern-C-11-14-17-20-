#include<iostream>
#include<vector>
#include<string>

using namespace std;

/*
decltype is an operator which returns the declared type of an expression passed to it.
 cv-qualifiers and references are maintained if they are part of the expression.
*/


template<typename X, typename Y>
auto add(X x, Y y) -> decltype (x +y)
{
    return x + y;
}

/*
Type aliases:
Semantically similar to using a typedef however, 
type aliases with using are easier to read and are compatible with templates.
*/


template<typename T> TypeAlises() {


using Vec = std::vector<T>;
Vec<int>v // std::vector<int>

using String = std::sing;

String s{"Code"};

}

int main()
{



cout<<"Add = " << add(1, 2.0)<<endl; // cal decltype


// type alises
TypeAlises();


    return 0;
}