#define N 6
#include <stdio.h>

#include "sorting.h"

int main() {
  int a[N]={3,2,6,7,3,1};
  int i,j,new_number;

   display(a,N);
  bubbleSort(a,N); 
   //insertion(a,N);

  // selectionSort(a,N);
   display(a,N);
 return 0;
}


