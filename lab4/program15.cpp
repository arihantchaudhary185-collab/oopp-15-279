#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart) {
    cout << left << setw(15) << "Item Name"
         << setw(10) << "Qty"
         << setw(12) << "Unit Price"
         << "Subtotal" << endl;
    cout << string(48, '-') << endl;

    for (const auto& item : cart) {
        auto subtotal = item.quantity * item.price;
        cout << left << setw(15) << item.name
             << setw(10) << item.quantity
             << setw(12) << item.price
             << subtotal << endl;
    }
}

double calculateTotal(const vector<Item>& cart) {
    auto total = 0.0;
    for (const auto& item : cart) {
        total += item.quantity * item.price;
    }
    return total;
}

int main() {
    vector<Item> cart = {
        {"Keyboard", 1, 1500.0},
        {"Mouse", 2, 600.0},
        {"Monitor", 1, 12000.0}
    };

    cout << "--- Initial Cart ---" << endl;
    displayCart(cart);
    cout << "\nTotal Amount Payable: Rs. " << calculateTotal(cart) << endl;

    return 0;
}