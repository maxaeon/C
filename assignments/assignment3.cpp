/*Max Parks
CSC W2 Fall 2022
Assignment 3
Due Oct 3 2022*/
#include <iostream>
using namespace std;
int main()
{ // variable list
    double gpa = 0.0;
    char year = 'X', lastyear = 'n';
    int points = 0;
   // heading
  cout<<" Season Ticket Cost Calculator \nEnter the following information:"<<endl;
  // input data
  cout<<"\n Freshman (F), Sophomore (O) "
      <<"Junior (J), Senior (S) ";
  cin>> year;
  cout<<"\n Had tickets last year Yes(Y) or No (N) ";
  cin>> lastyear;
  cout<<"\n Enter your GPA as a value from 0 - 4 ";
  cin >> gpa;
// test data input
   cout<<"\n year: "<< year<<"\n tickets last year? "<< lastyear<< "\n GPA: "<<gpa<<endl;
// if statements
if (gpa <= 2.0)
    if ( year == ('s' || 'S'))
        points = 135;
        else
        //if (year == ((('o'||'O')||('f'||'F'))||('j'||'J')))
        points = 90;
if( gpa > 2.0)
   if ((toupper(lastyear) == 'N') && (gpa <= 3.0))
     {
      if ( year == ('f'|| 'F'))
           points = 95;
      else
           if (year == ('o' ||'O'))
              points = 115;
           else
        //if (year == (('j'||'J')||('s'||'S')))
              points  = 130;
      }
   else
        if((toupper (lastyear) == 'Y') && (gpa <= 3.0))
      {
          if (year == ('f' || 'F'))
            points = 110;
          else
            if (year == ('o'||'O'))
            points = 130;
          else
            //if (year == (('j'||'J')||('s'||'S')))
            points = 150;
      }
    else
             if((toupper (lastyear) == 'N') && (gpa >= 3.0))
      {
          if (year == ('f' || 'F'))
            points = 120;
          else if (year == ('s'||'S'))
            points = 175;
          else
            //if (year == (('j'||'J')||('o'||'O')))
            points = 160;
      }
    else
            if((toupper (lastyear)) == 'Y' && (gpa >= 3.0))
      {
          if (year == ('f' || 'F'))
            points = 135;
          else if (year == ('s'||'S'))
            points = 195;
          else
            //if (year == (('j'||'J')||('o'||'O')))
            points = 170;
      }
 cout<<"\n your available points = "<< points<<"\n\nAssignment 3 by Max"<<endl;
      return 0;
 }


