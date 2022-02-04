/*
Static Assertions:- https://www.geeksforgeeks.org/understanding-static_assert-c-11/

> Assertions that are evaluated at compile-time.

Static assertions are a way to check if a condition is true when the code is compiled. 
If it isn’t, the compiler is required to issue an error message and stop the compiling process. 
The condition that needs to be checked is a constant expression.
*/

#include<iostream>
using namespace std;


template<typename T, int Size> 
class Vector {

static_assert(Size > 3, "Vector size is too less");
T value[Size];

};


int main() {

  // Vector<int, 2>vector; // error: static assertion failed: Vector size is too less 
   Vector<int , 6>vector2;
    return 0;
}