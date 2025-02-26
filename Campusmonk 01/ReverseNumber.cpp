#include <iostream>
using namespace std;
int main()
{
    int num;
    int rem, ans = 0;
    cin >> num;

    while (num != 0)
    {
        rem = num % 10;
        ans = ans * 10 + rem;
        num /= 10;
    }
    cout << "The number after reverse is: " << ans;
}