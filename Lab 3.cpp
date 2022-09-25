#include <iostream>
#include <iomanip>
#include <cmath>
/* Lab 3
# enter Your name:

An employee is paid at a rate 25.55 per hour for regular hours worked in a
week. Any hours over that are paid at a overtime rate of one and one-half
times that. From the workers gross pay, 6% is withheld for Social Security tax,
14% is withheld for federal income tax, 5% withheld for state income tax, and $10
per week is withheld for union dues. If the worker has three or more dependents,
then an additional $15 is withheld of cover the extra cost of health insurance
for each dependent greater than two beyond what the employer pays.
Complete the following program to read the numbers
of regular hours worked (0 - 40), numbers of overtime hours worked (>= 0) and
the number dependents > 2 (>= 0). Calculate and output the workers gross pay,
each withholding amount and the net take-home pay for the week. Label all output
setprecision(2). Submit Lab3.cpp and a print screen or snipping of you output.

*/


using namespace std;

int main()

{   // Variable list
    const double union_dues = 10.0;
    double regular_hours = 0.0, overtime_hours = 0.0,
           social_security_tax = 0.0, federal_tax = 0.0, state_tax = 0.0,
           health_insurance = 0.0, gross_pay= 0.0, net_pay = 0.0;
     int no_dependents = 0;

    cout << setiosflags(ios::showpoint | ios::fixed);
     cout<< setprecision(2);

     // input data
     cout<<"\n Enter regular hours worked: ";
     cin>>regular_hours;


     // calculate withholdings


     // output results
        cout<<"\n\n"<<setw(35)<<"Output for Lab 3 \n";
        cout<<"\n"<<setw(20)<<"Regular Hours = "<< setw(10)<<regular_hours;

    cout << "\n\n Lab 3!" << endl;
    return 0;
}
