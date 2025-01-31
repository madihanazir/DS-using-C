//Both iterative and recursive version

#include<stdio.h>
// itertaive
struct Array{
	int a[10];
	int length;
	int size;
};

int binarysearch(struct Array arr, int key){
	int l,mid,h;
	l=0;
	h=arr.length -1;
	
	while(l<=h){
		mid= (l+h)/2;
		if (key==arr.a[mid])
		return mid;
		else if (key<arr.a[mid])
		h= mid-1;
		else l= mid+1;
	}
	return -1;


}

// recursive
int Rbinsearch(int a[], int l, int h, int key){
	int mid;
	if (l<=h){
		mid= (l+h)/2;
		if (key==a[mid])
		return mid;
		else if (key<a[mid])
		return Rbinsearch(a,l,mid-1,key);
		else 
		return Rbinsearch(a,mid+1,h,key);	}
	
	return -1;
	
}

int main(){
	struct Array arr= {{2,3,4,5,6}, 5,10};
	printf("%d\n",binarysearch(arr,2));
	printf("%d\n",Rbinsearch(arr.a,0,arr.length,5));
	return 0;
	
	};
	

