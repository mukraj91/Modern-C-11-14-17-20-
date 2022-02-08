/*
Lambda capture initializers:-
This allows creating lambda captures initialized with arbitrary expressions.

*/

int main()
{
   int factory(int i) {
        return i * 10;
 }
 
auto f = [x = factory(2)] { 
    return x; 
    }; // returns 20



auto generator = [x = 0] () mutable {
  // this would not compile without 'mutable' as we are modifying x on each call
  return x++;
};
auto a = generator(); // == 0
auto b = generator(); // == 1
auto c = generator(); // == 2

return 0;

}
