#include <iostream>
using namespace std;

int recursive_fibonacci(int n)
{
    switch (n)
    {
    case 0:
        return 0;
    case 1:
        return 1;
    default:
        return recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2);
    }
}

int main()
{
    cout << "Hello, World!" << endl;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        cout << "Iteration " << i << ": " << recursive_fibonacci(i) << endl;
    }
}