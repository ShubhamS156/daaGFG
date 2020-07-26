#include<iostream>
using namespace std;

typedef struct Kstack{
int capacity,k,freeTop=0;
int *arr,*top,*next;
Kstack(int n,int num){   // constructor
    capacity=n;
    k=num;
    arr=new int[capacity];
    next=new int[capacity];
    top=new int[k];
    for(int i=0;i<k;i++)
        top[i]=-1;
    for(int i=0;i<capacity;i++)
        next[i]=i+1;
    next[capacity-1]=-1;
}
void push(int key, int sn){
    int i=freeTop;
    arr[i]=key;
    freeTop=next[i];
    next[i]=top[sn];
    top[sn]=i;
}
int pop(int sn){
    int i=top[sn];
    top[sn]=next[i];
    next[i]=freeTop;
    freeTop=i;
    return arr[i];
}

};