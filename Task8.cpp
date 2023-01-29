#include <iostream>
using namespace std;
main()
{
    int cargo;
    cout << "How many cargos you want to enter? : ";
    cin >> cargo;
    float tonnage;
    float totalcargo = 0, average = 0, percentage1 = 0, percentage2 = 0, percentage3 = 0;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int idx = 1; idx <= cargo; idx++)
    {
        cout << "Enter the tonnage :";
        cin >> tonnage;
        totalcargo = totalcargo + tonnage;
        if (tonnage <= 3)
        {
            sum1 = sum1 + tonnage;
        }
        if (tonnage > 3 && tonnage <= 11)
        {
            sum2 = sum2 + tonnage;
        }
        if (tonnage > 11)
        {
            sum3 = sum3 + tonnage;
        }
    }
    percentage1 = (sum1 / totalcargo) * 100;
    percentage2 = (sum2 / totalcargo) * 100;
    percentage3 = (sum3 / totalcargo) * 100;
    average = ((sum1 * 200) + (sum2 * 175) + (sum3 * 120)) / totalcargo;
    cout << "The average price per ton of cargo is : " << average << "$" << endl;
    cout << "The percentage of cargo carried by minibus : " << percentage1 << "%" << endl;
    cout << "The percentage of cargo carried by truck : " << percentage2 << "%" << endl;
    cout << "The percentage of cargo carried by train : " << percentage3 << "%" << endl;
}
