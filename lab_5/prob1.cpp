#include <iostream>

using namespace std;

int main() {
    int i, j;
    i = 10;
    j = 6;
    if (i <= j) {
        i = i + 2;
    }
    else {
        i = 1;
        j++;
    }

    cout << "i: " << i << " j: " << j << endl;
}