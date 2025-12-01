#include "die.h"

void die() {
    std::srand(std::time(NULL)); // Initialize rand

    int die = (std::rand() % 6) + 1; // 1 a 6
    std::cout << "The die marks: " << die << std::endl;
}