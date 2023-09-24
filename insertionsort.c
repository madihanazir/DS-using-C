void insertsort(int A[], int n){

int i,j,x;

for(i=1;i<n;i++){  //cuz n-1 passes //Iterate through the array, starting from the second element (index 1)
j=i-1; //Initialize j to the index of the previous element
x=A[i];  //Store the current element in x.
	// While j is within the bounds of the array and the element at A[j] is greater than x,
        // shift the elements to the right to make space for x.
while(j>-1 && A[j]>x){ 
	//
	A[j+1]= A[j]; // Insert x into its correct position in the sorted part of the array.
	j--;
} A[j+1]=x;	

}
}



int main(){ int A[]={2,8,3,5,1}, n=5,i;
insertsort(A,n);

for(i=0;i<5;i++) 
printf("%d", A[i]);
printf("\n");
}
