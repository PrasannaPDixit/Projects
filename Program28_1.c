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

void InsertFirst(PPNODE Head, int iNo)
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
        newn->next = *Head;
        *Head = newn;
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

int Count(PNODE Head)
{
    int iCnt = 0;
    while(Head != NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int SearchFirstOccurance(PNODE Head, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;
    while(Head != NULL)
    {
        iCnt++;

        if(Head->data == iNo)
        {
            bFlag = true;
            break;
        }

        Head = Head->next;   
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
    
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    iRet = SearchFirstOccurance(First,1);

    if(iRet == -1)
    {
        printf("Please enter valid numer...\n");
    }
    else
    {
        printf("First Occurance of 1 is at index %d",iRet);
    }

    return 0;
}