//Max Aeon Parks
//CSC 175 W2 Fall 2022 Lab 5
//I think 'unknown number of assignments' in the instructions may have been ambiguous (I thought it meant that the number of assignments would be unknown until after they had all been entered by the user), and I read it as asking us to allow the user to continue entering scores until they are done. If you'd like me to redo the assignment to be more in line with the flowchart, please let me know. I added a couple of comments showing the general direction I would take to make those changes.

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{ int score= 0, total = 0, average = 0, n = 0;
//int number = 0;
     char yes_no;

cout <<"\n This is a program developed by Max for Lab 5 to calculate the average score for an unknown number of equally weighted assignments." <<endl;

//cout<<"\n\n "How many scores will you enter?"; cin >>number;
//while n<= number
//[[would also need to delete "do you have another score to add?" prompts]]

cout <<"\n\n Enter your score: \n\n";
cin >> score;

if ((0 <= score) & (score <= 100))
    {n++;   total= score + total;
    average = total/n;
    cout<< "\n\n Your average score is "<< average << " and the corresponding letter grade is ";
    if (average >= 90 )
     cout <<"A";
    else if (average >= 80)
     cout<< "B";
    else if (average >= 70)
     cout << "C";
    else if (average >= 60)
     cout << "D";
    else
     cout << "E";
    cout << endl;
    cout <<"\n\n You've entered "<< n
       << " valid scores with the average score of "
       << average<<"."<< endl;}

else         {
            cout<<"Invalid entry. Please only enter scores of 0-100.";
            cout << endl;
        }

cout<<"\n\n Do you have another score to add? Type 'y' for yes or any other key(s) to end. \n\n";
cin >> yes_no;

while (yes_no == 'y')
   {cout<< "\n\n Enter your score, 0-100: \n\n";
    cin >> score;

    if ((score < 0) || (score > 100))
        {
            cout<<"Invalid entry. Please only enter scores of 0-100.";
            cout << endl;
            cout<< "\n\n Do you have another score to add? Type 'y' for yes or any other key(s) to end. \n\n";
            cin >> yes_no;
        }


    if ((0 <= score) & (score <= 100))
    {n++;   total= score + total;
    average = total/n;
    cout<< "\n\n Your average score is "<< average << " and the corresponding letter grade is ";
    if (average >= 90 )
     cout <<"A";
    else if (average >= 80)
     cout<< "B";
    else if (average >= 70)
     cout << "C";
    else if (average >= 60)
     cout << "D";
    else
     cout << "E";
    cout << endl;
    cout <<"\n\n You've entered "<< n
       << " valid scores with the average score of "
       << average<<"."<< endl;
    cout<< "\n\n Do you have another score to add? Type 'y' for yes and any other key(s) to end. \n\n";
    cin >> yes_no;}
   }

if ('n')
    {cout <<"\n\n Thank you for using Max's Lab 5 program. You entered "<< n
       << " valid scores with the average score of "
       << average<<"."<< endl;}

       return 0;
}
// end main
//lab5
