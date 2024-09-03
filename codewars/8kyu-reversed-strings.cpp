#include <iostream>
#include <string>
#include <cassert>

using namespace std;

/* SOLUTION
======================================================================= */
string reverseString(string str)
{
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        swap(str[i], str[len - i - 1]);
    }
    return str;
}

/* TEST
======================================================================= */
void test() {
    assert(reverseString("hello") == "olleh");
    assert(reverseString("rat") == "tar");
    assert(reverseString("alpha") == "ahpla");
    assert(reverseString("codewars") == "srawedoc");
    assert(reverseString("football") == "llabtoof");
    assert(reverseString("translation") == "noitalsnart");
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
