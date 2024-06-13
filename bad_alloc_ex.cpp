#include <iostream>
#include <stdexcept>
using namespace std;

/*
Type of the exceptions thrown by the standard definitions of operator new and operator new[]
when they fail to allocate the requested storage space.
*/
int main() {
  try {
    unsigned long long size = 99999999999;
    cout << "size = " << size << endl;
    int* myarray = new int[size];
    }
  catch (std::bad_alloc& ba) {
    std::cerr << "bad_alloc caught: " << ba.what() << '\n';
    return 0;
    }
  cout << "Allocation successful.\n";
  return 0;
  }