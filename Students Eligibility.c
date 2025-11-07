/*
name:Shedrack Kiilu
reg no:CT100/G/23588/24
*/

#include<stdio.h>
int main()
{
	int marks,attendance,attendance_percentage;
	
   printf("enter the session attended in SEM1 (out of 14)");
   scanf("%d",&attendance);	
    if(attendance > 14 || attendance <0)
    {
	//command the program on limits of attendance	
	printf("Sessions attended must be between 0 to 14");
    return 1;
	}
//promt the user to enter the marks
     printf("enter the marks scored");
    scanf("%d",&marks);
    
     attendance_percentage=(attendance*100)/14;	  
     printf("your attendance percentange is%d%%",attendance_percentage);
//  function to eligibility of the student 
    if(attendance_percentage>=75&&marks>=40)
    {
		printf("you are eligible");
	} else{
		printf("you are not eligible");
	}
    return 0;
	
}