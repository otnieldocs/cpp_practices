#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    int r = sum<int>(5, 3);
    cout << "5 + 3 = " << r << endl;
    return 0;
}