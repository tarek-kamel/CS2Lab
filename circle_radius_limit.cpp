#include <iostream>
#include <stdexcept>
using namespace std;

class NegativeRadiusException : public length_error
{
public:
    NegativeRadiusException() : length_error("Radius cannot be negative.") {}
};

class RadiusTooBigException : public length_error
{
public:
    RadiusTooBigException() : length_error("Radius is bigger than 5001.") {}
};

class Circle
{
private:
    double radius;

public:
    static const double LIMIT;

    Circle() { radius = 0; }
    Circle(double r)
    {
        if (r < 0)
            throw NegativeRadiusException();
        else if (r > LIMIT)
            throw RadiusTooBigException();
        radius = r;
    }
    void set_radius(double r)
    {
        if (r < 0)
            throw NegativeRadiusException();
        else if (r > LIMIT)
            throw RadiusTooBigException();
        radius = r;
    }

    void print() { cout << "Circle with radius: " << radius << endl; }
};

const double Circle::LIMIT = 5000;

int main()
{
    while (true)
    {
        float r;
        cout << "Enter a non-negative radius that is less than 5001.\n";
        cin >> r;
        Circle c;
        try
        {
            c.set_radius(r);
            c.print();
        }
        catch (NegativeRadiusException &e)
        {
            cout << "Error: " << e.what() << endl;
        }
        catch (RadiusTooBigException &e)
        {
            cout << "Error: " << e.what() << endl;
        }
        cout << endl;
        cout << "Program done.\n";
    }

    return 0;
}