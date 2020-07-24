#include<iostream>
#include<cstring>
using namespace std;
char * countSort(char arr[]){
    int count[26]={0};
    int n=strlen(arr);
    char* output=new  char[n];
    for(int i=0;i<n+1;i++){
        count[int(arr[i])-97]++;
    }
     for(int i=1;i<26;i++){    //prefix sum
        count[i]+=count[i-1];
    }
       for(int i=n-1;i>=0;i--){
        output[count[int(arr[i])-97]-1]=arr[i];
        count[int(arr[i])-97]--;
    }
    return output;

  
}
int main(int argc, char const *argv[])
{
     long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n;
        scanf("%ld",&n);
        char arr[n+1];
        scanf("%s",arr);
      // cout<<strlen(arr);
        countSort(arr);
        printf("%s\n", countSort(arr));
    }
    return 0;
}
