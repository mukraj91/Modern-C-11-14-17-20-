/*

auto -> Auto type of the variable are deduced by the compiler according to the type of their initializer.
Decltype -> Gives the type information at compile time while typeid gives at runtime.
*/
#include<iostream>
#include<vector>
using namespace std;

void test() {



auto a = 3.145; // Double

auto b = 23; // int

auto &c = b; // int&

auto d = {0} ;// std::initilizer_list<int>;
auto &&q = 1; // int&&
auto g = new auto(22) ;// int*;

const auto a3 = 1; // const int;
auto i = 1, j = 1, k = 3; // int, int, int

 // auto l = 1, m = true, n = 1.31; // Error deduced should be one type, other wise compiler will get confused

 //auto u ; // Error variable should be initialized


std::vector<int> DataVector = {1, 2, 3, 4, 5,6};

std::vector<int>::const_iterator cit = DataVector.begin();

cout<<"Cit = "<<*cit<<endl;

auto elm = DataVector.begin();





cout<<"Test the auto use case"<<std::endl;
}

int main(){

    test();
    return 0;
}