#include<stdio.h>
#include"data_structure.h"



int main()
{
int i,choice,element,newvalue,sppos,srvalue,totalnode;
struct node *list;

list=(struct node *)malloc(1*sizeof(struct node));
list->a=0;
list->p=NULL;

    while(1)
    {
        printf("\n\n---------Menu---------");
        printf("\nPress 0 for quit");
        printf("\nPress 1 for insertion at last position");
        printf("\nPress 2 for insertion at specific position");
        printf("\nPress 3 for display");
        printf("\nPress 4 for deletion from specific position");
        printf("\nPress 5 for Linear search");
        printf("\nPress 6 for counting nodes");

        printf("\n\nEnter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0: printf("\nThank you\n\n");
                    exit(0);
                    break;
            case 1: printf("\nChoice= Insertion at last position");
                    printf("\nEnter new value for insertion:");
                    scanf("%d",&newvalue);
                    Insertion_Last_LinkedList(list,newvalue);
                    printf("Inserted Successfully\n");
                    break;
            case 2: printf("\nChoice= Insertion at specific position");
                    if(list->p!=NULL)
                    {
                        totalnode=Counting_Nodes_LinkedList(list);
                  m:    printf("\nEnter position between %d to %d:",1,totalnode);
                        scanf("%d",&sppos);
                        if(sppos>=1 && sppos<=totalnode)
                        {
                            printf("\nEnter new value for insertion:");
                            scanf("%d",&newvalue);
                            Insertion_Specific_LinkedList(list,newvalue,sppos);
                            printf("\nInserted Successfully at position %d\n",sppos);
                        }
                        else
                        {
                            printf("\nWrong position\n");
                            goto m;
                        }
                    }
                    else
                        printf("\nList is Empty\n");
                    break;
            case 3: printf("\nChoice= Display Linked List\n\n");
                    if(list->p!=NULL)
                        {

                            Display_LinkedList(list);
                        }

                    else
                        printf("List is Empty\n");
                    break;
            case 4: printf("\nChoice= Deletion from specific position");
                    if(list->p!=NULL)
                    {
                        totalnode=Counting_Nodes_LinkedList(list);
                  n:    printf("\nEnter position between %d to %d:",1,totalnode);
                        scanf("%d",&sppos);
                        if(sppos>=1 && sppos<=totalnode)
                        {
                            Deletion_Specific_LinkedList(list,sppos);
                            printf("\nDeletd Successfully from position %d\n",sppos);
                        }
                        else
                        {
                            printf("\nWrong position\n");
                            goto n;
                        }
                    }
                    else
                        printf("\nList is Empty\n");
                    break;

            case 5: printf("\nChoice= Linear Search\n");
                    if(list->p!=NULL)
                        {
                            printf("\nEnter new value for searching:");
                            scanf("%d",&newvalue);
                            LinearSearch_LinkedList(list,newvalue);
                        }

                    else
                        printf("List is Empty\n");
                    break;


            case 6: printf("\nChoice= Counting total nodes\n");
                    if(list->p!=NULL)
                    {
                        totalnode=Counting_Nodes_LinkedList(list);
                        printf("Total Nodes=%d\n",totalnode);
                    }
                    else
                        printf("List is Empty\n");
                    break;

        }
    }
return 0;
}

