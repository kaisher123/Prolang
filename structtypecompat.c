#include <stdio.h>
#include <stdlib.h>
typedef struct {
   int a;
   float b;
} struct1;

typedef struct {
   int b;
   float c;
} struct2;

int main() {
   struct1 var1; 
   struct2 var2;
   var2 = var1;
}