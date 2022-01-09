
//Function Definition for Array

struct node
{
    //Elements (2)
    int a;// a integer value
    struct node *p;// a pointer value (memory address)
};
void Display_1DArray_Index(int ar[],int n,int in)
{
    int j;
    printf("\nElements of the array are:\n");
    for (j=in;j<in+n;j++)
        printf("\n%d",ar[j]);
}

int InsertionLast_1DArray(int ar[],int n,int in,int value)
{
    ar[n+in]=value;
    printf("\nInserted successfully at last position\n");
    return n+1;
}

int InsertionSpecific_1DArray(int ar[],int n,int in,int value,int pos)
{
    int i;
    for(i=in+n;i>=in+pos;i--)
        ar[i]=ar[i-1];
    ar[in+pos-1]=value;
    printf("\nInserted successfully at position %d",pos);
    return n+1;
}

int DeletionSpecific_1DArray(int ar[],int n,int in,int pos)
{
    int i,delvalue;
    delvalue=ar[in+pos-1];
    for(i=in+pos-1;i<in+n-1;i++)
        ar[i]=ar[i+1];
    printf("\nDeleted %d successfully from position %d",delvalue,pos);
    return n-1;
}

void OneD_Array_BubbleSort(int ar[],int n,int in)
{
    int i,j,temp;

    for (i=in; i<in+n; i++)
    {
        for(j=in; j<in+n-1; j++)
        {

            if(ar[j]>ar[j+1])
            {
                temp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }

    printf("\nSorted Successfully");
}
void Linear_Search(int ar[],int n,int in, int value)
{
    int j,pos=0;

    for (j=in;j<in+n;j++)
    {
        if(value==ar[j])
        {
            printf("\nFound at position=%d",j-in+1);
            pos++;
        }
    }
    if (pos==0)
        printf("\nNot Found");
    else
        printf("\nTotal Found=%d\n",pos);
}

void Binary_Search(int ar[],int n,int in, int value)
{
    int begind,endind,midind;
    begind=in;
    endind=in+n-1;

    OneD_Array_BubbleSort(ar,n,in);

    do
    {
        midind=(begind+endind)/2;
        if(value>ar[midind])
            begind=midind+1;
        else if (value<ar[midind])
            endind=midind-1;
    }while(value!=ar[midind] && begind<=endind);

    if(value==ar[midind])
        printf("\nFound");
    else
        printf("\nNot Found");
}


//Function Definition for Linked List

void Insertion_Last_LinkedList(struct node *head,int value)
{
    struct node *temp;
    temp=(struct node *)malloc(1*sizeof(struct node));
    temp->a=value;
    temp->p=NULL;

    while(head->p!=NULL)
        head=head->p;

    head->p=temp;
}

void Display_LinkedList(struct node *head)
{
    while (head->p!=NULL)
     {
         printf("  %d->",head->p->a);
         head=head->p;
     }
}

int Counting_Nodes_LinkedList(struct node *head)
{
    int n=0;
    while (head->p!=NULL)
     {
         n++;
         head=head->p;
     }
    return n;
}

void Insertion_Specific_LinkedList(struct node *head,int value,int position)
{
    struct node *temp;
    int i=0;
    while (head->p!=NULL)
     {
        if(i==position-1)
        break;
        head=head->p;
        i++;
     }

    temp=(struct node *)malloc(1*sizeof(struct node));
    temp->a=value;
    temp->p=head->p;
    head->p=temp;
}

void Deletion_Specific_LinkedList(struct node *head,int position)
{
    struct node *temp;
    int i=0;
    while (head->p!=NULL)
     {
        if(i==position-1)
        break;
        head=head->p;
        i++;
     }

    temp=head->p;
    head->p=temp->p;
    free(temp);
}

void LinearSearch_LinkedList(struct node *head,int value)
{
    int c=0,i=0;
    while(head->p!=NULL)
        {
        if(value==head->p->a)
          {

              c++;
              printf("\nFound at position:%d\n",c);
              head=head->p;
              i=1;
          }
          else
          {
              c++;
              head=head->p;
          }

        }
if(i==0)
printf("\n Not found\n");
}

//Function Definition for Stack

struct node* push_stack (struct node *cutop,int value)
{
    {
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));

        temp->a=value;
        temp->p=cutop;

        return temp;
    }
}

void display_stack (struct node *cutop)
{
     printf("Address of Top Node:%p\n",cutop);
     while (cutop!=NULL)
     {
        printf("\n%d\t%p\n",cutop->a,cutop->p);
        cutop=cutop->p;
     }
 }

struct node* pop_stack(struct node *cutop)
{
        struct node *temp;
        temp=cutop->p;
        printf("\n deleted successfully from top:%d\n",cutop->a);
        free(cutop);
        return temp;
}

//Function Definition for Queue

struct node* Insertion_Queue_FirstValue(int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->a=value;
    temp->p=NULL;

    return temp;
}

struct node* Insertion_Queue_Rear(struct node *tail,int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));

    temp->a=value;
    temp->p=NULL;

    tail->p=temp;

    return temp;
}

void Display_Queue(struct node *head)
{
    printf("(%p)\n",head);
    while(head!=NULL)
    {
        printf("->%d(%p)",head->a,head->p);
        head=head->p;
    }
}

struct node* Deletion_Queue_Front(struct node *head)
{
    struct node *temp;
    temp=head->p;

    printf("\nDeleted Value=%d\n",head->a);
    free (head);

    return temp;
}
