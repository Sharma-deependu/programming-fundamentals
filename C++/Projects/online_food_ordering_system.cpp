#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define structs/classes for representing menu items, orders, etc.
struct MenuItem {
    string name;
    string description;
    double price;
};

class Order {
private:
    vector<MenuItem> items;
    double total;
public:
    Order() : total(0.0) {}

    void addItem(const MenuItem& item) {
        items.push_back(item);
        total += item.price;
    }

    double getTotal() const {
        return total;
    }

    void display() const {
        cout << "Order details:" << endl;
        for (const auto& item : items) {
            cout << item.name << " - " << item.price << endl;
        }
        cout << "Total: " << total << endl;
    }
};

// Define functions for displaying menu, taking orders, etc.
void displayMenu(const vector<MenuItem>& menu) {
    cout << "Menu:" << endl;
    for (const auto& item : menu) {
        cout << item.name << " - " << item.price << endl;
        cout << "\t" << item.description << endl;
    }
}

int main() {
    // Define menu items
    vector<MenuItem> menu = {
        {"Pizza", "Delicious pizza topped with your favorite toppings", 10.99},
        {"Burger", "Aloo patty along with cheese ", 8.99},
        {"Salad", "Fresh salad with mixed greens and dressing", 6.99}
    };

    // Display menu
    displayMenu(menu);

    // Take orders
    Order order;
    int choice;
    do {
        cout << "Enter item number to add to order (0 to finish): ";
        cin >> choice;
        if (choice >= 1 && choice <= menu.size()) {
            order.addItem(menu[choice - 1]);
        }
    } while (choice != 0);

    // Display order details
    order.display();

    return 0;
}
