#include<stdio.h>
#include<stdlib.h>

int main(){
	int *p, *q; //pointers to create array in heap 
	int i;
	p= (int*) malloc (5*(sizeof(int)));
	p[0]=3;
	p[1]= 5;
	p[2]= 7;
	p[3]= 9;
	p[4]= 11;
	
	
	
	/*for(i=0; i<5; i++)
	printf("%d\n", p[i]); 
	//now suppose this 5 sized array isnt sufficent & we need to increase size//
	//so we create another pointer q of larger size//
	*/
	q= (int*)malloc (10*sizeof(int));
	//transfer values of p to q array// 
	
	for(i=0; i<5; i++)
	q[i]= p[i];
	free(p);
	p=q; //address of p given to q//
	q= NULL; //p still pointing on same address, on new array//
	
	for(i=0; i<10; i++) //array of size n accessed with the help of q pointer//
	printf("%d \n",p[i]);	
	
		return 0;
}