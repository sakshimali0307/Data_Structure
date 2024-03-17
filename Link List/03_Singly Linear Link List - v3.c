#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node
{
    int Data;
    struct Node *Next;
};
    void Insert_First(struct Node **First, int No)
    {
        struct Node *NewN = NULL;

        NewN = (struct node*)malloc(size of(struct Node));

        NewN -> Data = No;
        NewN -> Next = NULL;

        if(NULL == *First)
        {
            *First = NewN;

            printf("\n\n Inside if block of insert first");
        }
        else
        {
            NewN -> Next = *First;
            *First = NewN;

            printf("\n %d Element Inserted Successfully",No);

            return;
        }
        void Insert_Last(struct Node **First, int No)
        {

        }
    }

}
