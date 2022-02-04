#include<iostream>

using namespace std;


int sum(const std::initializer_list<int>& Slist) {

    int total = 0;

    for(auto e : Slist) {

        total+= e;
    }

    return total;
}

int main() {

    auto V_list = {1, 2, 3};
    auto total = sum(V_list); // Calling
    cout<<"Total Sum = " << total<<endl;

    cout<<"Sum Value= "<<sum({1, 2, 3, 4})<<endl;
    cout<<"S Value= "<<sum({})<<endl;

    return 0;

}