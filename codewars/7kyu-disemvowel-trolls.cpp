#include <iostream>
#include <string>
#include <cassert>

/* SOLUTION
======================================================================= */
std::string disemvowel(const std::string& str) {
    std::string vowels = "AaEeIiOoUu"; 
    std::string final = "";
    for (char c : str) {
        if (vowels.find(c) == std::string::npos) {
            final.push_back(c);
        }
    }
    return final;
}

/* TEST
======================================================================= */
void test() {
    assert(disemvowel("This website is for losers LOL!") == "Ths wbst s fr lsrs LL!");
    assert(disemvowel("Hello World") == "Hll Wrld");
    assert(disemvowel("AEIOU") == "");
    assert(disemvowel("BCDFG") == "BCDFG");
    assert(disemvowel("") == "");
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
