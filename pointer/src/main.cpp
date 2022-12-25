#include <iostream>
using namespace std;

void normalPointer() {
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
    cout << "++*p, value = " << ++*p << endl;
}

void dynamycAllocation() {
    cout << "--- malloc ---" << endl;
    int *ptr = (int*)malloc(5*sizeof(int));
    cout << "size of *ptr = " << sizeof(ptr) << endl;
    
    for(int i=0; i<5; i++) {
        ptr[i] = i+1;
    }

    for(int i=0; i<5; i++) {
        cout << ptr[i] << ", ";
    }
    cout << endl;

    free(ptr);

    cout << "--- calloc ---" << endl;
    int *ptr1 = (int*)calloc(5, sizeof(int));
    cout << "size of *ptr1 = " << sizeof(ptr1) << endl;

    for(int i=0; i<5; i++) {
        ptr1[i] = i+1;
    }

    for(int i=0; i<5; i++) {
        cout << ptr1[i] << ", ";
    }
    cout << endl;

    free(ptr1);

    cout << "--- new ---" << endl;
    int *ptr2 = new int[5];
    cout << "size of *ptr2 = " << sizeof(ptr2) << endl;

    for(int i=0; i<5; i++) {
        ptr2[i] = i+1;
    }

    int len = sizeof(ptr2) / sizeof(int);
    cout << "size of ptr2 = " << len << endl;

    for(int i=0; i<5; i++) {
        cout << ptr2[i] << ", ";
    }
    cout << endl;

    free(ptr2);
}

int main() {
    normalPointer();
    dynamycAllocation();

    return 0;
}