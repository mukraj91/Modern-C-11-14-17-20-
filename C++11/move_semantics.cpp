/*
 Move semantics :: 
->> Move semantics allows you to avoid unnecessary copies when working with temporary objects that are about to evaporate,
 and whose resources can safely be taken from that temporary object and used by another.

 ->>  move semantics has been added to the standard library. 
 This means that you can now efficiently return vectors, maps, strings and whatever other standard library objects you want,
  taking full advantage of move semantics.

 RValue Reference ::
 
 -> An rvalue reference is a reference that will bind only to a temporary object.
 -> Rvalue references are perfect for detecting if a value is temporary object or not.
 -> Rvalue references use the && syntax instead of just &, and can be const and non-const.


 https://www.cprogramming.com/c++11/rvalue-references-and-move-semantics-in-c++11.html
 */

#include<iostream>
#include<string>
#include<iomanip>
#include<utility>

using namespace std;

struct A
{
    string s;
    int k;

    A():s("test"), k(-1) {} // Initialize the value of data memeber

    //Copy constructor
    A(const A&obj) : s(obj.s), k(obj.k) {
        cout<<"Move failed"<<endl;
    }
    //Move constructor
    A(A&& obj)noexcept : s(move(obj.s)), k(exchange(obj.k, 0)){};
};


// Fun function which take parameter as  class A
A fun(A a) 
{
    cout<<"Inside fun function"<<endl;
    return a;
}


// structure of B 

struct B : A 
{
    string s2;
    int n;
};


// structure of C 

struct C : B 
{
    ~C() {} // Destructor 

};

struct D : B 
{
    D() {} // Default constructor
    ~D() {} // Destructor
    D(D&&) = default; // Move constructor
};



int main() {

    cout<<"Trying to move class A"<<endl;

    A a1 = fun(A());

    cout<<"Before move a1.s = "<< quoted(a1.s)<<" "<< "a1.k = "<< a1.k <<endl;

    // Calling move constructor

    A a2 = move(a1);

    cout<<"After move a1.s = "<< quoted(a1.s)<<" "<< "a1.k = "<< a1.k <<endl;

    std::cout << "Trying to move B\n";

     B b1;
     std::cout << "Before move, b1.s = " << std::quoted(b1.s) << "\n";
      B b2 = std::move(b1); // calls implicit move constructor

      std::cout << "After move, b1.s = " << std::quoted(b1.s) << "\n";

      std::cout << "Trying to move C\n";
       C c1;
       C c2 = move(c1); 

    std::cout << "Trying to move D\n";
    D d1;
    D d2 = std::move(d1);


}