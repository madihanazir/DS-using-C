#include<stdio.h>
#include<stdlib.h>
void insertatend();
void insertfront();
void deletefront();
//void //deletesll();
void display();
/*void countsll();
void modify();
*/
struct sll{
	int data;
	struct sll *link;
};
struct sll *start = NULL;
int main(){
	int c;
	do {
		printf("Press 1 for insert-from-last \n 2 for insert-from-front\n 3 for display \n 4 for delete-from-front");
		scanf("%d", &c);
		switch (c){
			case 1: insertatend();
			break;
			case 2: insertfront();
			break;
			case 3: display();
			break;
			case 4: deletefront();
			break;
			case 5: //deletesll();
			break;
		default: printf("Wrong option chosen");
		}
	} while (c!=0);
	return 0;
}
void insertatend(){
	struct sll *p, *q;
	int el;
	p= (struct sll *)malloc(sizeof(struct sll));
	if (p==NULL)
	{
		printf("No memory");
		return 0;
	} 
	printf("enter data");
	scanf("%d", &el);
	p-> data = el;
	p-> link= NULL;
	if (start == NULL)
	start = p;
	else{
		q = start;
		while(q->link!= NULL){ /*a temp ptr q to traverse thru the list. 
		q is made to point the first node of the list*/
			q= q-> link;
		}
		
	q->link = p;
	//p->link = NULL; /* At the end of the loop, the q will be pointing to the last node of the list.
	/*Now, allocate the space for the new node & assign the item to its data part.
	  Since, the new node is going to be the last node of the list hence, 
	  the next part of this node needs to be pointing to the null. We need to make the next part of the q node
	   (which is currently the last node of the list) point to the new node (p) 
*/	}	
		
	}
	


void insertfront(){ //create a new node
	struct sll *p;
	int el;
	p= (struct sll*)malloc (sizeof(struct sll));
	
	if (p==NULL){
		printf("no memory");
		return;
	}
	printf("enter the elements\n");
	scanf("%d", &el);
	p->data = el;
	p->link= NULL;
	
	//If the start node is NULL, make the new node as head
	if(start==NULL){
		start=p;
		
	}
	else {  p->link = start;
	          start= p;	}
		}



void deletefront(){
	struct sll * p;
	if(start==NULL){
		printf("singly linked list empty");
		return;
	}
	else {
		p= start;
		start= p->link;
		p-> link= NULL;
		free(p);
	}
}

void display(){
               struct sll *q;
			   q= start;
			   while (q->link!=NULL){
			   	printf("element=%d, link = %d\n", q->data, q->link);
			   	q= q->link;
			   }
			   printf("element=%d, link = %d\n", q->data, q->link);	
}

	