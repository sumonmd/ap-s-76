#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
};
node* root = NULL;
void insertNode(int value)
{
	node* nptr = new node;
	nptr->data = value;
	nptr->left = NULL;
	nptr->right = NULL;

	if(root == NULL){
		root = nptr;
	}
	else{
		node* tptr = root;
		while(1){
				if(tptr->data > value){
					if(tptr->left == NULL){
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

void print(node* root)
{
	if(root != NULL){
		print(root->left);
		cout<<root->data<<" ";
		print(root->right);
	}

}
int getHeight(node* root)
{
	if(root!=NULL){

		return 1+max(getHeight(root->left),getHeight(root->right));

	}
}

int getLevelUtil(node *node,
                 int data, int level)
{
    if (node == NULL)
        return 0;

    if (node -> data == data)
        return level;

    int downlevel = getLevelUtil(node -> left,
                                 data, level + 1);
    if (downlevel != 0)
        return downlevel;

    downlevel = getLevelUtil(node->right,
                             data, level + 1);
    return downlevel;
}

int getLevel(node *node, int data)
{
    return getLevelUtil(node, data, 1);
}

int main()
{
	insertNode(4);
	insertNode(3);
	insertNode(5);
	insertNode(1);
	print(root);
	cout<<endl<<getHeight(root)<<endl;
	cout<<getLevel(root,4)<<endl;



	return 0;
}
