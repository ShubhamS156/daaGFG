#include <iostream>
using namespace std;
/* 
 * IDEA: if at any pump curr petrol becomes negative then we cannot start from any point before the current pump hence next start bceomes the next pump
 */

int circularTour(int petrol[],int dist[],int n){
	int prev_petrol=0;
	int start=0;
	int curr=0;
	for(int i=0;i<n;i++){
		curr+=(petrol[i]-dist[i]);
		if(curr<0){
			start=i+1;
			prev_petrol+=curr;
			curr=0;
		}

	}
	if(prev_petrol+curr>=0)
		return start+1;
	return -1;
}
 int main(){
	int petrol[]={50,10,60,100};
	int dist[]={30,20,100,10};
	int n=sizeof(petrol)/sizeof(petrol[0]);
	cout<<circularTour(petrol,dist,n);
	return 0;
}
