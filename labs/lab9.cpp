// Lab 9, Programming Challenge
#include <iostream>

using namespace std;
// Write the prototypes for the getLength,
// getWidth, getArea, and displayData
// functions here.
int getLength(){ int length;
cout <<"Enter Length in units:"<<endl;
cin>>length;
return length;}

int getWidth(){ int width;
cout <<"Enter Width in units:"<<endl;
cin>> width;
return width;}

//this ends up being obsolete
int getArea () {int length {getLength()}, width {getWidth()}; int area = ((width)*(length));
cout<<"The area of the rectangle is "<< area <<" units, squared.";
return area;
}

//int displayData(){int length, width, area;
//cout<<"Length: ""<<}
int displayData () {int length =getLength(); int width = getWidth(); int area = (width*length);
cout<<"The length is "<<length<<" units."<<endl;
cout<<"The width is "<<width<<" units."<<endl;
cout<<"The resulting area is "<<area<<" units, squared.";}



int main()
{
   int length ,    // The rectangle's length
        width ,     // The rectangle's width
        area ;      // The rectangle's area

displayData();

   return 0;
}
//***************************************************
// You must write the getLength, getWidth, getArea, *
// and displayData functions.                       *
