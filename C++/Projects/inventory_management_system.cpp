#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a structure for the product
struct Product {
    string name;
    int quantity;
    double price;
};

// Function to add a product to the inventory
void addProduct(vector<Product> &inventory) {
    Product newProduct;
    cout << "Enter product name: ";
    cin >> newProduct.name;
    cout << "Enter quantity: ";
    cin >> newProduct.quantity;
    cout << "Enter price: ";
    cin >> newProduct.price;

    inventory.push_back(newProduct);
    cout << "Product added successfully!\n";
}

// Function to display all products in the inventory
void displayInventory(const vector<Product> &inventory) {
    cout << "Inventory:\n";
    cout << "-------------------------------------\n";
    cout << "Name\tQuantity\tPrice\n";
    cout << "-------------------------------------\n";
    for (const auto &product : inventory) {
        cout << product.name << "\t" << product.quantity << "\t\t$" << product.price << endl;
    }
    cout << "-------------------------------------\n";
}

int main() {
    vector<Product> inventory;
    char choice;

    do {
        cout << "1. Add Product\n";
        cout << "2. Display Inventory\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                addProduct(inventory);
                break;
            case '2':
                displayInventory(inventory);
                break;
            case '3':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '3');

    return 0;
}
