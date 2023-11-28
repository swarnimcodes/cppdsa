#include <iostream>
using namespace std;

int fibonacci(int n)
{
    switch (n)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    default:
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    cout << "Hello, World!" << endl;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << "Iteration " << i << ": " << fibonacci(i) << endl;
    }
}