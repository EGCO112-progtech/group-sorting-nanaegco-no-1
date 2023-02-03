#include <stdio.h>
// selection sort function module in C
void swap();

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selection(int a[], int n) {
  int i, j, m;
  for (i = 0; i < n - 1; i++) {
    m = i;
    for (j = i + 1; j < n; j++) {
      if (a[j] > a[m])
        m = j;
    }
    if(m != i){
      swap(&a[i], &a[m]);
      display(a, n);
      printf("\n");
    }
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
      printf("\n");
    }
  }
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
