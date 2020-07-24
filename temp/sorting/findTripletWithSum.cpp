bool find3Nums(int arr[],int n,int x){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        int sum=x-arr[i];
        while(j<k){
            if(arr[j]+arr[k]>sum){
                k--;
            }
            else if (arr[j]+arr[k]<sum)
            {
                j++;
            }
            else
            {
                return true;
            }
            
            
        }
    }
    return false;
}