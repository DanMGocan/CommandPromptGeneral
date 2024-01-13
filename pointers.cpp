#include <iostream>
#include <cstdio>

    // Passing objects by reference
    int add_numbers(int& a, int& b) {
        return a + b;
    }

    // Handling array decay
    struct College {
        char name[256];
        };
        
// Function to print college names
    void print_names(College* colleges, size_t n_colleges) {
        for (size_t i = 0; i < n_colleges; i++) { 
            printf("%s College\n", colleges[i].name);
        }
    }

int main() {
    std::string batle = "Antietam";
    std::string* battle_address = &batle;
    std::cout << battle_address; 
    std::cout << *battle_address; // deferencing 

    // arrow pointer
    struct Book {
        std::string title; 
        int year; 
    };

    Book lesmis = Book {"lesmis", 1865};
    Book* lesmis_ptr = &lesmis; 
    lesmis_ptr->title; // does deferencing at the same time 
    std::cout << lesmis_ptr-> title;
    // This can be used to access methods as well 



    void print_names(College* colleges, size_t n_colleges); // Function prototype
    // Takes the lenght of the arrat and divides it by the size of one object and 
    // prints it that many times
    College oxford[] = { {"Magdalen"}, {"Nuffield"}, {"Kellogg"} };
    print_names(oxford, sizeof(oxford) / sizeof(College));

    // To obtain the address of an nth element in an array
    College* third_college = &oxford[1]; // or
    // College* third_college = oxford + 2;
    
    // When pointing to an array, we do not need refernece operator, the pointer will
    // point towards the first element of the list 
    // Pointer arithmetic - when adding values to a pointer that points to an array, we move the memory so many spaced forward. 

    // This is a void pointer. We cannot do arithmetic with it
    void* something = nullptr;

    int a = 9;
    int b = 10;

    std::cout << add_numbers(a, b);
}

/* FORWARD LINKED LIST */
