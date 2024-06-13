#include <iostream>
using namespace std;

float divide(float x, float y)
{
  if (y == 0)
  {
    throw string("Division by zero.");// equivelante to [throw "Division by zero"] but make the catch as [catch (const *char obj)]
  }

  return x / y;
}

int main()
{
  float x = 1, y = 2;
  cout << divide(x, y) << endl;

  y = 0;
  try
  {
    cout << divide(x, y) << endl;
  }
  catch (string err)
  {
    cout << "Exception: " << err << endl;
  }
  cout << "Program done.\n";

  return 0;
}