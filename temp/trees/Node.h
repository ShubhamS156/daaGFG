typedef struct Node{
	Node *left;
	Node *right;
	int key;
	Node(int x){
		key=x;
		left=right=NULL;
	}
}Node;

Node * newNode(int x){
	Node * node=new Node(x);
	return node;
}
