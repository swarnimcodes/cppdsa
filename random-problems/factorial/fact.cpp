#include <iostream>

using namespace std;

int recursive_factorial(int num)
{
    switch (num)
    {
    case 0:
    case 1:
        return 1;
    default:
        return num * recursive_factorial(num - 1);
    }
}

int main()
{
    cout << "Hello, World!" << endl;
    int ans = recursive_factorial(5);
    cout << "Factorial of 5: " << ans << "\n";
    return 0;
}
