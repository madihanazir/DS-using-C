#include <stdio.h>
#include <stdlib.h>
struct bst{
	struct bst *l;
	struct bst *r;
	int data;
};
struct bst *root=NULL;

void insert();
void inorder(struct bst* t);
void preorder(struct bst* t);
void deletebst();

int main(){
	int c, el;
	struct bst *t;
	do{
		printf("enter 1 for insert, 2 for inorder, 3 for post order, 4 for preorder\n5 for delete");
		scanf("%d",&c);
	switch(c){
		case 1:
			insert();
			break;
		case 2: inorder(root);
		     break;
		case 4: preorder(root);
		     break;
		case 5: deletebst();
		     break;
		default:
				printf("enter correct value\n");
				
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
	//parent= root;//
         parent=NULL;
	curr=root;
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


void deletebst(){
	 int el;
    printf("Enter the element to delete: ");
    scanf("%d", &el);
      struct bst *parent = NULL;
    struct bst *curr = root;
    
    // Search for the node to delete and keep track of its parent
    while (curr!= NULL && curr->data!=el) {
        parent = curr;
        if (el< curr->data) {
            curr= curr->l;
        }
        else {
            curr= curr->r;
        }
    }
// If the element was not found
    if (curr== NULL) {
        printf("Element not found.\n");
        return;
    }

    // Case 1: Node with no child
    if (curr->l == NULL && curr->r == NULL) {
        // If it's the root node
        if (parent == NULL) {
            free(root);
            root = NULL;
        }
        else if (parent->l == curr) {
            free(parent->l);
            parent->l = NULL;
        }
        else {
            free(parent->r);
            parent->r = NULL;
        }
    }

    // Case 2: Node with one child
    else if (curr->l == NULL || curr->r == NULL) {
        struct bst *child = (curr->l != NULL) ? curr->l : curr->r;

        // If it's the root node
        if (parent == NULL) {
            free(root);
            root = child;
        }
        else if (parent->l == curr) {
            free(parent->l);
            parent->l = child;
        }
        else {
            free(parent->r);
            parent->r = child;
        }
    }
else {
        struct bst *successor_parent = curr;
        struct bst *successor = curr->r;

        // Find the in-order successor (smallest node in the right subtree)
        while (successor->l != NULL) {
            successor_parent = successor;
            successor = successor->l;
        }

        // Copy the successor's data to the current node
        curr->data = successor->data;

        // Delete the in-order successor
        if (successor_parent->l == successor) {
            successor_parent->l = successor->r;
        }
        else {
            successor_parent->r = successor->r;
        }

        free(successor);
    }

    printf("Element deleted successfully.\n");
}

