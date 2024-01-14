#include <iostream>
#include <string>

int main() {
	// Complete the program
    std::string a, b;
    std::getline(std::cin, a);
    std::getline(std::cin, b);
    
    std::cout << a.size() << " " << b.size() << "\n";
    std::cout << a + b << "\n";
    
    std::swap(a[0], b[0]);

    
    std::cout << a << " " << b;
    return 0;
}