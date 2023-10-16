#include <iostream>

using namespace std;

int main() {
    int* p1, **p2, x; // so the * in the initial int* only applies to the first p1 listed, then everything else is just "int", so for the second pointer we create, p2, we have to "*" it again, while the x we dont need anything and it becomes a regular int."
    x = 10;
    cout << x << '\n';

    p1 = &x;
    p2 = &p1;

    cout << p1 << '\n';
    cout << p2 << '\n';

}
