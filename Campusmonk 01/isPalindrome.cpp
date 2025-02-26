#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;

    int temp = num;
    int rem, ans = 0;
    while (num != 0)
    {
        rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }
    if (temp == ans)
    {
        cout << "The number is a palindrome";
    }
    else
    {
        cout << "The number is not a palindrome";
    }
}