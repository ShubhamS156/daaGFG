#include<stdio.h>
#include<limits.h>
#include<math.h>

int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}
int median(int a[],int n1,int b[],int n2){
    int begin=0;
    int end=n1;
    while(begin<=end){
        int i1=(begin+end)/2;
        int i2=(n1+n2+1)/2 -i1;
     //   cout<<" :"<<i1<<endl;
        int min1=(i1==n1)?INT_MAX:a[i1];
        int max1=(i1==0)?INT_MIN:a[i1-1];
        int min2=(i2==n2)?INT_MAX:b[i2];
        int max2=(i2==0)?INT_MIN:b[i2-1];

        if(max1<=min2 && max2<=min1){
            if((n1+n2)%2==0){
                return ((min(min1,min2)+max(max1,max2))/2);
            }
            else return (max(max1,max2));
        }
        else if(max1>min2){ //go left in a[] to decrease max1
            end=i1-1;
        }
        else{
            begin=i1+1; //go right in a[] to increase min1
        }
    }
}
int main(int argc, char const *argv[])
{
    int a[]={1,2,3,4};
    int b[]={11,12,13,14};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    printf("Median %d",median(a,n1,b,n2));
    return 0;
}
