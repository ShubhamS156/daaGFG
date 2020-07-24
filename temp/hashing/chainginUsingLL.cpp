#include<iostream>
#include<list>
using namespace std;

class myHash{
    public:
    int bucket; //size of hash table
    list<int> *table; //array of list
    
    myHash(int b){ //constructor
        bucket=b;
        table=new list<int>[bucket];
    }
    int hash(int key){
        return  key%bucket;
    }
    void remove(int key){   //delete
        int index=hash(key);
        table[index].remove(key);
    }
    bool search(int key){ //search
        int i=hash(key);
        for(auto x: table[i])
            if(x==key)
                return true;
        return false;
    }
    void insert(int key){ //insert
        int i=hash(key);
        table[i].push_back(key);
    }    

};