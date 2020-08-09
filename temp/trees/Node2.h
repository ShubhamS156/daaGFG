#include <cstddef>
typedef struct Node2{
	int key;
	Node* prev;
	Node* next;
	Node(int x){
		key=x;
		prev=NULL;
		next=NULL;
	}
}Node2;
