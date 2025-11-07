/*
NAME:Shedrack Kiilu
REG NO:CT100/G/23588/24
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main(void) {
    FILE *fp;
    struct Student s;
    int n, i;

    // Open in append-binary mode
    fp = fopen("results.dat", "ab");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of new students to add: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name: ");
        scanf("%s", s.name);
        printf("Enter registration number: ");
        scanf("%s", s.regNo);
        printf("Enter total marks: ");
        scanf("%f", &s.totalMarks);

        // Append record to the file
        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);
    printf("\nStudent records successfully added to results.dat\n");

    return 0;
}