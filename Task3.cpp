#include <iostream>
using namespace std;
void aestericksup(int rows);
void aestericksdown(int rows);
main()
{
    int rows;
    cout << "Enter the number of rows :";
    cin >> rows;
    aestericksup(rows);
    aestericksdown(rows);
}
void aestericksup(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= rows-i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
        cout << endl;
    }
}
void aestericksdown(int rows)
{

    for (int i = rows; i >= 1; i--)
    {
        for(int k = 1; k <= rows - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        
        

        cout << endl;
    }
}