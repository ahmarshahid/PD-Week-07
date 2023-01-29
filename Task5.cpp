#include <iostream>
using namespace std;
int triangle(int num);

main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    int output;
    output = triangle(num);
    cout << output;
    
}
int triangle(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    return sum;
}
