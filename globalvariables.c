#include <stdio.h>
void func2();  //function declaration
void func1() {
   extern int globalVar; //declaration
   printf("func1 globalVar = %d\n", globalVar);   
}

int globalVar = 5; //definition

void func2() { //function definition
   printf("func2 globalVar = %d\n", globalVar);
}

int main() {
   func1();
   func2();
}