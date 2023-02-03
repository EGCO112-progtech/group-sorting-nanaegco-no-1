#include <stdio.h>
// selection sort function module in C
void swap();

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int A[],int n) {
    int temp,max,i,j;
    for(i=0;i<n-1;i++) {
        max = i; 
        for(j=i+1;j<n;j++) {
            if(A[j] > A[max]) {
                max = j;
            }
        }
        temp = A[max]; 
        A[max] = A[i];
        A[i] = temp; 
        display(A,n);
        printf("\n");
    }
  printf("\n");
}  

void insertion(int A[], int n1) {
  int i, j;
  int value = A[j];
  display(A,n1);
  for (j = 1; j < n1; j++) {
    int value = A[j];
    for (i = j - 1; i >= 0; i--) {
      if (value < A[i])
        break;
      else
        A[i + 1] = A[i];
      display(A, n1);
    }
    A[i + 1] = value;
    display(A, n1);
    printf("\n");
  }
    printf("\n");
}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubble(int a[], int n) {

  int i, j;
  for (i = 0; i < n; i++) {
    int sorted = 0;
    for (j = 0; j < n - 1 - i; j++) {
      if (a[j] < a[j + 1]) {
        swap(&a[j], &a[j + 1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");
    if (sorted == 0)
      break;
  }
}
