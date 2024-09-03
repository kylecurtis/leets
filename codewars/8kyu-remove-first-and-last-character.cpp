#include <iostream>
#include <string>
#include <cassert>

using namespace std;

/* SOLUTION
======================================================================= */
string sliceString(string str)
{
    return str.substr(1, str.length() - 2);
}

/* TEST
======================================================================= */
void test() {
    assert(sliceString("tuna") == "un");
    assert(sliceString("rats") == "at");
    assert(sliceString("code") == "od");
    assert(sliceString("country") == "ountr");
    assert(sliceString("place") == "lac");
    assert(sliceString("translation") == "ranslatio");
    std::cout << "All tests passed!" << '\n';
}

/* MAIN
======================================================================= */
int main() {
    test();
    return 0;
}
