#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class DivisionByZeroException : public runtime_error
{
public:
    DivisionByZeroException() : runtime_error("The denominator is zero."){};
};

float divide(float x, float y)
{
    if (y == 0)
    {
        throw DivisionByZeroException();
    }
    return x / y;
}

int main()
{
    float x, y, result;
    string s1, s2;
    cout << "Enter two numbers: ";
    cin >> s1 >> s2;
    x = stof(s1);
    y = stof(s2);
    try
    {

        result = divide(x, y);
        cout << x << " / " << y << " = " << result << endl;
    }
    /*
    catch (invalid_argument &new_exception)
    {
        cout << "Exception: " << new_exception.what() << ": cannot convert to a floating point.\n";
    }
    */
    catch (DivisionByZeroException &e)
    {
        cout << "Exception: " << e.what();
    }
    cin >> x;
    return 0;
}