#include <iostream>
using namespace std;

int main() {
    int count = 5;   // number of rows
    char ch;

    for (int i = 1; i <= count; i++) {
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch<<" ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}
