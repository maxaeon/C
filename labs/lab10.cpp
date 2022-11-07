//
// Lab 10    Name Max Parks
//
#include <iostream>
#include <iomanip>
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
int main()
{   const int size = 6;
    int x[size] = {2, 4, 6, 8, 10, 12}, y[size] = {1,3,5,7,9};

// print the contents of x and y in two vertical columns before calling the swap_x_y function
       for ( int i = 0 ; i < size ; i++)
         cout<< "Item in X array: "<<x[i]<<endl;
       for ( int i = 0 ; i < size ; i++)
         cout<< "Item in Y array: "<<y[i]<<endl;

    // call the function swap_x_y
swap (x[5],y[4]);
cout<<"\nElements in X array and Y array have been swapped!\n"<<endl;

       for ( int i = 0 ; i < size ; i++)
         cout<< "Item in X array: "<<x[i]<<endl;
       for ( int i = 0 ; i < size ; i++)
         cout<< "Item in Y array: "<<y[i]<<endl;
    // print the contents of x and y in two vertical columns after calling the swap_x_y function
    cout<< "\n\n End of lab 10 \n";
    return 0;
}
