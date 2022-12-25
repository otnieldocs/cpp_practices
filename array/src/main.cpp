#include <iostream>
using namespace std;

void normalArray() {
    cout << "--- normal array ---" << endl;
    int a[3] = {1, 2, 3};
    for (int i=0; i<3; i++) {
        cout << a[i] << ", ";
    }
    cout << endl;

    int b[] = {1, 2, 3, 4, 5};
    int bLen = sizeof(b)/sizeof(b[0]);
    for(int i=0; i<bLen; i++) {
        cout << b[i] << ", ";
    }
    cout << endl;
}

void multiDimensionArray() {
    cout << "--- multi dimension array ---" << endl;
    int a[2][3] = {{1,2,3}, {2,3,4}};
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << a[i][j] << ", ";
        }
        cout << endl;
    }

    int b[2][3] = {1,2,3,2,3,4};
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            cout << b[i][j] << ", ";
        }
        cout << endl;
    }
}

void charArray() {
    cout << "--- char array ---" << endl;
    char b[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char c[] = "hello";
    cout << b << endl;
    cout << c << endl;
}

int main() {
    normalArray();
    multiDimensionArray();
    charArray();
    return 0;
}