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

int SearchLastOccurance(PNODE Head, int iNo)
{
    int iCnt = 0;
    int iIndex = 0;
    bool bFlag = false;
    while(Head != NULL)
    {
        iCnt++;

        if(Head->data == iNo)
        {
            bFlag = true;
            iIndex = iCnt;
        }
        Head = Head->next;   
    }
    if(bFlag == true)
    {
        return iIndex;
    }
    else
    {
        return -1;
    }   
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

int main()
{
    PNODE First = NULL;
    int iNo = 0;
    int iRet = 0;

    AcceptLL(&First);    

    Display(First);
    printf("Enter number to check the index of Last occurance: \n");
    scanf("%d",&iNo);

    iRet = SearchLastOccurance(First,iNo);
    if(iRet == -1)
    {
        printf("Please enter valid numer...\n");
    }
    else
    {
        printf("Last Occurance of %d is at index %d",iNo,iRet);
    }

    return 0;
}