#include <stdio.h>

int main() {

    //This is a group, using array
    //You can also change the prices inside the array
    //example: if you want the Lumpia to be 20.0 instead of 15.0, just change it inside the array {30.0, 15.0, 99.0}, change 15.0 to 20.0

    //for appetizers:
    // Sinigang na Soup is     [0] P30.0
    // Lumpia is               [1] P15.0
    // Ceasar Salad is         [2] P99.0
    float appetizers[] = {30.0, 15.0, 99.0};

    //for mainCourses:
    // Sinigang na Soup is     [0] P180.0
    // Lumpia is               [1] P130.0
    // Ceasar Salad is         [2] P80.0
    float mainCourses[] = {180.0, 130.0, 80.0};

    //for desserts:
    // Sinigang na Soup is     [0] P180.0
    // Lumpia is               [1] P60.0
    // Ceasar Salad is         [2] P50.0
    float desserts[] = {80.0, 60.0, 50.0};

    //zero since we are userdefined
    float totalBill = 0.0;

    //stores the choices of the person
    int choice;

    //main menu where the user can see the food and its price
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

    //customer will type 0 to finish ordering
    //example = 1,1,3,5,0(ends)
    printf("\nSelect items by entering their numbers (0 to finish ordering):\n");

    //stores the items that the customer typed to selectedItems, we use int because its whole numbers, 1-9 then 0 to end
    int selectedItems[10];

    /*counts the items selected
    example:
    User selects item 2.
    itemCount becomes 1.
    
    User selects item 5.
    itemCount becomes 2.
    
    User selects item 9.
    itemCount becomes 3. 

    Now, itemCount has a value of 3, indicating that the user has selected three menu items.
    */
    int itemCount = 0;


    /* WHILE LOOP
    It keeps asking the user to pick items (1 to 9) from a menu.
    
    The selected items and their prices are recorded.
    The program calculates the total bill based on the selected items.
    If the user picks an invalid item like (10 or more) which is not in the choices or is done ordering (enters 0), it shows a message.
    When the user finishes, it displays a receipt with the total cost.
    It continues until the user finishes ordering by entering 0.
    */
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


    /*
    It starts by printing "Receipt."

    Then, it uses a loop to go through each selected item (the loop goes from 0 to itemCount - 1).
    For each selected item, it checks what the item is (example, 1 is Sinigang Soup, 2 is Lumpia) and prints the item name and its price from the menu category

    EXAMPLE: customer typed: 1,2,5,0
    IT SHOULD PRINT:
    
    Receipt:
    Sinigang Soup: P30.00
    Lumpia: P15.00
    Beef Steak: P130.00
    Total Bill: P175.00
    
    This loop displays the receipt for all the items the user has ordered.
    */
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

    //PRINTS the total bill from choices, example: 1,1,4,0 = 30.0 + 30.0 + 180.0 = 240.0
    printf("Total Bill: P%.2f\n", totalBill);

    //ask the user to enter the paypent and store it to the payment variable
    float payment;
    printf("Enter the amount you are paying: P");
    scanf("%f", &payment);

    //checks if the payment is enough, the the customer typed below to the total amount, it prints (Payment is less than the total bill. Please pay the full amount)
    //this also calculate it from the total bill and the payment
    //example: total bill is 15, payment is 20 so it prints (Thank you for your payment. Your change is 5.0)
    if (payment < totalBill) {
        printf("Payment is less than the total bill. Please pay the full amount.\n");
    } else {
        float change = payment - totalBill;
        printf("Thank you for your payment. Your change is P%.2f\n", change);
    }

    return 0;
}
