#include <chrono>
#include <ctime>
#include <iostream>
#include <time.h>
int main() {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::chrono::hours anhour(1);
    std::chrono::hours twodays(24 * 2);
    std::chrono::system_clock::time_point anhourago = now - anhour;
    std::chrono::system_clock::time_point tomorrow = now + twodays;
    // infelizmente ainda dependemos do time.h
    time_t tt = std::chrono::system_clock::to_time_t(anhourago);
    std::cout << "An hour ago: " << ::ctime(&tt);
    tt = std::chrono::system_clock::to_time_t(tomorrow);
    std::cout << "Tomorrow:    " << ::ctime(&tt);
}