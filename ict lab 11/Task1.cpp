#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    double balance;

public:
    BankAccount(string accountName, double initialBalance) {
        name = accountName;
        balance = initialBalance;

        cout << "Account created for " << name << endl;
    }
};

int main() {
    BankAccount customer1("Taha", 5000.0);
    BankAccount customer2("Ali", 10000.0);

    return 0;
}
