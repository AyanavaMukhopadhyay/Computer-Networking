#include <stdio.h>
#include <string.h>
struct info
{int roll_no;
 char name[50];
 float CGPA;
};
void disp(struct info *record)
{printf(" Roll_no is: %d \n", record->roll_no);
 printf(" Name is: %s ", record->name);
 printf(" Percentage is: %f \n", record->CGPA);
}
int main() 
{struct info record;
printf("Enter the name of the member\n");
fgets(record.name,50,stdin);
printf("Enter the roll number of the member \n");
scanf("%d",&record.roll_no);
printf("Enter the CGPA of the member \n");
scanf("%f",&record.CGPA);
disp(&record);
return 0;
}
