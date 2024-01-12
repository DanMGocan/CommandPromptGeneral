#include <iostream>

// The superclass for civilian units 
class Civilian {
    private:
        std::string name; 
        int age;
        bool child;
        bool worker;
        bool incapacitated; 

    public:
        // Constructor 
        Civilian(std::string name, int age) : name(name), age(age), incapacitated(false) {
            update_status();
        };

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

