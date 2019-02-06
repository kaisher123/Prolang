#include <stdio.h>

int func() {
   static int i = 0;    //static ทำให้ ค่า i ทำงานแค่ครั้งเดียว ทำให้ i สามารถเก็บค่าได้ต่อเนื่อง หากนำ staticออก i จะกลายเป็น 0 ทุกครั้งที่เรียกใช้ฟังก์ชั่น
   i++;
   return i;
}
int main() {
   printf("%d\n", func());
   printf("%d\n", func());
   
}
