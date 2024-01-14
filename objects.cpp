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

    // Creating dynamic objects: 
    int* my_new_pointer = new int{52}; 
    // Dynamic objects are allocated and deallocated on request 
    delete my_new_pointer; // Delete needs the pointer to the object to be deleted 

    int* arr_pointer = new int[100]; // dynamic array
    delete[] arr_pointer;
}

class MyClass {
public:
    static int staticValue; // Declaration
};

int MyClass::staticValue = 0; // Definition

// Static members of a class are not associetated with a particular instance, but share a common static member
// 'extern' key word 
// Global variable with static append are limited to the same file

/* STRUCTURED BINDINGS */
// allows for unpacking a structure or a tuple into separate variables 

/*bool send_kings_horses_and_men() {
 auto [hd, success] = make_humpty(); w
 if(!success) return false;
 // Class invariants established
 --snip--
 return true;*/

 /* HOW TO COPY AN OBJECT, so it doesn't occupy the same space in memory */

 struct SimpleStructure {
    int a{};
    SimpleStructure(const SimpleStructure &copy);
 };

 SimpleStructure a;
 SimpleStructure a_copy{a};