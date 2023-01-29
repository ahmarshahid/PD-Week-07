#include <iostream>
using namespace std;
main()
{
    int doctors = 7;
    int days;
    cout << "Enter the number of days :";
    cin >> days;
    int untreated = 0;
    int treated = 0;
    int patient;

    for (int i = 1; i <= days; i++)
    {

        cout << "Enter the number of patients :";
        cin >> patient;
        if (i % 3 == 0)
        {
            if (untreated > treated)
            {
                doctors++;
            }
        }
        if (patient > doctors)
        {

            untreated = untreated + (patient - doctors);
            treated = treated + doctors;
        }

        else
        {
            treated = treated + patient;
        }
    }
    cout << "The treated patients are :" <<  treated << endl;
    cout << "The untreated patients are :"<< untreated << endl;
}
