#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false); // Make I/O faster

    int n;
    std::cin >> n;
    std::vector<int> initial;
    initial.reserve(n); // Reserve space for n elements to avoid reallocations

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        initial.emplace_back(num);
    }

    int delete_one;
    std::cin >> delete_one;
    initial.erase(initial.begin() + delete_one - 1);

    int delete_start, delete_end;
    std::cin >> delete_start >> delete_end;
    initial.erase(initial.begin() + delete_start - 1, initial.begin() + delete_end - 1);

    std::cout << initial.size() << "\n";
    for (int element : initial) {
        std::cout << element << " ";
    }

    return 0;
}
