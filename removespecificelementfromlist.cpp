#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
node* Head = NULL;
void createNode(int value)
{
	node* nptr = new node;
	nptr->data = value;
	nptr->next = NULL;
	node* tptr = Head;
	if(Head==NULL){
		Head = nptr;
	}
	else{
		while(tptr->next != NULL){
			tptr = tptr->next;
		}
		tptr->next = nptr;
	}

}
void removeSpecific(int item)
{
	node* tptr = Head;
	while(tptr->next != NULL && tptr->next->data != item){
		tptr = tptr->next;
	}
	tptr->next = tptr->next->next;

}

void print(node* Head){
	if(Head != NULL){
		cout<<Head->data<<" ";
		print(Head->next);
	}
}

int main()
{
createNode(4);
createNode(3);
createNode(2);
createNode(1);
print(Head);
cout<<"++++++++++++++"<<endl;
removeSpecific(1);
print(Head);
	return 0;
}
