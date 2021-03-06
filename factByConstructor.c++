#include <iostream>
using namespace std;

class Factorial
{
    int fact = 1;

public:
    Factorial(int x) // parameterized constructor
    {
        while (x >= 1)
        {
            fact *= x;
            x--;
        }
    }

    void display()
    {
        cout << "The factorial is: " << fact << endl;
    }
};

int main()
{
    system("cls");

    Factorial of(6); // of is an object of Factorial class
    of.display();

    return 0;
}