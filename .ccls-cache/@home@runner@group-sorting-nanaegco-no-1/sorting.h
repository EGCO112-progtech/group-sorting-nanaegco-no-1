#include <stdio.h>
// selection sort function module in C
void swap();

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selection(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[], int n) {
  int i, j, m;
  for (i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
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
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




