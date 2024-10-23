#include<stdio.h>
#include<stdlib.h>


void enq();
void dq();
void display();

int f=-1,r=-1, q[7];

void enq(){
	int el;
	if(f==(r+1%10)){
		printf("q is full")
	}
}

int main(){ int c;
do{
    printf("enter 1 for enqueue\n 2 for dequeue\n 3 for display");
    scanf("%d",&c);
    switch(c){
    	case 1: enq();
    	break;
    	case 2: dq();
    	break;
    	case 3: display();
    	break;
    	default: printf("enter correct option\n");
	}
    
} while(c!=0);
	
}


