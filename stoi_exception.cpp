#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

int main()
{
    float x, y, result;
    string s;
    cout << "Enter the first number: ";
    cin >> s;
    try
    {
        x = stof(s);
    }
    catch(invalid_argument &e)
    {
        cout << "Exception: " << e.what() << ": cannot convert " << s << " to a floating point.\n";
        return 0;
    }

    cout << "Enter the second number: ";
    cin >> s;
    try
    {
        y = stof(s);
        if (y == 0)
        {
            throw runtime_error("Denominator is zero.");
        }
        result = x / y;

    }
    catch(invalid_argument &e)
    {
        cout << "Exception: " << e.what() << ": cannot convert " << s << " to a floating point.\n";
        return 0;
    }
    catch(runtime_error &e)
    {
        cout << "Exception: " << e.what() << endl;
        return 0;
    }

    cout << "Result = " << x << " / " << y << " = " << result;
    return 0;
}