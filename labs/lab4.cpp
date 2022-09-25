
#include <iostream>
//Lab 4.cpp
//
// Max Aeon Parks
// CSC 175-W2 Lab 4
//
using namespace std;
int main()
{ // variable dictionary
    double score1 = 0, score2 = 0, score3 = 0, average = 0, total_scores = 0;
  // enter student's scores
    cout<<"\n This is a program to calculate an average score of three assignments. Enter the student's scores here:" << endl;
    cout<<"\n enter score one   : "; cin>> score1;
    cout<<"\n enter score two   : "; cin>> score2;
    cout<<"\n enter score three : "; cin>> score3;
  // total student' scores
  total_scores = score1 + score2 + score3;
  // print the student's scores
    cout<<"\n score 1 = "<<score1<< " score 2 = "<< score2<<" score 3 = "<<score3<< endl;
    // if printing the total of the 3 assignments was required: " total = "<<total_scores<< endl;
  // calculate average the average of the three scores
  average = total_scores / 3;
  cout<< "\n average = " <<average<< endl;
  //
  // using a nested if statement determine the student's letter grade based on the average score
  // average >= 90 = A, >= 80 and < 90 = B, >= 70 and < 80 = C, >= 60 and 70 = D,  < 60 = E
 cout << "\n The corresponding letter grade based on the average is " << ends;
 if (average >= 90) cout << "A."<< endl;
    else if (average >= 80) cout<< "B."<< endl;
        else if (average >= 70) cout << "C. "<<endl;
            else if (average >= 60) cout << "D."<< endl;
                else if (average <60) cout <<"E."<<endl;
  // Print the Average and the Letter Grade
  cout<<"\n\n Thank you for using this program."<<endl;
    cout << "\n\n Max's lab 4 \n\n" << endl;
    return 0;




}
