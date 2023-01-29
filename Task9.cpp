#include <iostream>
using namespace std;
void star(int rows);

main()
{
    int rows;
    cout << "Enter a number :";
    cin >> rows;
    star(rows);
}
void star(int rows)
{
    for (int idx = 1 ; idx <= rows ; idx++)
    {
        for (int jdx = 1 ; jdx <= idx ; jdx++)
        {
            cout << "*";
        }
        for (int kdx = 1 ; kdx <= 2*(rows-idx) ; kdx++)
        {
            cout << " ";
        }
        for (int jdx = 1 ; jdx<=idx ; jdx++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
