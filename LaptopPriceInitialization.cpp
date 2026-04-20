#include <iostream>
using namespace std;

class Laptop {
private:
    float laptop_price;

public:
    Laptop(float price);
    void displayPrice();
};

Laptop::Laptop(float price) {
    laptop_price = price;
}

void Laptop::displayPrice() {
    cout << "Laptop Price: " << laptop_price << endl;
}

int main() {
    Laptop laptop1(45000);
    Laptop laptop2(55000);
    Laptop laptop3(65000);

    cout << "Laptop A Price: ";
    laptop1.displayPrice();

    cout << "Laptop B Price: ";
    laptop2.displayPrice();

    cout << "Laptop C Price: ";
    laptop3.displayPrice();

    return 0;
}
