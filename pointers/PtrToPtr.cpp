#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int* ptr1 = &num;
    int** ptr2 = &ptr1;
    cout << "Value of num: " << num << endl;
    cout << "Value using ptr1: " << *ptr1 << endl;
    cout << "Value using ptr2: " << **ptr2 << endl;

    return 0;
}
