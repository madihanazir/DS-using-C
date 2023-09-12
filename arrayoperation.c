#include<stdio.h>
#include<stdlib.h>

int arr[10],size,number_at_index,position,x,noAtFront,noAtBack;
void traversal();
void insertionAtAnyPosition();
void display();
void insertAtFront();
void insertAtBack();
void deleteAtAnyPosition();
void deleteAtBack();

int main(){
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d", &size);
    if(size>10){
        printf("ARRAY SIZE OVERFLOW\n");
    }
    else{

    do{
            printf("\n");
            printf("ENTER 1 FOR ARRAY TRAVERSAL \n");
            printf("ENTER 2 FOR ARRAY INSERTION AT ANY POSITION \n");
            printf("ENTER 3 FOR ARRAY INSERTION AT FRONT\n");
            printf("ENTER 4 FOR ARRAY INSERTION AT BACK\n");
            printf("ENTER 5 TO DISPLAY THE ARRAY\n");
            printf("ENTER 6 TO DELETE ELEMENT OF ARRAY AT A SPECIFIC POSITION\n");
            printf("ENTER 7 TO DELETE ELEMENTS AT BACK\n");
            printf("ENTER 8 TO DELETE ELEMENTS AT FRONT\n");
            printf("ENTER 0 TO EXIT THE PROGRAMME\n\n");

            scanf("%d",&x);
        switch(x){
            case 1:{
                traversal();
                break;
            }
            case 2:{
            insertionAtAnyPosition();
            break;
            }
            case 3:{
                insertAtFront();
                break;
            }
            case 4:{
                insertAtBack();
                break;
            }
            case 5:{
                display();
                break;
            }
            case 6:{
                deleteAtAnyPosition();
                break;
            }
            case 7:{
                deleteAtBack();
                break;
            }
            case 8:{
                deleteAtFront();
                break;
            }
            default:{
                printf("INVALID INPUT ENTERED\n");
                break;
        }
        }
    }while(x!=0);


}
}


void traversal(){
    printf("ENTER -1 TO GO BACK TO MAIN MENU\n");

        for(int i=0,j=1;i<size;i++,j++){
            printf("ENTER THE ELEMENT AT %dTH POSITION : ",j);
            scanf("%d", &arr[i]);
            if (arr[i] == -1) {
            printf("\nReturning to main menu...\n");
            break;
        }

        }
return;

}

void display(){
    for(int i=0,j=1;i<size&&j<size+1;i++ ,j++){
            printf("\nTHE ELEMENT AT %dTH POSITION IS : %d",j,arr[i]);

        }return;

}

void insertionAtAnyPosition(){
      printf("\nENTER THE POSITION AT WHICH YOU WANT TO INSERT A NUMBER : ");
      scanf("%d",&position);

          for(int i= size-1;i>=position-1;i--){
            arr[i+1]  = arr[i];
          }
            for(int i =0;i<size;i++){
                printf("%d\n",arr[i]);
            }
            size++;
            printf("ENTER THE NUMBER YOU WANT TO ENTER AT %d : ",position);
            scanf("%d",&number_at_index);
            arr[position-1]=number_at_index;
            for(int i = 0,j=1;i<size;i++,j++){
                printf("THE ELEMENT AT %dTH POSITION IS : %d\n",j,arr[i]);
                }
}

void insertAtFront(){
    printf("\nENTER THE NUMBER YOU WANT TO ENTER AT FRONT\n");
    scanf("%d",&noAtFront);
    for(int i = size-1;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = noAtFront;
    size++;
    return;
}

void insertAtBack(){
    int n,i;
    if(arr[size]<=n){
        printf("ARRAY OVERFLOW\n");
        return;
    }
    else{
        printf("\nENTER HOW MANY NUMBERS YOU WANT TO ENTER : \n");
    scanf("%d", &n);

    for(int i = 0; i<n;i++){
        printf("ENTER THE NUMBER YOU WANT TO ENTER AT BACK\n");
        scanf("%d", &noAtBack);
        arr[size]=noAtBack;
        size++;
    }

    }

    return;
}

void deleteAtAnyPosition(){
    int i,element;
    printf("\nENTER THE POSITION AT WHICH YOU WANT TO DELETE THE ELEMENT\n");
    scanf("%d", &position);
    if(size == 0){
        printf("\nEMPTY ARRAY\n");
        return;
    }else if(position<0 || position>size-1){
        printf("INVALID POSITION ENTERED\n");
        return;
    }
    else{
            element = arr[position-1];

    for(i=position-1;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    printf("\nSUCCESSFULLY DELETED ELEMENT AT %dTH POSITION WHICH WAS %d", position,element);
    size--;
    }
    return;
}

void deleteAtBack(){
    int backElement = arr[size-1];
    if(size==0){
        printf("\nARRAY EMPTY\n");
    }
    else{
        printf("SUCCESSFULLY DELETED LAST ELEMENT THAT WAS %d\n",backElement);
        size--;
    }
}
void deleteAtFront(){
    int frontElement = arr[0];
    if(size==0){
        printf("\nARRAY EMPTY\n");
    }
    else{
        for(int i = 0;i<size-1;i++){
            arr[i] = arr[i+1];
        }
        size--;
        printf("SUCCESSFULLY DELETED FIRST ELEMENT THAT WAS %d\n",frontElement);
    }
}