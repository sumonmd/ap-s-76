#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};
node* Head = NULL;
void insert_last(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL){
        Head=nptr;
    }else{
        node* tptr = Head;
        while(tptr->next!=NULL){
            tptr = tptr->next;
        }
        tptr->next=nptr;
    }
}

void insert_first(int value)
{
    node* nptr = new node;
    nptr->data = value;
    nptr->next = NULL;

    if(Head==NULL){
        Head=nptr;
    }else{
        nptr->next=Head;
        Head = nptr;
    }
}

void Remove_last()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }else{
        node* ptr = Head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=NULL;
    }
}
void Remove_first()
{
    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }else{
        Head=Head->next;
    }
}
void Remove_specific_element(int value)
{
    if(Head==NULL){
        cout<<"Specific element"<<endl;
    }
    else if(Head->data==value){
        Head=Head->next;
    }
    else{
        node* tptr = Head;
        while(tptr->next->next!=NULL && tptr->next->data!=value){
            tptr=tptr->next;
        }
        if(tptr->next==NULL){
            cout<<"Not Found"<<endl;
        }else{
            tptr->next=tptr->next->next;
        }

    }

}
void print()
{

    if(Head==NULL){
        cout<<"Empty List"<<endl;
    }else{
        node* ptr = Head;
        while(ptr!=NULL){
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}
int main()
{
    cout<<"Insert in Last"<<endl;
    insert_last(3);
    insert_last(4);
    insert_last(5);
    insert_last(6);
    insert_last(8);
    insert_last(9);
    print();
    cout<<endl;
    cout<<"Insert in First "<<endl;
    insert_first(7);
    insert_first(0);
    print();
    cout<<endl;
    cout<<"Remove from last"<<endl;
    Remove_last();
    print();
    cout<<endl;
    cout<<"Remove from First"<<endl;
    Remove_first();
    print();
    cout<<endl;
    cout<<"Remove specific element from list"<<endl;
    Remove_specific_element(5);
    Remove_specific_element(8);
    print();
    return 0;
}
