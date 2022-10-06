//Max Aeon Parks
//CSC 175 W2 Fall 2022 Lab 6

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{ int  numberofstudents = 0;
//int number = 0;
     char yes_no;

cout<<"\n This is a program developed by Max for Lab 6 to calculate the average score for an unknown number of equally weighted assignments for a class of students." <<endl;

cout<<"\n\n How many students are in the class? Please enter a number 1-30. \n\n";
cin >>numberofstudents;

/*
cout<<"\n\n Do you have scores to enter for your students? Please type 'y' for yes or 'n' for no. "<<endl;
cin>>yes_no;

if (yes_no == 'y')

{for (int k = 1; k <= numberofstudents; k++)
{int n = 0, score= 0, total = 0, average = 0;

cout <<"\n Do you have a score to enter for student "<<k<<"?"<<endl;
cin>>yes_no;

if (yes_no == 'y'){

cout <<"\n\n Enter a score 0-100: \n\n";
cin >> score;

if ((0 <= score) & (score <= 100))
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
            cout << endl;
        }

cout<<"\n Do you have another score to add for student "<<k<<"? Type 'y' for yes or any other key(s) to end the session for student "<<k<<". \n\n";
cin >> yes_no;

while (yes_no == 'y')
   {cout<< "\n\n Enter a score, 0-100: \n\n";
    cin >> score;

    if
        ((score < 0) || (score > 100))
        {
            cout<<"Invalid entry. Please only enter scores of 0-100.";
            cout << endl;
            cout<< "\n Do you have another score to add for student "<<k<<"? Type 'y' for yes or any other key(s) to end. \n";
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

if (yes_no == 'n')*/

//{k++;}

//if ((yes_no == 'n') && (k<=numberofstudents))

for (int k = 1; k <= numberofstudents; k++)
{

cout <<"\n Do you have a score to enter for student "<<k<<"?"<<endl;
cin>>yes_no;

if (yes_no == 'y'){
int n=0, score=0, total=0, average=0;
cout <<"\n\n Enter a score 0-100: \n\n";
cin >> score;

if ((0 <= score) & (score <= 100))
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
            cout << endl;
        }

cout<<"\n Do you have another score to add for student "<<k<<"? Type 'y' for yes or any other key(s) to end. \n\n";
cin >> yes_no;

while (yes_no == 'y')
   {cout<< "\n\n Enter a score, 0-100: \n\n";
    cin >> score;

    if ((score < 0) || (score > 100))
        {
            cout<<"Invalid entry. Please only enter scores of 0-100.";
            cout << endl;
            cout<< "\n\n Do you have another score to add for student "<<k<<"? Type 'y' for yes or any other key(s) to end. \n\n";
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
    cin >> yes_no;}



{cout <<"\n\n Thank you for using Max's Lab 6 program. You entered scores and found averages for "<< k
       << " students. " << endl;}}}}
       return 0;}
// end main
//lab6
