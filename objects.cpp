#include <iostream>

// Static object is an object whose life extends throughout the whole program
///// cannot be accessed from other files 
    void function() {
        static int counter = 0; // This variable will retain its value between calls
        counter++;
        std::cout << counter << std::endl;
    }

class Soldier {
    public: 
        static std::string greeting; // this has to be defined outside the class 
        static const int age{20}; // can be defined inside of a class when it is constant
        };

    std::string Soldier::greeting{"Hello!"}; // must be defined outside of a function


int main() {
    function(); // 1
    function(); // 2
    function(); // 3
    Soldier infantry;

    std::cout << infantry.greeting;
}

class MyClass {
public:
    static int staticValue; // Declaration
};

int MyClass::staticValue = 0; // Definition

// Static members of a class are not associetated with a particular instance, but share a common static member
// 'extern' key word 
// Global variable with static append are limited to the same file





    