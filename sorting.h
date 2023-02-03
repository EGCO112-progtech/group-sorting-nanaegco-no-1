#include <stdio.h>
// selection sort function module in C
void swap();

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selection(int a[], int n) {

  int i, j;

  int m = a[0]; // minimum
  int mi = 0;

  for (j = 0; j < n - 1; j++) {
    m = a[j];
    mi = j;
    for (i = j + 1; i < n; i++) {
      if (m < a[i]) {
        m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);
    display(a, n);
  }
}


void insertion(int a[], int n) {
  int i, j, m;
  for (i = 0; i < n - 1; i++) {
    if (a[i] < a[i + 1]) {
      swap(&a[i], &a[i + 1]);
      display(a, n);
      for (j = i; a[j - 1] > a[j] && i > 0; j--) {
        swap(&a[j - 1], &a[j]);
        display(a, n);
      }
    printf("/n");
    }
  }
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubble(int a[],int n){

int i,j;
  for(i=0; i<n i++){
    int sorted=0;
    for(j=0; j<=n-1; j++)
      if(a[j]<a[j+1]){
        swap(&a[j],&a[j+1]);
        sorted=1;
      }
    display(a,n);
  }
  if(sorted==0) break;
}

  
  
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




