#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() {
        cout << "Processing payment..." << endl;
    }
};

class CreditCardPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing credit card payment" << endl;
    }
};

class CashPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing cash payment" << endl;
    }
};

class UPIPayment : public Payment {
public:
    void processPayment() override {
        cout << "Processing UPI payment" << endl;
    }
};

int main() {
    Payment *p;

    CreditCardPayment cc;
    CashPayment cash;

    p = &cc; p->processPayment();

    return 0;
}
