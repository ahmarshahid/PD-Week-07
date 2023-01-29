#include <iostream>
using namespace std;
void amplify(int num);
main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    amplify(num);
}
void amplify(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (i % 4 == 0)
        {
            int x;
            x = i * 10;
            cout << x << endl;
        }
        else
        {
            cout << i << endl;
        }
    }
}