#include <iostream>
#include <string>
#include <cassert>

/* SOLUTION
======================================================================= */
int square_digits(int num) {
    if (num == 0) return 0;

    std::string final;
    while (num > 0) {
        int value = num % 10;
        num /= 10;
        final.insert(0, std::to_string(value * value));
    }
    return std::stoi(final);
}

/* TEST
======================================================================= */
void test() {
    assert(square_digits(3212) == 9414);
    assert(square_digits(2112) == 4114);
    assert(square_digits(0) == 0);
    assert(square_digits(13579) == 19254981);
    assert(square_digits(24680) == 41636640);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
