#include <iostream>
using namespace std;
class Foo {
   public:
      int x;
      Foo() {
         x = 5;
      }
      void func() {
         int x = 6;
         cout << "local x = " << x << endl;
         cout << "object x = " << Foo::x << endl;
      }
};

int main() {
   Foo obj;
   obj.func();
}