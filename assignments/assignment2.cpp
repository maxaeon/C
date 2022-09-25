#include <cstdio>
#include <iostream>
//Assignment2.cpp
//
// Max Aeon Parks
// CSC 175-W2 Assignment 2 Due Sept. 21, 2022
//
using namespace std;
int main()
{ // variable dictionary
    //width1 is the width of the yard, in meters
    //length1 is the length of the yard, in meters
    //area1 is the area of the yard and everything in it in square meters
    //width2 is the width of the house in meters
    //length2 is the length of the house, in meters
    //area 2 is the area of the house in square meters
    //area3 is the area of the yard minus the area of the house (area1 - area2) in square meters
    //time1 is the time in seconds it takes to mow area3 at a rate of 2 square meters per second
    //hours indicates the number of hours it will take to mow
    //minutes indicates the number of minutes it will take to mow, in addition to the hours (and remaining seconds) indicated

int area1 = 0, area2 = 0, width1 = 0, width2 = 0, length1 = 0, length2 = 0, area3 = 0, time1 = 0;

  // enter information
    cout<<"\n This is a program to calculate the approximate amount of time it will take to mow a yard at a rate of 2 square meters per second." << endl;
    cout<<"\n enter the width of the yard in meters  : "; cin>> width1;
    cout<<"\n enter the length of the yard in meters  : "; cin>> length1;
    cout<<"\n enter the width of the house in meters  : "; cin>> width2;
    cout<<"\n enter the length of the house in meters  : "; cin>> length2;

  // calculate area to be mowed
  area1 = width1 * length1;
  area2 = width2 * length2;
  area3 = area1 - area2;
  time1 = area3 / 2;

  // display the data
    cout<<"\n The yard is "<<width1<<" meters wide and "<<length1<<" meters long. The total area of the yard is "<<area1<< " square meters."<< endl;
    cout<<"\n The house is "<<width2<<" meters wide and "<<length2<<" meters long. The total area of the house is "<<area2<< " square meters."<<endl;
    cout<<"\n The total area to be mowed is "<<area3<< " square meters. This is the area of the yard ("<<area1<<") minus the area of the house ("<<area2<<")."<<endl;
    cout<<"\n At a rate of 2 square meters per second, it will take " <<time1 <<" seconds to mow "<<area3<<" square meters." << endl;

    //calculate the time in hours and minutes
    int hours, minutes;
    minutes = time1 / 60;
    hours = minutes / 60;

    //display the time in hours and minutes
    cout << time1 << " seconds is equivalent to " << int(hours) << " hours, " << int(minutes%60)
     << " minutes, and " << int(time1%60) << " seconds.";

     //closing comments
  cout<<"\n\n Thank you for using this program."<<endl;
    cout << "\n\n Max's Assignment 2 \n\n" << endl;
    return 0;




}
