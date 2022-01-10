#include<stdio.h>
#include"data_structure.h"

int main()
{
    struct node *front=NULL, *rear=NULL;
    int v,c;

    while(1)
    {
    printf("\n........menu........\n");
    printf("\n press 1 for insertion\n");
    printf("\n press 2 for display\n");
    printf("\n press 3 for deletion\n");
    printf("\n press 0 for quit\n");
    printf("\n enter your choice\n");

    scanf("%d",&c);
        switch(c)
        {
            case 1: printf("\n choice=insertion\n");
                    printf("\n enter value \n");
                    scanf("%d",&v);
                    if(front==NULL && rear==NULL)
                    {
                        front=Insertion_Queue_FirstValue(v);
                        rear=front;
                    }
                    else
                    {
                        rear=Insertion_Queue_Rear(rear,v);
                    }
                    break;

            case 2: printf("\n choice= display\n");
                    if(front!=NULL)
                    Display_Queue(front);
                    else
                    printf("\n Queue is empty");
                    break;

            case 3: printf("\n choice=deletion\n");
                    if(front!=NULL)
                    {
                        if(front==rear)
                        {
                            front=Deletion_Queue_Front(front);
                            rear=front;
                        }
                        else
                        {
                            front=Deletion_Queue_Front(front);
                        }

                    }
                    else
                    printf("\n Queue is empty");
                    break;

            case 0: exit (0);
                    break;
            default: printf("\n wrong choice\n");
                     break;
        }
    }
}
