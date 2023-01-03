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

void AcceptLL(PPNODE First1)
{
    int iSize = 0;
    int *Arr = NULL;

    printf("Enter number of elements to insert in LL:\n");
    scanf("%d",&iSize);
    Arr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the Elements : \n");

    for(int i = 0; i< iSize; i++)
    {
        scanf("%d",&Arr[i]);
        InsertLast(First1,Arr[i]);
    }
}

int AddEvenElements(PNODE Head)
{
    int iEvenSum = 0;
    int i = 0;

    while(Head != NULL)
    {
        if((Head->data) % 2 == 0)
        {
            iEvenSum = iEvenSum + Head->data;
        }
        Head = Head->next;   
    } 
    return iEvenSum;
}



int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;

    AcceptLL(&First);    

    Display(First);

    iRet = AddEvenElements(First);
    printf("Summation of Even elements : %d\n",iRet);

    return 0;
}