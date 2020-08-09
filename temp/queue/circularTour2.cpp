#include <iostream>
#include<queue>
using namespace std;
/*IDEA: 
 *if eventually you get a negative current petrol then that means that you cant start from where you started. Therefore you remove that pump out from queue and remove the petrol count of it too.
 In such a case you keep removing till you get a positive petrol count or else when the queue becomes empty.
 */
int circularTour(int petrol[],int dist[],int n){
	queue<int> q;
	int curr=0;
	for(int start=0;start<n;start++){
		q.push(start);
		curr+=petrol[start]-dist[start];
		while(curr<0 && !q.empty()	){
			curr=curr-(petrol[q.front()]-dist[q.front()]);
			q.pop();
		}


	}
	if(!q.empty())
		return q.front()+1;
	return -1;
}

int main(){
	int petrol[]={60,10,140,80};
	int dist[]={30,20,100,10};
	int n=sizeof(petrol)/sizeof(petrol[0]);
	cout<<circularTour(petrol,dist,n);
	return 0;

}
