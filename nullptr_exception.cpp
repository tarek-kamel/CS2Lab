#include <iostream>
using namespace std;

void print_arr(int* a, int size) {
    if (a == nullptr)
        throw string("Array has not been initialized.");
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";
    cout << endl;
    }

int main() {
    int SIZE = 10;
    int* arr = new int[SIZE];
    for (int i = 0; i < SIZE; i++) {
        arr[i] = 1 + i;
        }

    print_arr(arr, SIZE);

    try {
        print_arr(nullptr, SIZE);
        }
    catch (string err) {
        cout << "Error: " << err << endl;
        }
    return 0;
    }