#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// Product structure
struct Product { int code; char name[50]; int qty; float price; };
struct Product inv[MAX];
int invSize = 0;

// Customer structure
struct Order { char customer[50]; int code; int qty; float total; };
struct Order orders[MAX];
int orderCount = 0;

// Function to display inventory
void showInventory() {
    printf("\n%-6s %-20s %-6s %-10s\n", "Code", "Name", "Qty", "Price");
    for (int i = 0; i < invSize; i++)
        printf("%-6d %-20s %-6d %-10.2f\n", inv[i].code, inv[i].name, inv[i].qty, inv[i].price);
}

// Function to add product
void addProduct() {
    printf("Code: "); scanf("%d", &inv[invSize].code);
    printf("Name: "); scanf("%s", inv[invSize].name);
    printf("Qty: "); scanf("%d", &inv[invSize].qty);
    printf("Price: "); scanf("%f", &inv[invSize].price);
    invSize++;
    printf("Product added!\n");
}

// Function to place order
void placeOrder() {
    printf("Customer name: "); scanf("%s", orders[orderCount].customer);
    printf("Product code: "); scanf("%d", &orders[orderCount].code);
    printf("Quantity: "); scanf("%d", &orders[orderCount].qty);
    for (int i = 0; i < invSize; i++) {
        if (inv[i].code == orders[orderCount].code) {
            if (inv[i].qty < orders[orderCount].qty) { printf("Insufficient stock!\n"); return; }
            inv[i].qty -= orders[orderCount].qty;
            orders[orderCount].total = orders[orderCount].qty * inv[i].price;
            printf("Order placed! Total: %.2f\n", orders[orderCount].total);
            orderCount++;
            return;
        }
    }
    printf("Product not found!\n");
}

// Function to display orders
void showOrders() {
    printf("\n%-15s %-8s %-6s %-10s\n", "Customer", "Code", "Qty", "Total");
    for (int i = 0; i < orderCount; i++)
        printf("%-15s %-8d %-6d %-10.2f\n", orders[i].customer, orders[i].code, orders[i].qty, orders[i].total);
}

// Function to search product by name
void searchProduct() {
    char key[50];
    printf("Search product name: "); scanf("%s", key);
    for (int i = 0; i < invSize; i++)
        if (strstr(inv[i].name, key))
            printf("Found: Code:%d %s Qty:%d Price:%.2f\n", inv[i].code, inv[i].name, inv[i].qty, inv[i].price);
}

// Function to show revenue report
void revenueReport() {
    float total = 0;
    for (int i = 0; i < orderCount; i++) total += orders[i].total;
    printf("Total Orders: %d\nTotal Revenue: %.2f\n", orderCount, total);
}

int main() {
    // Seed some inventory
    strcpy(inv[0].name, "Laptop"); inv[0].code = 101; inv[0].qty = 10; inv[0].price = 45000;
    strcpy(inv[1].name, "Mouse"); inv[1].code = 102; inv[1].qty = 50; inv[1].price = 500;
    strcpy(inv[2].name, "Keyboard"); inv[2].code = 103; inv[2].qty = 30; inv[2].price = 1200;
    invSize = 3;

    int choice;
    do {
        printf("\n=== Mini Store Management System ===\n");
        printf("1.View Inventory 2.Add Product 3.Place Order 4.View Orders 5.Search Product 6.Revenue Report 7.Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: showInventory(); break;
            case 2: addProduct(); break;
            case 3: placeOrder(); break;
            case 4: showOrders(); break;
            case 5: searchProduct(); break;
            case 6: revenueReport(); break;
            case 7: printf("Thank you!\n"); break;
            default: printf("Invalid choice\n");
        }
    } while (choice != 7);
    return 0;
}
