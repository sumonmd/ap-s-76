#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* next;
};
node* Head=NULL;

void insertLast(int value){
	node* nptr = new node;
	nptr->data = value;
	nptr->next = NULL;

	if(Head == NULL){
		Head = nptr;
	}
	else{
		node* tptr = Head;
		while(tptr->next!=NULL){
			tptr = tptr->next;
		}
		tptr->next = nptr;
	}

}
void insertFirst(int value){
	node* nptr = new node;
	nptr->data = value;
	nptr->next = NULL;
	if(Head == NULL){
		Head = nptr;
	}
	else{
		nptr->next = Head;
		Head = nptr;
	}

}
void deleteLast(){
	node* tptr = Head;
	while(tptr->next->next!=NULL){
		tptr = tptr->next;
	}
	tptr->next = NULL;

}

void deleteFirst(){
	if(Head==NULL){
		cout<<"Empty List"<<endl;
	}
	else{
		Head = Head->next;
	}
}

void deleteSpecificElement(int num){
	if(Head == NULL){
		cout<<"Empty List"<<endl;
	}
	else{
		node* nptr = Head;
		while(nptr->next->next!=NULL  && nptr->next->data != num){
			nptr = nptr->next;
		}
		if(nptr->next = NULL){
			cout<<"Not Found"<<endl;
		}
		else{
			nptr->next = nptr->next->next;
		}
	}

}
void print(){
	node* tptr = Head;
	while(tptr!=NULL){
		cout<<tptr->data<<" ";
		tptr = tptr->next;

	}

}
int main()
{
	insertLast(5);
	insertLast(2);
	insertLast(7);
	insertFirst(1);
	print();
	cout<<endl;
	deleteLast();
	print();
	cout<<endl;
	deleteFirst();
	print();
	deleteSpecificElement(1);
	print();

}
