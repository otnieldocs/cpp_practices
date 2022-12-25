#include <iostream>
using namespace std;

template <class T>
T sum(T a, T b) {
    return a + b;
}

template <class A, class B>
bool isEqual(A a, B b) {
    return a == b;
}

int main() {
    cout << "5 + 3 = " << sum<int>(5, 3) << endl;
    cout << "5 == 5 ? " << isEqual(5, 5) << endl;
    cout << "5 == '5' ? " << isEqual<int, char>(5, '5') << endl;
    return 0;
}