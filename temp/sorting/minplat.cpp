//min platform is maximum overlapping train's time
#include<iostream>
#include<algorithm>
using namespace std;

int platform(int arr[],int n1,int dep[],int n2){
    sort(arr,arr+n1);
    sort(dep,dep+n2);
    int count=1; //first train comes
    int res=1;
    int i=1,j=0;
    for( i=1;i<n1;){
        if(arr[i]<=dep[j]){
            i++;
            count++;
        }
        else{
            count--;
            j++;
        }
        res=max(res,count);
        
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int arr[]={900,940,950,1100,1500,1800};
    int dep[]={910,1200,1120,1130,1900,2000};
    int n1=sizeof(arr)/sizeof(arr[0]);
    cout<<"Min: "<<platform(arr,n1,dep,n1);
    return 0;
}
/* code */