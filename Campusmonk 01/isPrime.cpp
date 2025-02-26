#include <iostream>
using namespace std;
bool prime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int number;
    cin >> number;
    if (prime(number))
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }
}