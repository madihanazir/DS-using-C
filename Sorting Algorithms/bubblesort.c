#include<stdio.h>
#include<stdlib.h>


void swap(int *x, int *y){
	int temp=*x; // Declare a temporary variable and assign the value pointed to by x
    *x = *y;         // Update the value pointed to by x with the value pointed to by y
    *y = temp;       // Update the value pointed to by y with the value stored in the temporary variable
}
void bubble(int A[], int n){  //Function to perform the Bubble Sort algorithm on an integer array A of size n//
	
	int i,j,flag=0; //Initialize loop variables and a flag to track swaps
	
	for(i=0;i<=n-1;i++){ //Outer loop for the number of passes (n-1 passes for an array of size n)
		flag=0; //Reset the flag at the beginning of each pass
		
		for(j=0;j<n-i-1;j++){ //Inner loop to compare and swap adjacent elements
			
			if(A[j]>A[j+1]){ 
			 //If the current element is greater than the next element, swap them
			swap (&A[j], &A[j+1]);
			flag=1;
			} //Set the flag to indicate that a swap has occurred			
		} //If no swaps occurred during this pass, the array is already sorted
		if(flag==0)
	    break;
	} 
	}

int main(){
	int A[]={7,3,9,10}, n=4,i; //Store the size of the array
	bubble(A,4);
	for(i=0;i<4;i++){ //Display the sorted array
		printf("%d",A[i]);
		printf("\n");
	}
	
	
}