#include <stdio.h>

int main() {

    float appetizers[] = {30.0, 15.0, 99.0};
    float mainCourses[] = {180.0, 130.0, 80.0};
    float desserts[] = {80.0, 60.0, 50.0};

    float totalBill = 0.0;
    int choice;

    printf("\nUSTP R11 Restaurant Menu:\n");

    printf("Appetizers:\n");
    printf("\t1. Sinigang na Soup: P%.2f\n", appetizers[0]);
    printf("\t2. Lumpia: P%.2f\n", appetizers[1]);
    printf("\t3. Ceasar Salad: P%.2f\n", appetizers[2]);

    printf("\nMain Courses:\n");
    printf("\t4. Adobong Chicken: P%.2f\n", mainCourses[0]);
    printf("\t5. Beef na Stik: P%.2f\n", mainCourses[1]);
    printf("\t6. Pancit: P%.2f\n", mainCourses[2]);

    printf("\nDesserts:\n");
    printf("\t7. Halo-Halo: P%.2f\n", desserts[0]);
    printf("\t8. Leche Flan: P%.2f\n", desserts[1]);
    printf("\t9. Ube Ice Cream: P%.2f\n", desserts[2]);

    printf("\nSelect items by entering their numbers (0 to finish ordering):\n");

    int selectedItems[10];
    int itemCount = 0;

    while (1) {
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        if (choice >= 1 && choice <= 9) {
            selectedItems[itemCount++] = choice;
            switch (choice) {
                case 1:
                    totalBill += appetizers[0];
                    break;
                case 2:
                    totalBill += appetizers[1];
                    break;
                case 3:
                    totalBill += appetizers[2];
                    break;
                case 4:
                    totalBill += mainCourses[0];
                    break;
                case 5:
                    totalBill += mainCourses[1];
                    break;
                case 6:
                    totalBill += mainCourses[2];
                    break;
                case 7:
                    totalBill += desserts[0];
                    break;
                case 8:
                    totalBill += desserts[1];
                    break;
                case 9:
                    totalBill += desserts[2];
                    break;
            }
        } else {
            printf("Invalid choice. Please select a valid item.\n");
        }
    }

    printf("\nReceipt:\n");
    for (int i = 0; i < itemCount; i++) {
        choice = selectedItems[i];
        switch (choice) {
            case 1:
                printf("Sinigang Soup: P%.2f\n", appetizers[0]);
                break;
            case 2:
                printf("Lumpia: P%.2f\n", appetizers[1]);
                break;
            case 3:
                printf("Ceasar Salad: P%.2f\n", appetizers[2]);
                break;
            case 4:
                printf("Adobo: P%.2f\n", mainCourses[0]);
                break;
            case 5:
                printf("Beef Steak: P%.2f\n", mainCourses[1]);
                break;
            case 6:
                printf("Pancit: P%.2f\n", mainCourses[2]);
                break;
            case 7:
                printf("Halo-Halo: P%.2f\n", desserts[0]);
                break;
            case 8:
                printf("Leche Flan: P%.2f\n", desserts[1]);
                break;
            case 9:
                printf("Ube Ice Cream: P%.2f\n", desserts[2]);
                break;
        }
    }

    printf("Total Bill: P%.2f\n", totalBill);

    float payment;
    printf("Enter the amount you are paying: P");
    scanf("%f", &payment);

    if (payment < totalBill) {
        printf("Payment is less than the total bill. Please pay the full amount.\n");
    } else {
        float change = payment - totalBill;
        printf("Thank you for your payment. Your change is P%.2f\n", change);
    }

    return 0;
}
