/*
NAME:Shedrack Kiilu
REG NO:CT100/G/23588/24
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // ===== 1D ARRAY: Weekly Revenue Tracker =====
    int revenue[7];
    int totalRevenue = 0;
    float averageRevenue;

    printf("=== Weekly Revenue Tracker ===\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%d", &revenue[i]);
        totalRevenue += revenue[i];
    }

    averageRevenue = totalRevenue / 7.0;

    printf("\nTotal weekly revenue: %d\n", totalRevenue);
    printf("Average daily revenue: %.2f\n\n", averageRevenue);

    // ===== 2D ARRAY: Room Occupancy (One Branch) =====
    int occupancy[5][10];
    int occupiedPerFloor, vacantPerFloor;

    srand(time(0)); // Initialize random seed

    printf("=== Room Occupancy for One Branch ===\n");
    for (int f = 0; f < 5; f++) {
        occupiedPerFloor = 0;
        vacantPerFloor = 0;

        for (int r = 0; r < 10; r++) {
            occupancy[f][r] = rand() % 2; // Random 0 or 1
            if (occupancy[f][r] == 1)
                occupiedPerFloor++;
            else
                vacantPerFloor++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n",
               f + 1, occupiedPerFloor, vacantPerFloor);
    }

    // ===== 3D ARRAY: Multiple Branches =====
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("\n=== Multiple Branches Occupancy ===\n");

    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                totalOccupied += chain[b][f][r];
            }
        }
    }

    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}