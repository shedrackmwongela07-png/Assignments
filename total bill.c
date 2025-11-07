/*
name:Shedrack Kiilu
reg no:CT100/G/23588/24
date:
*/
#include<stdio.h>
int main(){
	int number_of_units;
	float total_bill;
	
	
	
   printf("1.0-30 UNITS @KES20 \n");
   printf ("2.31-60 UNITS @KES25 \n");
   printf("3.ABOVE 60 UNITS@KES30 \n");
	
	
	printf("ENTER THE NUMBER OF UNITS CONSUMED\t");
	scanf("%d",& number_of_units);
	if(number_of_units>=0&&number_of_units<=30){
		total_bill=(number_of_units *20);
			}else if (number_of_units>=31 && number_of_units<=60){
			
		total_bill=(number_of_units*25);
	}else{
		total_bill=(number_of_units*30);
	}
	printf("number of units consumed is%d\n",number_of_units);
	printf("your total bill is%.2f KES",total_bill);
	return 0;
    
	
}