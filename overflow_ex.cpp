#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    cout << "Enter a number between 0 and 255: ";
    int x;
    cin >> x;
    try
    {
        if(!(x >= 0 && x < 256))
            throw overflow_error("Number is outside acceptable range.\n");
    }
    catch(overflow_error &e)
    {
        cout << "Exception: " << e.what();
        return 0;
    }
    cout << "\nYou entered: " << x << endl;
    cout << "ASCII character for " << x << ": " << (char) x << endl;
    return 0;
}