 #include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 10

int cartsize = 0;

struct product {
    char name[50];
    int quantity;
    float price;
};

struct product cart[MAX];

 
void tolowercase(char* str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

void addproduct() {
    if (cartsize >= MAX) {
        printf("Cart is full!\n");
        return;
    }
    printf("Enter product name: ");
    scanf("%s", cart[cartsize].name);
    printf("Enter quantity: ");
    scanf("%d", &cart[cartsize].quantity);
    printf("Enter price: ");
    scanf("%f", &cart[cartsize].price);
    cartsize++;
    printf("Product added successfully!\n");
}

void removeproduct() {
    char name[50], tempName[50];
    int found = 0;

    printf("Enter product name to remove: ");
    scanf("%s", name);
    tolowercase(name);

    for (int i = 0; i < cartsize; i++) {
        strcpy(tempName, cart[i].name);
        tolowercase(tempName);

        if (strcmp(tempName, name) == 0) {
            for (int j = i; j < cartsize - 1; j++) {
                cart[j] = cart[j + 1];
            }
            cartsize--;
            found = 1;
            printf("Product removed successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Product not found!\n");
    }
}

void displaycart() {
    if (cartsize == 0) {
        printf("Cart is empty!\n");
        return;
    }
    printf("\n%-20s %-10s %-10s\n", "Product Name", "Quantity", "Price");
    for (int i = 0; i < cartsize; i++) {
        printf("%-20s %-10d %-10.2f\n", cart[i].name, cart[i].quantity, cart[i].price);
    }
}

void searchproduct() {
    char name[50], tempName[50];
    int found = 0;

    printf("Enter product name to search: ");
    scanf("%s", name);
    tolowercase(name);

    for (int i = 0; i < cartsize; i++) {
        strcpy(tempName, cart[i].name);
        tolowercase(tempName);

        if (strcmp(tempName, name) == 0) {
            printf("Product found: %s | Quantity: %d | Price: %.2f\n", cart[i].name, cart[i].quantity, cart[i].price);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Product not found!\n");
    }
}

void totalbill() {
    float total = 0;
    for (int i = 0; i < cartsize; i++) {
        total += cart[i].quantity * cart[i].price;
    }
    printf("Total bill amount: ₹%.2f\n", total);
}

void updatequatity() {
    char name[50], tempName[50];
    int found = 0, newQty;

    printf("Enter product name to update quantity: ");
    scanf("%s", name);
    tolowercase(name);

    for (int i = 0; i < cartsize; i++) {
        strcpy(tempName, cart[i].name);
        tolowercase(tempName);

        if (strcmp(tempName, name) == 0) {
            printf("Enter new quantity: ");
            scanf("%d", &newQty);
            cart[i].quantity = newQty;
            found = 1;
            printf("Quantity updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Product not found!\n");
    }
}

int main() {
    int choice;

    do {
        printf("\nSHOPPING CART SYSTEM");
        printf("\n1. Add product");
        printf("\n2. Remove product");
        printf("\n3. Display cart");
        printf("\n4. Search for a product");
        printf("\n5. Calculate total bill");
        printf("\n6. Update Quantity");
        printf("\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addproduct(); break;
            case 2: removeproduct(); break;
            case 3: displaycart(); break;
            case 4: searchproduct(); break;
            case 5: totalbill(); break;
            case 6: updatequatity(); break;
            case 7: printf("\nExiting ..........\n"); break;
            default: printf("Please give a valid input.\n");
        }
    } while (choice != 7);

    return 0;
}
