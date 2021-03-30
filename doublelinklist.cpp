#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* prev;
	node* next;
};
node* Head = NULL;

void insertFirst(int value){
	node* nptr = new node;
	nptr->data = value;
	nptr->prev = NULL;
	nptr->next = NULL;

	if(Head == NULL){
		Head = nptr;
	}
	else{
			node* tptr =  Head;
			while(tptr->next != NULL){
				tptr = tptr->next;
			}
			tptr->next = nptr;
			nptr->prev = tptr;
	}

}

void print(){
	if(Head==NULL){
		cout<<"Empty List"<<endl;
	}
	else{
		node* tptr = Head;
		while(tptr!=NULL){
			cout<<tptr->data<<" ";
			tptr = tptr->next;
		}
	}
}

int main()
{
	insertFirst(5);
	insertFirst(8);
	insertFirst(9);
	print();


	return 0;
}
