//
// Lab 12    Name Max Parks
//
#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
// complete the function that will receive two arrays X and Y
// the function must swap the values in X and Y
// move the value in X to Y and Y to X
void swap (int &x, int &y)
{
    int hold = x;
    x = y;
    y = hold;
}

int averageXfunction (int x[6])
{   int z = 0;
    return z = ((( x[0] +  x[1])+ (( x[2]+  x[3])+ ( x[4] +  x[5])))/(6));
}


int averageYfunction (int y[6])
{ int w = 0;
return w=(( y[0] +  y[1]+  y[2]+  y[3]+  y[4] +  y[5])/ (6));
}

int main()
{   const int size = 6;
    int x[size] = {2, 4, 6, 8, 10, 12}, y[size] = {1,3,5,7,9};
    int w = averageYfunction(y);
    int z = averageXfunction(x);



// print the contents of x and y in two vertical columns before calling the swap_x_y function
       for ( int i = 0 ; i < size ; i++)
         cout<< "Items in X array: "<<x[i]<<endl;
         cout<< "Rounded average of items in X array: "<<z<<endl;
       for ( int i = 0 ; i < size ; i++)
         cout<< "Items in Y array: "<<y[i]<<endl;
         cout<< "Rounded average of items in Y array: "<<w<<endl;

    // call the function swap_x_y
swap (x[5],y[4]);
cout<<"\nElements in X array and Y array have been swapped!\n"<<endl;

       for ( int i = 0 ; i < size ; i++)
         cout<< "Items in X array: "<<x[i]<<endl;
         cout<< "Rounded average of items in new X array: "<<z<<endl;
       for ( int i = 0 ; i < size ; i++)
         cout<< "Items in Y array: "<<y[i]<<endl;
         cout<< "Rounded average of items in new Y array: "<<w<<endl;

    sort (x, x+6);
    sort (y, y+6);

       for ( int i = 0 ; i < size ; i++)
         cout<< "Items in X array: "<<x[i]<<endl;
         cout<< "Rounded average of items in new X array: "<<z<<endl;
       for ( int i = 0 ; i < size ; i++)
         cout<< "Items in Y array: "<<y[i]<<endl;
         cout<< "Rounded average of items in new Y array: "<<w<<endl;
    // print the contents of x and y in two vertical columns after calling the swap_x_y function
    cout<< "\n\n End of lab 12 \n";
    return 0;
}
