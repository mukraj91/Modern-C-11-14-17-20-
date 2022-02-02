/*
https://devenum.com/how-forward-reference-used-in-c-11/

Forwarding Reference:
-> when we use template parameter type or auto, this becomes forward reference.
->Forwarding references are a special kind of references that both ignore and 
   preserve the value category of a function argument, making it possible to forward it by means of std::forward.
Ex- 

Syntax of Forward references is:
T&&
or
auto&&

*/

#include<iostream>
#include<string>

using namespace std;

template<typename TP> void fun(TP && args) {
    string s(forward<TP>(args));
}


int main() {
 string s("test");
 fun(s);
 cout<<"Value of fun= " <<s<<endl;

}

