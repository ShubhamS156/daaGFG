#include<iostream>
#include<queue>
using namespace std;

typedef struct triplet{
    int val;
    int arrPos;
    int index;
    triplet(int x,int y,int z){
        val=x;
        arrPos=y;
        index=z;

    }
}triplet;
typedef struct comparator{
bool mycomp(triplet &t1,triplet &t2){
    return t1.val > t2.val; //written in doc return reverse bool value
}
}comparator;

vector<int> sortk(vector<vector<int>> &arr){
 vector<int> res;
 priority_queue<triplet,vector<triplet>,comparator> pq;
 for(int i=0;i<arr.size();i++){
     triplet t(arr[i][0],i,0);
     pq.push(t);
 }
 while(!pq.empty()){

     res.push_back(pq.top().val);
     int arrIndex=pq.top().arrPos;
     int keyIndex=pq.top().index;
    pq.pop();
    if(keyIndex+1<arr[arrIndex].size()){
        triplet t(arr[arrIndex][keyIndex+1],arrIndex,keyIndex+1);
        pq.push(t);
    }
 }
 return res;
}
