#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
int ass1 = 0,
month,
day;

cout << " Welcome to Max's CSC 175 Fall 2022 Assignment Tracker." << endl;

cout << " What is the assignment number?" << endl;
cin >> ass1;

cout << " What is the due date? Please enter two integers for the month and two integers for the day" << endl;
cout << " Month:" << endl;
cin >> month;
cout << " Day:" << endl;
cin >> day;

system("cls");

    cout << endl << endl <<endl,
    cout << "        Max Parks, PhD" << endl,
    cout << "        CSC 175 W2" << endl,
    cout << "        Assignment " << ass1 << endl,
    cout << "        Due Date: " << month <<"/"<< day <<"/"<< "2022" << endl,
    cout << "        Grade: _____" <<endl;
    return 0;
}
