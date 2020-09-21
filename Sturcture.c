#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{ int i,n;
struct studentdetails
{
  //  char  studentname[100];
  char Id[10];
    char  Age[5];
    int   marks;

}student[100];
printf("Enter the Number of Students:\t");
scanf("%d",&n);
  for(i=0;i<n;i++)
 {
    printf("Enter Age:\n");
    scanf("%s",&student[i].Age);
    printf("ENTER roll number of student%d:\n",i+1);
    scanf("%s",&student[i].Id);
    printf("Enter Total marks of student%d:\n",i+1);
    scanf("%d",&student[i].marks);
    printf("\n");}
    for(i=0;i<n;i++)
   {
    if(student[i].marks>=65&&student[i].marks<=100&&student[i].Age)
    {printf("StudentId\t: %s\nAge\t: %s\nMarks \t: %d\n",student[i].Id,student[i].Age,student[i].marks);
    puts("Is Qualified to Admission to collage");}
    else{
    printf(" studentId:%s\t .Is Not Qualified to Amission \n",student[i].Id );

  }

}}
