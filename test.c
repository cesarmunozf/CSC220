#include <stdio.h>
int main(){
   int x = 34;
   int *y = &x;
   int **z = &x;
   printf("z=%p, *z=%p, **z= %d &z=%p\n", z, *z, **z, &z); 
   return 0; 
}
