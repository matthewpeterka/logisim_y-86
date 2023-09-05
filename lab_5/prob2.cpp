#include <iostream>

using namespace std;

int main() {
    int j,k;
    j = 10;
    k = 20;
    for (int i=0; i <5; i++) {
        j = i*2;
        k = j+1;
    }

    cout << "j: " << j << " k: " << k << endl;


}

