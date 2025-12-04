#include <iostream>
using namespace std;

class Product {
protected:
    double price;
    string brand;
};

class DiscountedProduct : protected Product {
public:
    DiscountedProduct(double p, string b) {
        price = p;
        brand = b;
    }

    void applyDiscount(double percent) {
        double discountAmount = price * (percent / 100.0);
        price = price - discountAmount; 

        cout << "Brand: " << brand << endl;
        cout << "Discounted Price: " << price << endl;
    }
};

int main() {
    DiscountedProduct dp(2000, "Nike");
    dp.applyDiscount(20);
    return 0;
}
