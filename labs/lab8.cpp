//Max Aeon Parks
//Lab 8 CSC 175 W2 FQ 2022

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void ReadData(ifstream &f1, ofstream &f2, string firstname,int score);

void graphfun (double average,ofstream &f2);

double averagefun(int total, int counter)

   {
       return total/counter;
   }

int main( )
{

string firstName,lastName;
int score = 0, total = 0 , counter = 0;
double average = 0.0;
   ifstream f1 ("studentscores.txt", ios::in);
   ofstream f2 ("scoresout.txt",ios::out);
    ReadData(f1,f2,firstName,score);
  f1.close();
  f2.close();
   return 0;
}
void ReadData(ifstream &f1, ofstream& f2, string firstName,int score)
{
    int total = 0, counter = 0;
    double average = 0.0;
    while ( f1>>firstName>>score, !f1.eof() )
  {
      cout<< "Name: "<<firstName<<" "<< endl;
      cout<< "Score: "<<score<< endl;
      f2<< "Name: "<<firstName<<" "<< endl;
      f2<< "Score: "<<score<< endl;
      counter++;
      total = total+score;
  }
   average = averagefun(total, counter);
   cout << "\n number of students  = "<<counter<< endl;
   cout << "\n total of the scores = "<<total<< endl;
   cout << "\n the average score   = "<<average<< endl;
   f2 << "\n number of students  = "<<counter<< endl;
   f2 << "\n total of the scores = "<<total<< endl;
   f2 << "\n the average score   = "<<average<< endl;
   // call graph f(x)
   graphfun(average, f2);
}
void graphfun (double average,ofstream &f2)
{
    cout<<" \n\n graph the average \n";
    cout <<" average = "<< average<< "   ";
     for (int i = 1 ; i <= int(average); i++)
        cout<<'*';
     f2<<" \n\n graph the average \n";
    f2 <<" average = "<< average<< "   ";
     for (int i = 1 ; i <= int(average); i++)
        f2<<'*';

cout<<"\n\n Thank you for using Max's Lab 8 program. Code modified from material used in CSC 175."<<endl;

}

//lab8
