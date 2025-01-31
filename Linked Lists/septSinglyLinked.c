#include<stdio.h>
#include<stdlib.h>

struct sll{
	int data;
	struct sll *link;
};
struct sll *start=NULL;


void createfront();
void display();
void deletefront();
void createend();
void deleteend();
void searchelement();



int main(){
	int c;
	do{
		printf("Press 1 for create\n 3 for display\n 2 for df\n 4 for end insert\n 5 for del end\n 6 for search");
		scanf("%d",&c);
		switch (c){
			case 1: createfront();
			break;
			case 2: deletefront();
			break;
			case 3: display();
			break;
			case 4: createend();
			break;
			case 5:deleteend();
			break;
			case 6: searchelement();
			break;
			default: printf("wrong option chosen");
			
		}	} while(c!=0);
                } 

void createfront(){ struct sll *p;
	int el;
	p= (struct sll*)malloc(sizeof(struct sll));
	printf("enter data");
	scanf("%d",&el);
		p->link=NULL;
		p->data=el;
	if (start==NULL){
		start=p;
}
else { p->link=start;
start=p;

 	
}
}

void deletefront(){
	struct sll *p;
	if(start==NULL){
		printf("empty");
	}	
	else{ p= start;
	start=p->link;
	}
}


void display(){
	struct sll *p;
	if(start==NULL){
		printf("empty");
		
	}
	else{ p=start;
		while(p!=NULL){
		printf("%d ", p->data);
			p=p->link;	
		}
	}
}

void createend(){
	struct sll *p,*q;
	int el;
	p=(struct sll*)malloc(sizeof(struct sll));
	printf("enter element");
	scanf("%d", &el);
	p->data= el;
	p->link=NULL;
	if (start==NULL){
		start=p;
	}
	else{ q=start;
		while(q->link!=NULL){
			q=q->link;
		} 
		q->link=p;
		
	}
}

void deleteend(){
	struct sll *p,*q;
	if (start==NULL){
		printf("eptyyyyy");
	}
	else{ q= start;
	while(q->link->link!=NULL){
	 q=q->link;
	} 	q->link=NULL;
	
	
		
	}
}

void searchelement(){
	struct sll *p,*q;
	int el;
	printf("enter element you wan to find");
	scanf("%d", &el);
		if(start==NULL){
		printf("none");
	}
	else{
		q= start;
		while(q!=NULL){
			 if (q->data == el){
		
			 printf("The element found is %d", q->data );}
			 	 q=q->link;
			
		}
	}
}