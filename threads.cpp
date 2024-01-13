#include <iostream>
#include <thread>

void threadFunction() {
    thread_local int threadSpecificVar = 0; // Each thread gets its own copy of threadSpecificVar // this is a static, thread safe variable. we can add the extern keyword as well
    threadSpecificVar++;
    std::cout << "Thread specific variable value: " << threadSpecificVar << "\n\n";
}

int main() {
    std::thread t1(threadFunction);
    std::thread t2(threadFunction);

    t1.join();
    t2.join();

    int threadsnumber = std::thread::hardware_concurrency();
    std::cout << "You have " << threadsnumber << " threads available!\n";

    return 0;
}
