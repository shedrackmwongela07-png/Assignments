/*
NAME:Shedrack Kiilu
REG: CT100/G/23588/24
DESCRIPTION:A C program that accepts product details
           (product, quantity, and price), saves them to sales.txt,
           and computes the total sales amount.
DATE:6th November,2025
*/
//header file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
   FILE *fp;
   char product[50];
   //variable declaration
      int quantity;
      float price;
      float totalSales = 0.0;
  		  //  Open file for writing (replace old data)
   			 fp = fopen("sales.txt", "w");
   			 if (fp == NULL) {
      		 printf("Error: Could not open sales.txt\n");
      		 return 1;
             }
                 //print a message enquiring the user to input data
                 printf("Enter product details.\n");
                 printf("Type '0' as product name to finish.\n\n");

                      //  Input loop
                      while (1) {
                      printf("PRODUCT: ");
                      scanf("%s", product);
                      
                          // stop if user enters 0
                          if (strcmp(product, "0") == 0)
                          break;
                        //USER INPUT
                        printf("QUANTITY: ");
                        scanf("%d", &quantity);
                        printf("PRICE: ");
                        scanf("%f", &price);

             // Writes to file
                fprintf(fp, "%s %d %.2f\n", product, quantity, price);

            // Computes running total
            totalSales += quantity * price;

         printf("\n");
         }

    fclose(fp);

    // Displays final total
  printf("---------------------------\n");
  printf("Total Sales Amount = KSH %.2f\n", totalSales);
  printf("---------------------------\n");

    return 0;
}