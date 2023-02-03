#include "sorting.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int *a, n = argc-2 ;
  a = (int *)malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    a[i] = atoi(argv[i + 2]);
 if(!strcmp(argv[1], "bubble")){
   display(a,n);
   bubble(a,n);
   display(a,n);
 }
 else if(!strcmp(argv[1], "insertion")){
   display(a,n);
   insertion(a,n);
   display(a,n);
 }
 else if(!strcmp(argv[1], "selection")){
   display(a,n);
   selection(a,n);
   display(a,n);
 }
 return 0;
}