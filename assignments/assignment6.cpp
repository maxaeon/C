/*Max Aeon's Assignment 6
CSC 175 W2 FQ2022
Due 11/9/2022
*/

#include <iostream>
#include <fstream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;
// function
void readdata(ifstream &fx, int xy[], int &ct);
void productfun(int x[],int y[], int z[], int ct)
{
    cout<<"\n "<< &x[0]<< "  "<< &y[0]<< "  "<< &z[0]<< "\n";
    for ( int i = 0; i < ct; i ++)
    {
        z[i] = x[i] * y[i];
        cout<<"\n "<< x[i]<<"\t"<< y[i]<<"\t"<< z[i];
    }
}

int main()
/*
int size is the number of items we are concerned with in the arrays
x, y, and z are arrays. the items in x and y are determined by txt files,
whereas z is determined by multiplying pairs from x and y
ctx and cty are variables to help find/print/manipulate data in files
i is a counter, sum will be used in the calculations required
*/
{  const int size = 20;
    int x[size] = {0}, y[30] = {0}, z[30]= {0};
  int ctx = 0, cty = 0;
  int i, sum=0;
  //x array and y array files
  ifstream f1 ("datax.txt", ios::in);
  ifstream f2 ("datay.txt", ios::in);
  //print x array
   cout<<"\n X array \n";
    cout<<"\n address of x[0] "<< &x[0]<<"   ";
    readdata(f1,x,ctx);
  //print y array
  cout<<"\n\n Y array \n";
    cout<<"\n address of y[0] "<< &y[0]<<"   ";
    readdata(f2,y,cty);
   // call product function
   cout<<"\n\n";
   //print columns with x,y,z data
   productfun(x,y,z,ctx);
      for(i=0; i<size; i++)
   //sum function for array z
         sum = sum+z[i];
    //print sum of array z items
   cout<<"\nSum of the products of pairs from arrays x and y = "<<sum;
   //calculate and print square root of sum of array z items
   cout<<"\nThe square root of "<<sum<<" is "<<sqrt(sum)<<"."<<endl;
   //calculate and print the average of the values in array z; i or size would work for the denominator here
   cout<<"\nThe average of the products (of pairs from arrays x and y) is "<<sum/size<<"."<<endl;
   //calculate the smallest item in the array
std::sort(x, x+size);
int w=x[0];
std::sort(y, y+size);
int v=y[0];
   cout<<"\nThe smallest item in array x is "<<w<<" and the smallest item in array y is "<<v<<endl;
  f1.close();
  f2.close();
    cout << "\n\n Assignment 6 by Max" << endl;
    return 0;
}
void readdata(ifstream &fx, int xy[], int &ct)
{  cout<<"\n dataxy \n";
    cout<<"\n address of xy[0] "<< &xy[0]<<"   ";
    while(fx>>xy[ct], !fx.eof())
  {
      cout<<"\n "<< xy[ct];
      ct++;
  }
  }
