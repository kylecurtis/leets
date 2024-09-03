#include <iostream>
#include <string>
#include <cassert>

/* SOLUTION
======================================================================= */
std::string repeat_str(size_t repeat, const std::string& str) {
    std::string result = ""; 
    for (int i = 0; i < repeat; ++i) {
        result += str;
    }
    return result;
}

/* TEST
======================================================================= */
void test() {
    assert(repeat_str(3, "*") == "***");
    assert(repeat_str(5, "#") == "#####");
    assert(repeat_str(2, "ha ") == "ha ha ");
    assert(repeat_str(5, ">") == ">>>>>");
    assert(repeat_str(10, "!") == "!!!!!!!!!!");
    assert(repeat_str(3, "hello ") == "hello hello hello ");
    assert(repeat_str(3, "$") == "$$$");
    assert(repeat_str(5, "a") == "aaaaa");
    assert(repeat_str(6, "A") == "AAAAAA");
    assert(repeat_str(7, "aA") == "aAaAaAaAaAaAaA");
    assert(repeat_str(3, "") == "");
    assert(repeat_str(0, "null") == "");
    assert(repeat_str(0, "") == "");
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
