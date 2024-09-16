#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define sw 5
int q[sw],rear=-1,front=-1;
int enqueue(int data){
    if(rear==sw-1)
    printf("Queue is full");
    else if(front==-1 && rear==-1){
        front=rear=0;
        q[rear]=data;
    }
    else{
        q[++rear]=data;
    }
}
int dequeue(){
    if(rear==-1 && front==-1)
    printf("queue is underflow");
    else if(rear==front){
        printf("deleted element %d",q[front]);
        rear=front=-1;
    }
    else{
        printf("deleted element %d",q[front]);
        ++front;
    }
}
int display(){
    if(rear==-1 && front==-1){
      printf("queue is underflow");  
    }
    else{
        for(int e=front;e<=rear;e++){
            printf("%d ",q[e]);
        }
        printf("\n");
    }
}
int main(){
    int choice,data;
    do{
        printf("Enter ur choice: 1.enqueue 2.dequeue 3.display 4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter ur element:");
            scanf("%d",&data);
            enqueue(data);
            break;
            case 2:
            printf("Deleted element %d",dequeue());
            break;
            case 3:
            display();
            break;
        }
    }while(choice!=4);
    
}
