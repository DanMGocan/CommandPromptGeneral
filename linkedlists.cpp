// does not have to be memory contiguous 
// THIS IS A REVERSE ORDER LINKED LIST WHERE EVERY ITEM IS INSERTED AT THE BEGINNING OF THE LSIT 
// Inserting linked lists element at the end might become inefficient 

#include <iostream>
#include <string>
#include <cstdio>

enum class Jobs {
    Farmer,
    Blacksmith
};

struct Villagers {
    Villagers* next{}; // pointer to another element
    // Function to insert a new linked list element
    void insert(Villagers* new_villager) {
        new_villager->next = next;
        next = new_villager;
    }
    std::string name;
    int age;
    Jobs job = Jobs::Blacksmith; 

};

int main() {

    Villagers villager1;
    Villagers villager2;
    
    villager1.name = "Dan";
    villager1.age = 20;

    villager2.name = "Maria";
    villager2.age = 18;

    // Inserting element 2 after element 1 
    villager1.insert(&villager2); // We pass the reference address of the 2nd element to the 1st element. So far so good. 

    if (villager1.next == &villager2) {
        std::cout << "Element at " << &villager2 << " successfully inserted after " << &villager1;
        std::cout << "Job of villager 1 " <<  static_cast<int>(villager1.job);
    }
}

/*************************************************************************/
// Inserting a large number of linked list elements in a list, with a constant pointer 

/*struct Villager {
    Villager* next{};
    std::string name;
    int age;
    // other properties like job, etc.
};

class VillagerList {
private:
    Villager* head{};
    Villager* tail{};  // Pointer to the last element

public:
    VillagerList() : head(nullptr), tail(nullptr) {}

    // Function to insert a new villager at the end of the list
    void insertAtEnd(const std::string& name, int age) {
        Villager* newVillager = new Villager{name, age, nullptr};

        if (tail == nullptr) { // If the list is empty
            head = tail = newVillager;
        } else {
            tail->next = newVillager;
            tail = newVillager;
        }
    }
};

int main() {
    VillagerList villagers;

    for (int i = 0; i < 10000; ++i) {
        villagers.insertAtEnd("Villager " + std::to_string(i), 30);  // Example data
    }

    // The list now contains 10,000 villagers
    return 0;
}

********************************************************************
In this example:

VillagerList class manages the linked list. It keeps track of both the head and the tail of the list.
insertAtEnd method inserts a new villager at the end of the list. It updates the tail pointer accordingly.
In main, a loop runs 10,000 times, creating and inserting a new Villager each time.
*/