//given 2 sorted arrays find the median in o(logn) time
#include<stdio.h>
#include<limits.h>
 int max(int a,int b){
   return a>b?a:b;
 }

 int min(int a,int b){
   return a<b?a:b;
 }

double getMedian(int arr1[],int  arr2[],int n1,int n2){
  int begin=0;
  int end=n1;
  while(begin<=end){

    int i1= (end+begin)/2;
    int i2= (n1+n2+1)/2 - i1;

    int min1=(i1==n1)?INT_MAX:arr1[i1];  //min1 is the minimum element in right half  of arr1
    int max1=(i1==0)?INT_MIN:arr1[i1-1]; //max1 is the maximum element in left half of arr1
    int min2=(i2==n2)?INT_MAX:arr2[i2]; //minimum element in right half of arr2
    int max2=(i2==0)?INT_MIN:arr2[i2-1];//max element in left half of arr2

    if(max1<=min2 && max2<=min1){
      if((n1+n2)%2==0)
        return (double)((max(max1,max2)+min(min1,min2))/2);

      else
        return (double)(max(max1,max2));
    }
    else if(max1>min2) //go left side
      end=i1-1;

    else
      begin=i1+1; //go right side
  }
}

int main(int argc, char const *argv[]) {
  int arr1[]={1,2,3,4};
  int arr2[]={11,12,13,14};
  int n1=sizeof(arr1)/sizeof(arr1[0]);
  int n2=sizeof(arr2)/sizeof(arr2[0]);
printf("Median is: %f\n",getMedian(arr1,arr2,n1,n2) );
  return 0;
}
