#include<stdio.h>

void DisplaySchedule(char ch)
{
   switch (ch)
   {
    case 'A' :
    printf("Exam time for your Division is at 7AM.\n");
    break;

    case 'B' :
    printf("Exam time for your Division is at 8:30AM.\n");
    break;

    case 'C' :
    printf("Exam time for your Division is at 9:20AM.\n");
    break;

    case 'D' :
    printf("Exam time for your Division is at 10:30AM.\n");
    break;

    default :
    printf("Please enter a valid division.\n");
  

   }
}
int main()
{ 
    char cValue = '\0';

    printf("Enter your Division:\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}