#include <iostream>
#include <vector>
#include <cmath>

int absolute_value(int x) {
    if (x > 0) { return x; }
    else { return x * -1; };
}



int main () {
    int test_number = 100;
    int x = 2123;
    std::vector<int> v = {4, 6, 1, 2, 3, 6, 8, 23, 2, 76, 5};
    std::cout << "Absolute value of " << x << " is " << absolute_value(x);
    std::cout << "Testing literals " << 1000000 << " is this equal to " << 1'000'000 << "\n\n"; 
    std::cout << 0xABABAB126FE << "this is hexadecimal\n\n";
    std::cout << 0b1101011010101010100110101010101 << "this is binary\n\n"; 
    std::cout << 04754742234324 << " this is octal \n\n"; 

    // Iterating over a vector with a range based loop
    for (int number : v) {
        std::cout << number << " raised to the power of 2 is: " << pow(number, 2) << "\n";
    };

    // Multi line string literals 
    char test[] = "I am just "
    "testing "
    "a concept "
    "I just read about! ";
    std::cout << test;
    //system("pause");  this will prevent the console from closing

    /* #################################################################### */
    /********************************************************** ENUMERATORS */

    enum class Jobs {
        Blacksmith, 
        Farmer,
        Herder,
        Sewer, 
        Baker
    };

    // Class representing a Person with a job
    class Person {
    private:
        std::string name;
        Jobs job;

    public:
        // Constructor
        Person(const std::string& name, Jobs job) : name(name), job(job) {}

        // Function to get the job as a string
        std::string getJobName() const {
            switch (job) {
                case Jobs::Blacksmith: return "Blacksmith";
                case Jobs::Farmer: return "Farmer";
                case Jobs::Herder: return "Herder";
                case Jobs::Sewer: return "Sewer";
                case Jobs::Baker: return "Baker";
                default: return "Unknown";
            }
        }

        // Function to print person's information
        void printInfo() const {
            std::cout << name << " is a " << getJobName() << "." << std::endl;
        }
    };
    
    // Creating instances of Person with different jobs
    Person alice("Alice", Jobs::Farmer);
    Person bob("Bob", Jobs::Baker);
    Person charlie("Charlie", Jobs::Blacksmith);

    // Printing information about each person
    alice.printInfo();
    bob.printInfo();
    charlie.printInfo();

    /*you cannot directly create a Person object with a job title passed as a string (like "driver") when your Person class is designed to use an 
    enumeration (Jobs) for the job type. In C++, enumerations are type-safe and distinct from strings. This means that an enum value must be one 
    of the predefined options and cannot be implicitly converted from a string.*/

    /* #################################################################### */
    /********************************************************** Structures  */

    struct Book {
        char name[256]; 
        int year; 
        int pages; 
        bool hardcover; 
        };

    Book lesmis;
    lesmis.hardcover = false;
    lesmis.pages = 602;
}

/* #######################################################################*/
/****************************************************** Random stuff ******/

void constant_function (const int* pointer_again) {
    // pointer value can be read but not changed 
}

// To use the const modifier on a function, that function needs to be member of 
// an object 
const int year = 2002;
int get_info() /*const*/ {
    return year;
}