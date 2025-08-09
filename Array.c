#include<stdio.h>

#define MAXSIZE 10
int stack[MAXSIZE] , top = -1;

void push(){
    int element;
    if(top == MAXSIZE - 1){
        printf("Stack is Full.");
    }
    else{
        printf("Enter Element : ");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }


}

void display(){
    if(top == -1){
        printf("Stack is Empty.");
    }
    else{
        printf("Element of Stack : ");
        for(int i = top; i >= 0;i--){
            printf("%d ",stack[i]);
            
        }
        printf("\n\n");
    }

}

void pop(){
    int T_element;
    if(top == -1){
        printf("Stack is Empty.");
    }else{
        T_element = stack[top];
        top--;
        printf("Element has Poped.\n\n");
    }

}

void main(){
    int choice;

    do{
        printf("----------Stack----------\n");
        printf(" 1. Push \n 2. Pop \n 3. Display \n 4. Exit \n");
        printf("Enter Choice : ");
        scanf("%d \n",&choice);

        switch(choice){
            case 1 : push();
            break;
            case 2 : pop();
            break;
            case 3 : display();
            break;
            // case 4 : exit();
            // break;
            default : printf("Invalid choice !");
            break;
        }
    }while(choice != 4);
}