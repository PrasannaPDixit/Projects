#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#pragma pack(1)

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE Head, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        PNODE temp = *Head;
        while(temp -> next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int MaxSecondElement(PNODE Head, int iLength)
{
    int iMax = 0,i = 0;
    int *Arr = (int*)malloc(iLength*sizeof(int));
    
    iMax = Head->data;
    Arr[0] = Head->data;

    while(Head != NULL)
    {
        if(Head->data > Arr[i])
        {
            i++;
            Arr[i] = Head->data;
        }
        Head = Head->next;   
    }
    return Arr[i-1];
}



int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;

    int iSize = 0;
    int *Arr = NULL;

    printf("Enter number of elements to insert in LL:\n");
    scanf("%d",&iSize);
    Arr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Elements : \n");

    for(int i = 0; i< iSize; i++)
    {
        scanf("%d",&Arr[i]);
        InsertLast(&First,Arr[i]);
    }  

    Display(First);

    iRet = MaxSecondElement(First,iSize);
    printf("Second Largest Element : %d\n",iRet);

    return 0;
}