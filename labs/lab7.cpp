//Max Aeon Parks
//CSC 175 W2 Fall 2022 Lab 7-- sorry it's late!

#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int main()
{ int  numberofstudents = 0;
//int number = 0;
     char yes_no;

cout<<"\n This is a program developed by Max for Lab 6 to calculate the average score for an unknown number of equally weighted assignments for a class of students." <<endl;

cout<<"\n\n How many students are in the class? Please enter a number 1 to 30, or any letter key to end the session: \n\n";
cin >>numberofstudents;

if (((numberofstudents < 1) || (numberofstudents > 30))||cin.fail())
        {   cin.clear();
            cin.sync();
            cout<<"Invalid entry. Please only enter a number from 1-30 to begin entering student scores.";
            cin >>numberofstudents;}

for (int k = 1; k <= numberofstudents; k++)
{

if (k<=numberofstudents){
cout <<"\n Do you have a score to enter for student "<<k<<"? Please type y for yes or any other key to end the session for this student."<<endl;
cin>>yes_no;

if ((yes_no != 'y') && (k>=numberofstudents))
{
    cout<<"\n\n Thanks for using Max's Lab 7."<<endl;
}

if ((yes_no != 'y')&&(k<numberofstudents))
    {
    k++;
    cout<<"\n Do you have a score to enter for student "<<k<<"? Please type y for yes or any other key to end the session for this student.";
    cin>>yes_no;}

else if (yes_no == 'y'){
int n=0, score=0, total=0, average=0;
cout <<"\n\n Enter a score 0-100: \n\n";
cin >> score;

if (((score < 0) || (score > 100))||cin.fail())
        {   cin.clear();
            cin.sync();
            cout<<"Invalid entry. Please only enter scores of 0-100. \n";
            cout << endl;
            cin >> yes_no;
        }

else if ((0 <= score) & (score <= 100))
    {n++;   total= score + total;
    average = total/n;
    cout<< "\n The average score for student "<<k<<" is "<< average << " and the corresponding letter grade is ";
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
    cout <<"\n You've entered "<< n
       << " valid scores for student "<< k <<" with the average score of "
       << average<<"."<< endl;}

else         {
            cout<<"Invalid entry. Please only enter scores of 0-100.";
            cin>>score;
        }

cout<<"\n Do you have another score to add for student "<<k<<"? Type 'y' for yes or any other key(s) to end the session for this student. \n\n";
cin >> yes_no;

if ((yes_no != 'y') && (k<=numberofstudents))
    {
    k++;
    cout<<"\n Do you have a score to enter for student "<<k<<"? Please type y for yes or any other key to end the session for this student.";
    cin>>yes_no;}

while (yes_no == 'y')
   {cout<< "\n\n Enter a score, 0-100: \n\n";
    cin >> score;

    if (((score < 0) || (score > 100))||cin.fail())
        {   cin.clear();
            cin.sync();
            cout<<"Invalid entry. Please only enter scores of 0-100.";
            cout << endl;
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
    cout<< "\n\n Do you have another score to add for student "<<k<<"? Type 'y' for yes and any other key(s) to end the session for student "<<k<<". \n\n";
    cin >> yes_no;}}


{cout <<"\n\n You've now entered scores and found averages for "<< k
       << " students. " << endl;}}}}

cout<<"\n\n Thanks for using Max's Lab 7."<<endl;

       return 0;}
// end main
//lab7
