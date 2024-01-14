#include <iostream>
#include <stdexcept>
#include <cstdio>

struct Groucho {
    void forget(int x) {
        if (x == 0xFACE) {
            throw std::runtime_error{ "I'd be glad to make an exception." };
            }
        printf("Forgot 0x%x\n", x);
        }
};

int main () {

    Groucho pleb;

    try {
        pleb.forget(0xFACE);
        pleb.forget(0xFA23CE);
        pleb.forget(0xFAC512E);


    } catch (const std::runtime_error &e) {
        std::cout << "Error caught with the message " << e.what();
    }

}

/* Logical errors */
/*#include <iostream>
#include <stdexcept>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    // Class invariant: account number must not be empty and balance must be non-negative
    BankAccount(const std::string& acctNumber, double initialBalance)
        : accountNumber(acctNumber), balance(initialBalance) {
        
        if (accountNumber.empty() || balance < 0) {
            throw std::logic_error("Invalid account number or balance for bank account creation.");
        }
    }

    // Other methods...
};

int main() {
    try {
        // Attempt to create a bank account with an invalid account number and balance
        BankAccount myAccount("", -100);

        // Other code...
    } catch (const std::logic_error& e) {
        std::cerr << "Failed to create bank account: " << e.what() << std::endl;
    }

    return 0;
}
*/

catch(std::exception &ex) // will catch most exceptions, as most inherit from this class 
// otherwise, we also have std::logical_error and std::runtime_error