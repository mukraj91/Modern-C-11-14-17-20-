/*Genric lambda expression
C++14 now allows the auto type-specifier in the parameter list, enabling polymorphic lambdas.
*/

#include<iostream>
using namespace std;

int main()
{
    
auto identity = [](auto x) { return x; };
int three = identity(3); // == 3
std::string foo = identity("foo"); // == "foo"

}