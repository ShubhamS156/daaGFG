//check if the given sum exists in any of  subarr possible
//works only for positive subarr
//sliding technique
//wont work if  there are duplicate entries in array

#include <stdio.h>
#include <stdbool.h>
bool sumInSubArr(int arr[],int n,int sum){
int currSum=arr[0],s=0;
for(int e=1;e<n;e++){
  while(currSum>sum && s<e){     //check if currSum got greater after adding the last element
    currSum-=arr[s];
    s++;
  }
  if(currSum==sum)
    return true;

  currSum+=arr[e];
}
return (currSum==sum);    //condition is to check if adding the last element gives us the desired sum ..have to check explicitly
                          //coz if condition is before the add operation

}


int main(int argc, char const *argv[]) {
  int arr[]={1,9,3,2,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  int sum=17;
  bool x=sumInSubArr(arr,n,sum);
  printf("arr contains sum %d: %s \n",sum,x?"true":"false");
  return 0;
}
