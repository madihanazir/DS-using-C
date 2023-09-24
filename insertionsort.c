void insertsort(int A[], int n){

int i,j,x;

for(i=1;i<n;i++){  //cuz n-1 passes
j=i-1;
x=A[i];
while(j>-1 && A[j]>x){
	A[j+1]= A[j];
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
