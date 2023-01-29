#include <iostream>
using namespace std;
void aestericks(int rows);
main()
{
    int rows;
    cout << "Enter the number of rows :";
    cin >> rows;
    aestericks(rows);
}
void aestericks(int rows)
{
    
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    
}
}