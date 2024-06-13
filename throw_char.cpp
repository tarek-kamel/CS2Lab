#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int x = 2, y = 0;
    try
    {
        if (y == 0)
            throw 'a';
    }
    catch (char ab)
    {
        cout << "Exception: " << ab << endl;
    }
    return 0;
}