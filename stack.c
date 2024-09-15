#include <stdio.h>
#define asd 5

int arr[asd];
int top=-1;

int isfull(){
    if(top==asd-1)
    return 1;
    else
    return 0;
}
void push(int data){
    if(isfull()==1){
        printf("Overflow");
    }
    else{
        arr[++top]=data;
    }
}
int isempty(){
    if(top==-1)
    return 1;
    else 
    return 0;
}
int pop(){
    if(isempty()){
        printf("stack is empty");
    }
    else{
        top--;
        return arr[top+1];
    }
}
void display(){
    if(isempty()){
        printf("stack is empty");
    }
    else{
    for(int e=0;e<=top;e++){
        printf("%d ",arr[e]);
    }
    printf("\n");
    }
}
int peek(){
    if(isempty()){
        printf("stack is empty");
    }
    else{
        return arr[top];
    }
}
int main(){
    int choice,data;
    do{
        printf("Enter ur choice 1.push 2.pop 3.display 4.peek 5.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the data:");
            scanf("%d",&data);
            push(data);
            break;
            case 2:
            printf("deleted element %d :",pop());
            break;
            case 3:
            display();
            break;
            case 4:
            printf("1st element %d:",peek());
            break;
        }
        }while(choice!=5);
        return 0;
    }
