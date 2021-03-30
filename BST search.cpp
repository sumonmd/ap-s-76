#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left;
	node* right;
};
node* root = NULL;
void insertNode(int item){
	node* nptr = new node;
	nptr->data = item;
	nptr->left = NULL;
	nptr->right = NULL;

	node* tptr = root;
	if(root==NULL){
		root = nptr;
	}
	else{
		while(true){
			if(tptr->data > item){
				if(tptr->left==NULL){
					tptr->left = nptr;
					break;
				}
				else{
					tptr = tptr->left;
				}
			}
			else{
				if(tptr->right == NULL){
					tptr->right = nptr;
					break;
				}
				else{
					tptr = tptr->right;
				}
			}

		}
	}

}

void printTree(node* root)
{
	if(root!=NULL){
		printTree(root->left);
		cout<<root->data<<" ";
		printTree(root->right);
	}

}

void searchItem(node* root, int item)
{
	node* tptr = root;
	while(true){
		if(tptr == NULL || tptr->data == item){
			if(tptr==NULL){
				cout<<"Not Found"<<endl;
			}
			else{
				cout<<" Found"<<endl;
			}
			break;
		}
		else{
			if(tptr->data > item){
				tptr = tptr->left;
			}
			else{
				tptr = tptr->right;
			}


		}


	}


}

int main()
{
insertNode(1);
insertNode(10);
insertNode(6);
insertNode(5);
printTree(root);
cout<<endl;
searchItem(root,100);
return 0;
}
