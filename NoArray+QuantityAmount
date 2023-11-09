//no array + quantity amount

#include <stdio.h>

int main() {

    float sinigangSoup = 30.0;
    float lumpia = 15.0;
    float ceasarSalad = 99.0;
    float adobongChicken = 180.0;
    float beefSteak = 130.0;
    float pancit = 80.0;
    float haloHalo = 80.0;
    float lecheFlan = 60.0;
    float ubeIceCream = 50.0;

    float totalBill = 0.0;
    int choice, quantity;

    printf("\n----------------------------------------\n");
    printf("|Gonzales and Toreta's Restaurant Menu:|\n");
    printf("----------------------------------------\n");

    printf("Appetizers:\n");
    printf("\t1. Sinigang na Soup:\t P%.2f\n", sinigangSoup);
    printf("\t2. Lumpia:\t\t P%.2f\n", lumpia);
    printf("\t3. Ceasar Salad:\t P%.2f\n", ceasarSalad);

    printf("\nMain Courses:\n");
    printf("\t4. Adobong Chicken:\t P%.2f\n", adobongChicken);
    printf("\t5. Beef Steak:\t\t P%.2f\n", beefSteak);
    printf("\t6. Pancit:\t\t P%.2f\n", pancit);

    printf("\nDesserts:\n");
    printf("\t7. Halo-Halo:\t\t P%.2f\n", haloHalo);
    printf("\t8. Leche Flan:\t\t P%.2f\n", lecheFlan);
    printf("\t9. Ube Ice Cream:\t P%.2f\n", ubeIceCream);

    printf("\n----------------------------------------\n");
    printf("|Select items by entering their numbers|\n");
    printf("----------------------------------------\n");

    int itemCount = 0;

    int QuantityList[9] = {0}; 

    while (1) {
        printf("\nEnter item number (0 to finish ordering / exit): ");
        scanf("%d", &choice);

        if (choice == 0) {
            break;
        }

        if (choice >= 1 && choice <= 9) {
            printf("Enter quantity for item %d: ", choice);
            scanf("%d", &quantity);

            if (quantity <= 0) {
                printf("Invalid quantity. Please enter a positive quantity.\n");
                continue;
            }

            switch (choice) {
                case 1:
                    totalBill += sinigangSoup * quantity;
                    printf("Sinigang Soup (x%d): P%.2f\n", quantity, sinigangSoup * quantity);
                    break;
                case 2:
                    totalBill += lumpia * quantity;
                    printf("Lumpia (x%d): P%.2f\n", quantity, lumpia * quantity);
                    break;
                case 3:
                    totalBill += ceasarSalad * quantity;
                    printf("Ceasar Salad (x%d): P%.2f\n", quantity, ceasarSalad * quantity);
                    break;
                case 4:
                    totalBill += adobongChicken * quantity;
                    printf("Chicken Adobo (x%d): P%.2f\n", quantity, adobongChicken * quantity);
                    break;
                case 5:
                    totalBill += beefSteak * quantity;
                    printf("Beef Steak (x%d): P%.2f\n", quantity, beefSteak * quantity);
                    break;
                case 6:
                    totalBill += pancit * quantity;
                    printf("Pancit (x%d): P%.2f\n", quantity, pancit * quantity);
                    break;
                case 7:
                    totalBill += haloHalo * quantity;
                    printf("Halo-Halo (x%d): P%.2f\n", quantity, haloHalo * quantity);
                    break;
                case 8:
                    totalBill += lecheFlan * quantity;
                    printf("Leche Flan (x%d): P%.2f\n", quantity, lecheFlan * quantity);
                    break;
                case 9:
                    totalBill += ubeIceCream * quantity;
                    printf("Ube Ice Cream (x%d): P%.2f\n", quantity, ubeIceCream * quantity);
                    break;
            }
            QuantityList[itemCount] = quantity;
            itemCount++;
        } else {
            printf("Invalid choice. Please select a valid item.\n");
        }
    }

    if (itemCount == 0) {
        printf("\nYou did not order anything. Thank you for considering our menu!\n");
        return 0;
    }

    printf("-------------------------");
    printf("\nTotal Bill:\t P%.2f\n", totalBill);
    printf("-------------------------\n");

    float payment;

    do {
        printf("\nEnter the amount you are paying: P");
        scanf("%f", &payment);

        if (payment < totalBill) {
            printf("Payment is less than the total bill. Remaining balance: P%.2f\n", totalBill - payment);
        } else {
            float change = payment - totalBill;
            printf("\n---------------------------------------------------");
            printf("\nThank you for your payment. Your change is P%.2f", change);
            break;
        }

    } while (1);

    return 0;
}
