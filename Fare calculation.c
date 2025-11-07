/*
NAME:Shedrack Kiilu
REG NO:CT100/G/23588/24
*/

#include <stdio.h>
float fare(int distance){
	
	return distance*50;

}
int main(){
	int distance;
	
printf("ENTER DISTACE TRAVELLED IN (KM)\n");
scanf("%d",&distance);

printf("TOTAL FARE IS=KSH. %.2f\n",fare(distance));	
}