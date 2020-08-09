#include <iostream>
using namespace std;
/*
 * NAIVE IMPLEMENTATION: check one by one if every petrol pump is a start point
 *
 */
int circularTour(int petrol[],int dist[],int n){
	int start=0;
	for(;start<n;start++){
		int curr=0;
		int end=start;
		while (true) {
			curr+=petrol[end]-dist[end];
			if(curr<0)
				break;
			end=(end+1)%n;
			if(start==end)
				return start+1;	//+1 to return position of petrol pump instead of index

		}
	}
	return -1;
}
int main(){
	int petrol[]={4,8,7,4};
	int dist[]={6,5,3,5};
	int n=sizeof(petrol)/sizeof(petrol[0]);
	cout<<circularTour(petrol,dist, n);
	return 0;
}
