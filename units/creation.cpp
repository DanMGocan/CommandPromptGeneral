#include <iostream>

// Something to keep in mind - I can use a static member to define a variable like hope or morale that is 
// shared between all instances of a class and modified by any of them as well. Is this good practice? 

// The superclass for civilian units 
class Civilian {
    private:
        std::string const name; 
        int age;
        bool child;
        bool worker;
        bool incapacitated; 

    public:
        // Constructor 
        Civilian(std::string name, int age) : name(name), age(age), incapacitated(false) {
            update_status();
        };

        // Constructors can be overloaded. Also, let's do this with brace initialization
        Civilian(std::string name, int age) : name{name}, age{age} {} 

        // All member initilization execute before the constructor so we have the advantage of focusing
        // on the constructor instead of doing error checking. 

        // Accessors
        std::string get_name() const { return name; }
        int get_age() const { return age; }
        bool is_child() const { return child; }
        bool is_worker() const { return worker; }
        bool is_incapacitated() const { return incapacitated; }

        // Modifiers
        void increment_age() {
            age++;
            update_status();
        }

        void set_incapacitated(bool status) {
            incapacitated = status;
        }

    private:
        void update_status() {
            child = age < 14;
            worker = age >= 14 && !incapacitated;
        }
    };

int main () {
    Civilian radu("Radu", 42);
    std::cout << radu.get_age();
    radu.increment_age();
    radu.increment_age();
    std::cout << radu.get_age();

}

