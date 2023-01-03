#include<stdio.h>
#include<stdlib.h>
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

void AddDigits(PNODE Head)
{
    int iSum = 0;
    int temp = 0;

    while(Head != NULL)
    {
        temp = Head->data;
        while(temp != 0)
        {
            iSum = iSum + (temp%10);
            temp = temp/10;

        }
        printf("%d\t",iSum);
        iSum = 0;

        Head = Head->next;   
    }     
}



int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;

    AcceptLL(&First);    

    Display(First);

    AddDigits(First);

    return 0;
}