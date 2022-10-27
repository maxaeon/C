#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

void nameFunction() {
    cout<<"Max Aeon Parks"<<endl;
    cout<<"Assignment 4-B"<<endl;
    cout<<"CSC 175 W2 FQ 2022"<<endl;
    cout<<"Due Oct. 24 2022"<<endl;
    cout << "\nWelcome to Max's Rocket Performance Predictor\n" << endl;
    cout<< "This is a program designed to predict the performance of a\n test rocket intended to provide 'soft' landings at two-second \nintervals at a distance of greater than 60 feet, and\n .05 second intervals at lower distances, stopping at\n 100 seconds or at simulated impact.\n\n"<<endl;
}

//equations
double acc1Function()
{ double tme1=0.0;
//acceleration of simulated rocket in feet/second squared
double acc1 = ((4.25-(.15*(tme1*tme1)))+((6.07*(pow(tme1,2.751)))/9995));
return acc1;}

double vel1Function()
{ double tme1=0.0;
//velocity of simulated rocket in feet/second
double vel1 = (((4.25*tme1)-((.15*(pow(tme1,3)))/3))+((6.07*(pow(tme1,3.751)))/(3.751*9995)));
return vel1;}

double dst1Function()
{ double tme1=0.0;
//distance of simulated rocket in feet, starting at 90 ft
double dst1 = (((90+((4.25*(tme1*tme1))/2))-((.15*(pow(tme1,4)))/12))+((6.07*(pow(tme1,4.751))/(4.751*37491))));
return dst1;
}

double incrementFunction(){
double tme1=0.0;
tme1++;
}

void printFunction (){
    double tme1 = 0.00;
    double acc1 = 0.00;
    double vel1= 0.00;
    double dst1 = 0.00;
//print time
cout<<"TIME"<<endl;
cout << "After "<<setprecision(2)<<fixed<<tme1<<" seconds:"<<endl;
//print acceleration
cout<<"ACCELERATION"<<endl;
cout << "The acceleration is " <<acc1<< " feet per second, squared."<<endl;
//print velocity
cout<<"VELOCITY"<<endl;
cout << "The velocity is " <<vel1<< " feet per second."<<endl;
//print distance
cout<<"DISTANCE"<<endl;
cout << "The distance is " << dst1 << " feet. \n\n"<< endl;
}



void footerFunction(){
cout << "Thanks for using Max's C++ Rocket Performance Predictor." << endl;
}
 int main ()
 {
     /*Variable Dictionary
     tme1: time of fall in seconds
     dst1: height of simulated rocket above ground level at time tme1, dropped from 90 feet
     acc1: acceleration of simulated rocket in feet/seconds squared
     vel1: velocity of simulated rocket in feet/second
     increment: a variable to list the increase at 0.05 for the appropriate distance
     */
    double tme1 = 0.00;
    double acc1 = 0.00;
    double vel1= 0.00;
    double dst1 = 0.00;
    double increment = 0.0;

cout<<setiosflags(ios::fixed|ios::showpoint);

//calculates values for variables when the time is in the appropriate range
nameFunction();
/*

while (dst1>=60)
for (tme1=0; tme1<=100; tme1++){
{
//ensuring program stops running when the simulated rocket hits the ground
vel1Function();
acc1Function();
dst1Function();
incrementFunction();
printFunction();
}

while ((dst1>=0)&(dst1 <60))
for (tme1=0, increment=0.05; tme1<=100; tme1+=increment){
//ensuring program stops running when the simulated rocket hits the ground
vel1Function();
acc1Function();
dst1Function();
printFunction();
}*/

//backup
for (tme1=0; tme1<=100; tme1++){

//equations, given in assignment, but I'm not sure if I did them correctly

//acceleration of simulated rocket in feet/second squared
acc1 = ((4.25-(.15*(tme1*tme1)))+((6.07*(pow(tme1,2.751)))/9995));

//velocity of simulated rocket in feet/second
vel1 = (((4.25*tme1)-((.15*(pow(tme1,3)))/3))+((6.07*(pow(tme1,3.751)))/(3.751*9995)));

//distance of simulated rocket in feet, starting at 90 ft
dst1 = (((90+((4.25*(tme1*tme1))/2))-((.15*(pow(tme1,4)))/12))+((6.07*(pow(tme1,4.751))/(4.751*37491))));

//ensuring program stops running when the simulated rocket hits the ground

if ((dst1 >=0)&(dst1 >60)){

//print time
cout<<"TIME"<<endl;
cout << "After "<<setprecision(2)<<fixed<<tme1<<" seconds:"<<endl;
//print acceleration
cout<<"ACCELERATION"<<endl;
cout << "The acceleration is " <<acc1<< " feet per second, squared."<<endl;
//print velocity
cout<<"VELOCITY"<<endl;
cout << "The velocity is " <<vel1<< " feet per second."<<endl;
//print distance
cout<<"DISTANCE"<<endl;
cout << "The distance is " << dst1 << " feet. \n\n"<< endl;

//add another 'tme1++' to ensure interval is at 2 seconds
tme1++;

}}

for (tme1=0, increment=0.05; tme1<=100; tme1+=increment){

//equations, given in assignment, but I'm not sure if I did them correctly

//acceleration of simulated rocket in feet/second squared
acc1 = ((4.25-(.15*(tme1*tme1)))+((6.07*(pow(tme1,2.751)))/9995));

//velocity of simulated rocket in feet/second
vel1 = (((4.25*tme1)-((.15*(pow(tme1,3)))/3))+((6.07*(pow(tme1,3.751)))/(3.751*9995)));

//distance of simulated rocket in feet, starting at 90 ft

dst1 = (((90+((4.25*(tme1*tme1))/2))-((.15*(pow(tme1,4)))/12))+((6.07*(pow(tme1,4.751))/(4.751*37491))));

//ensuring program stops running when the simulated rocket hits the ground

if ((dst1>=0)&(dst1 <60)){

//print time
cout<<"TIME"<<endl;
cout << "After "<<setprecision(2)<<fixed<<tme1<<" seconds:"<<endl;
//print acceleration
cout<<"ACCELERATION"<<endl;
cout << "The acceleration is " <<acc1<< " feet per second, squared."<<endl;
//print velocity
cout<<"VELOCITY"<<endl;
cout << "The velocity is " <<vel1<< " feet per second."<<endl;
//print distance
cout<<"DISTANCE"<<endl;
cout << "The distance is " << dst1 << " feet. \n\n"<< endl;

}}

footerFunction();

//Assignment 4
    return 0;

}
