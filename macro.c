#include <stdio.h>
//#define f(x) x * x 
int f(int x) {
   return x * x;
}
int main() {
  int a = 3;
  printf("%d\n", f(a+2));  
}

//จากโค้ดแรก ที่ได้ 11 เพราะว่า มันทำที่คูนก่อน 
//a+2 * a+2  ----เข้ามาแบบนี้ มันจึงทำคูณก่อน เป็น a+2a+2 คำตอบจึงเป็น 11

