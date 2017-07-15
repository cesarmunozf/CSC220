#include <stdio.h>
int main(){
   int *y = &x;
   int **z = &x;
   printf("z=%p, *z=%p, **z= %d &z=%p\n", z, *z, **z, &z); 
   printf("An extra message");
// this is a C++ comment
   return 0; 
}
