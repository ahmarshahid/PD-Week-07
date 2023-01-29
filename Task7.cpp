#include <iostream>
using namespace std;
main()
{
    float number;
    cout << "How many numbers you want to enter? :";
    cin >> number;
    int digit = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    float percentage1, percentage2, percentage3;
    for (int i = 0; i < number; i++)
    {
        {
            cout << "Enter number :";
            cin >> digit;
        }
        if (digit % 2 == 0)
        {
            x++;
        }
        if (digit % 3 == 0)
        {
            y++;
        }
        if (digit % 4 == 0)
        {
            z++;
        }
    }
    percentage1 = (x / number) * 100;
    percentage2 = (y / number) * 100;
    percentage3 = (z / number) * 100;
    cout << percentage1 << "%" << endl;
    cout << percentage2 << "%" << endl;
    cout << percentage3 << "%" << endl;
}