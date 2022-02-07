/*
Lambda Function:- 
https://towardsdatascience.com/c-basics-understanding-lambda-7df00705fa48
https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp


It is a convenient way to define an anonymous function object or functor.
It is convenient because we can define it locally where we want to call it or pass it to a function as an argument.

Lamda function singature:

[=] () mutable throw -> int
{
    int n = a + b;

    return n;
}

[=] -> Capture clause(lambda introducer)
()   -> Parameter list
mutable -> mutable specification
throw -> exception specification
->  --> Trailing return type
Lambda body

*/

#include<iostream>
using namespace std;


int main()
{
    int m = 0;
    int n = 0;

    [&, n](int a) mutable 
    {
        m = ++n + a;

    }

    (4); // Calling lambda function

    cout<<"Value of M = "<<m <<"Value of n = "<<n<<endl;
    return 0;
}