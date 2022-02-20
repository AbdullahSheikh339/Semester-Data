#include <iostream>

using namespace std;

int greatest_common_factor(int, int);

int main()
{

    int num1, num2;
    cout << "Enter first number : ";
    cin >> num1;
    cout << "Enter second number : ";
    cin >> num2;

    int result = greatest_common_factor(num1, num2);
    cout << "Greatest common factor is : " << result << endl;
}

int greatest_common_factor(int num1, int num2)
{
    int result, count = 0, small;

    if (num2 > num1)
    {
        small = num1;
    }
    else
    {
        small = num2;
    }
    for (int i = 1; i <= small; i++)
    {
        count++;
        if (num1 % count == 0 && num2 % count == 0)
        {
            result = count;
        }
    }
    return result;
}
