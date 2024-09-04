#include <iostream>
#include <string>
#include <cassert>

using namespace std;

/* SOLUTION
======================================================================= */
int getCount(const string& inputStr){
    int num_vowels = 0;
    std::string vowels = "aeiou";

    for (char c : inputStr) {
        if (vowels.find(c) != std::string::npos) {
           num_vowels++;
        }
    }
    return num_vowels;
}

/* TEST
======================================================================= */
void test() {
    assert(getCount("abracadabra") == 5);
    assert(getCount("hello") == 2);
    assert(getCount("codewars") == 3);
    assert(getCount("aeiou") == 5);
    assert(getCount("bcdfg") == 0);
    assert(getCount("") == 0);
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
