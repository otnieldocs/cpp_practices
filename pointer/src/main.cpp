#include <iostream>
using namespace std;

int main() {
    int v;
    int *vPtr;
    v = 15;
    vPtr = &v;

    cout << "v value is " << v << endl;
    cout << "v address is " << &v << endl;
    cout << "vPtr reference address is " << vPtr << endl;
    cout << "vPtr value is " << *vPtr << endl;
    cout << "vPtr address is " << &vPtr << endl;

    *vPtr = 16; // dereferencing
    cout << "v after dereferenced is " << v << endl;

    v = 17;
    cout << "new vPtr is " << *vPtr << endl;

    int A[5];
    A[0] = 1; A[1] = 2; A[2] = 3; A[3] = 4; A[4] = 5;

    int *p;

    p = A;

    cout << "A = " << A << endl;
    cout << "*A = " << *A << endl;
    cout << "sizeof(A) is " << sizeof(A) << endl; 
    cout << "p = " << p << endl;
    cout << "sizeof(p) is " << sizeof(p) << endl;
    cout << "*p = " << *p << endl;
    cout << "A[0] = " << A[0] << endl;
    cout << "A[1] (array) = " << A[1] << endl;
    cout << "A[1] pointer = " << *(A+1) << endl;
    cout << "++p, address = " << ++p << ", value = " << *p << endl; 
    cout << "++*p, value = " << ++*p << ends;

    return 0;
}