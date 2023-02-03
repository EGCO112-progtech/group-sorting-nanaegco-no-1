#include <stdio.h>
// selection sort function module in C

void swap();

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 



void insertion(int a[],int n){


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




