//Program for circular queue
#include<stdio.h>
const int SIZE =5;
int front=0;
int rear=0;
int isEmpty()
{
    return (front==rear);
}
int isFull()
{
    return (front==(rear+1)%SIZE);
}
void enqueue(int queue[],int item)
{
    if(isFull())
    {
        printf("\nThe queue is overflow.\n");

    }
    else
    {
        queue[rear]=item;
        rear=(rear+1)%SIZE;
        printf("\nInsert item at position %d is %d\n",rear,item);
    }
}
void dequeue(int queue[])
{
    if(isEmpty())
    {
    printf("\nQueue underflow.\n");
    }
    else
    {
        printf("\nItem removed from queue is %d\n",queue[front]);
        front=(front+1)%SIZE;
    }
}
void traverse(int queue[])
{
    int i;
    if(isEmpty())
    {
        printf("\nqueue underflow.\n");

    }
    else
    {
        for(i=front;i!=rear;i=(i+1)%SIZE)
        {
            printf("%d\t",queue[i]);
            printf("\n");
        }
    }
}
int main()
{
    int queue[5], choice,item;
  printf("\n1.Enqueue\n2.Dequeue\n3.Dispaly\n4.Exit\n");
  do{
        printf("\nEnter choise from above option:\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("\nEnter the item:\t");
                scanf("%d",&item);
                enqueue(queue,item);
                break;
            case 2:
                dequeue(queue);
                break;
            case 3:
                traverse(queue);
                break;
            case 4:
                printf("Exiting......");
                break;
            default:
                printf("Ivalid input.Enter only give choice");
        }
    }while(choice!=4);

}

