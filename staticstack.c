#include<stdio.h>
#include<stdlib.h>

void push();
void pop();
void display();

int top=-1;
int stk[5];

int main(){
	int c;
	do{ printf("enter 1 for push\n 2 for pop\n 3 for display");
	scanf("%d", &c);
		switch(c){
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			default: printf("wrong option");
		
	}
		} while(c!=0);
}

void push()
{
	int el;
	if(top>4){
		printf("Stack overflown");
	}
else{
	top=top+1;
	printf("enter element");
	scanf("%d", &el);
	stk[top]=el;
}
}

void pop(){
	int el;
	if (top==-1){
		printf("stack empty");
	}
else { el= stk[top];
	printf("element deleted is %d", el);
	top=top-1;
}
}

void display(){ int i;
	if (top==-1){
		printf("Nothing to display");
		
	} else { //for(i=top; i>0;i--);  
	for(i=0;i<=top;i++){
	
	printf("stack elements are %d", stk[i]);
		
	}
} }