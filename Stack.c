#include<stdio.h>
#include"data_structure.h"

int main()
{

    int c,v;
    struct node *top=NULL;

while(1)
{
    printf("\n........menu........\n");
    printf("\n press 1 for push\n");
    printf("\n press 2 for display\n");
    printf("\n press 3 for pop\n");
    printf("\n press 0 for quit\n");
    printf("\n enter your choice\n");

    scanf("%d",&c);
    switch(c)
    {
        case 1: printf("\n choice=push\n");
                printf("\n enter value \n");
                scanf("%d",&v);
                top=push_stack(top,v);
                break;
        case 2: printf("\n choice= display\n");
                if(top!=NULL)
                display_stack(top);
                else
                printf("\n stack is empty");
                break;
        case 3: printf("\n choice=pop\n");
                if(top!=NULL)
                top=pop_stack(top);
                else
                printf("\n Stack is empty");
                break;
        case 0: exit (0);
                break;

        default: printf("\n wrong choice\n");
                 break;

    }
}
return 0;
}
