#include <iostream>
using namespace std;
int digit_sum(int num)
{
    int sum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }
    return sum;
}
int main()
{
    int num;
    cin >> num;
    cout << "The sum of digits of the number is: " << digit_sum(num);
}