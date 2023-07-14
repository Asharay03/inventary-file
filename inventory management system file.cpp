#include <iostream>
#include <vector>
#include <string>

class Product {
public:
    std::string name;
    int quantity;
    double price;
};

class InventoryManagementSystem {
public:
    void addProduct() {
        std::string name;
        int quantity;
        double price;

        std::cout << "Enter product name: ";
        std::cin >> name;
        std::cout << "Enter quantity: ";
        std::cin >> quantity;
        std::cout << "Enter price: ";
        std::cin >> price;

        Product product;
        product.name = name;
        product.quantity = quantity;
        product.price = price;

        products.push_back(product);

        std::cout << "Product added successfully!" << std::endl;
    }

    void showProductList() {
        if (products.empty()) {
            std::cout << "No products available." << std::endl;
            return;
        }

        std::cout << "Product List:" << std::endl;
        for (const Product& product : products) {
            std::cout << "Name: " << product.name << std::endl;
            std::cout << "Quantity: " << product.quantity << std::endl;
            std::cout << "Price: " << product.price << std::endl;
            std::cout << "----------------------" << std::endl;
        }
    }

private:
    std::vector<Product> products;
};

int main() {
    InventoryManagementSystem inventorySystem;
    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add product" << std::endl;
        std::cout << "2. Show product list" << std::endl;
        std::cout << "0. Exit" << std::endl;

        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                inventorySystem.addProduct();
                break;
            case 2:
                inventorySystem.showProductList();
                break;
            case 0:
                std::cout << "Exiting..." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }

        std::cout << std::endl;
    }
}
