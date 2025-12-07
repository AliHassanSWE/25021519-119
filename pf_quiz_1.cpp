/*Write a program for a spa and wellness center. Read N services
 performed and price for each service. If price > 2200 mark it
  as "Premium Service". Print total income and count of premium 
  services. Use variables, loops, input/output and conditions.*/

#include <iostream>
using namespace std;

int main() {
     cout<<"-----===WELCOME TO MY SPA===-----"<<endl;
    int N;
    cout << "Enter number of services performed: ";
    cin >> N;
    float price;
    float totalIncome = 0;
    int premiumCount = 0;

    for (int i = 1; i <= N; i++)
     {
        cout << "Enter price of service " << i << ": ";
        cin >> price;

        if (price > 2200)
         {
            cout << "Premium Service" << endl;
            premiumCount++;     // count premium services
        } else {
            cout << "Regular Service" << endl;
        }

        totalIncome += price;   // add income from this service
    }

    cout << "\nTotal income = " << totalIncome << endl;
    cout << "Total premium services = " << premiumCount << endl;
     cout<<"-----===THANK YOU AND VISIT AGAIN===-----"<<endl;

    return 0;
}