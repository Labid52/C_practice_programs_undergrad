#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* address;
};
Node* head = new Node;
Node* first = new Node;
Node* second = new Node;

int main() {
	head -> data = 1;
	head -> address = first;
	first -> data = 2;
	first -> address = second;
	second -> data = 3;
	second -> address = NULL;
	Node* temp = new Node;
	temp = head;
	cout<<"Current Linked list is:"<<endl;
	while (temp != NULL){
		cout<<temp -> data<<endl;
		temp = temp -> address;
	}
	return 0;
}