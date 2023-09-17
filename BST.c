#include <stdio.h>
#include <stdlib.h>
struct bst{
	struct bst *l;
	struct bst *r;
	int data;
};
struct bst *root=NULL;

void insert();
void inorder();
void preorder();

int main(){
	int c, el;
	struct bst *t;
	do{
		printf("enter 1 for insert, 2 for inorder, 3 for post order, 4 for preorder\n");
		scanf("%d",&c);
	switch(c){
		case 1:
			insert();
			break;
		case 2: inorder(root);
		     break;
		case 4: preorder(root);
		     break;
		default:
				printf("enter correct");
				
	}	
	}while(c!=0);
	return;
}

void insert(){
	int el;
	struct bst *t,*parent,*curr;
	t=(struct bst*)malloc(sizeof(struct bst));
	printf("enter the elements\n");
	scanf("%d",&el);
	t->data=el;
	t->l=NULL;
	t->r=NULL;	
	parent= root;
	if(root==NULL){
		root=t;
	}
else{
	curr= root;
	while(curr){
		parent=curr;
		if(t->data > curr->data){
			curr= curr->r;
		}
	else{
		curr= curr->l;
	}
	}
if(t->data>parent->data){
	parent->r=t;
}
else{
	parent->l=t;
	
}
	
}
	
	}
	
void inorder(struct bst *t){
		if(t==NULL){
		return;
	}
else{ inorder(t->l);
    printf("%d", t->data);
    inorder(t->r);
} }

void preorder(struct bst *t){
	if(t==NULL){
		return;
	}
	else{
		printf("%d",t->data);
		preorder(t->l);
		preorder(t->r);
	}
	
}
