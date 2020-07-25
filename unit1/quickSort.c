#include <stdio.h>
//partition , swap.
void swap(int *a,int *b){
  int temp=*b;
  *b=*a;
  *a=temp;
}
int partition(int arr[],int low,int high){
  int pivot=arr[high];
  int i=low-1;
  for (int j=low;j<=high-1;j++) {
    if(arr[j]<pivot){
      i++;
      swap(&arr[i],&arr[j]);
    }
  }
  swap(&arr[i+1],&arr[high]);
  return i+1;
}

void quickSort(int arr[],int low,int high){
  if(low<high){
    int pi=partition(arr,low,high);
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}

int main(int argc, char const *argv[]) {
  int arr[10]={4,2,6,4,3,1,9,10,8,5};
quickSort(arr,0,9);
for (size_t i = 0; i < 10; i++) {
printf("%d\t",arr[i] );
}
  return 0;
}
