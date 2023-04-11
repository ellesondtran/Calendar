//Elleson Tran
//Roberts
//Calendar Program
//Calculator to print out the calendar for each year

#include <iostream>

using namespace std;

int main() {
  
int year;
cout<<"What Year?:";
cin>>year;

int start;
cout<<"On what day does January 1st fall? 0 = Sunday:";
cin>>start;

int startLine = start; //only for january

const char *month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; //a list of all the months to print later



for (int m = 0; m <= 11; ++m){ //repeats till all the months are printed
  int days;
  cout<<endl<<endl<<month[m]<<endl;//pritns the month in the list i made before
  cout<<"---------------------";
  cout<<endl;
  

  if(m == 1){//if the month is february
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){//checks if the year is a leap year, if so then february has 29 days
      days =29;
    } 
    else
      days = 28;//if the year is not a leap year, then the february has 28 days
  }
  if (m == 3 || m == 5 || m ==  8 || m ==  10){//all the months that have 30 days
    days = 30;
  }
  if (m == 0 || m ==  2 || m ==  4 || m ==  6 || m ==  7 || m ==  9 || m ==  11){//all the months that have 31 days
    days = 31;
  }


  cout<<"Su Mo Tu We Th Fr Sa";
  cout<<endl;


  for (int x = 0; x < start; ++x){ //loop for space before dates
      cout<<"   ";
  }


  for (int x = 1; x <= days; ++x){//prints till the days are done for that month
    if (x < 10){//for days 1-9, i added two space at the end to make everything line up
      cout<<x<<"  ";
    }
    if (x >= 10){//the rest of the days, i added a space after each day
      cout<<x<<" ";
    }
    if (m == 0){
      if ((x + startLine) % 7 == 0){ //since its the first month, it uses the original start line to space out
        cout<<endl;
      }
    }
    if (m == 1 || m ==  2 || m ==  3|| m ==  4 || m ==  5 || m ==  6 || m ==  7 || m ==  8  || m ==  9 || m ==  10 || m ==  11){
      if ((x + start) % 7 == 0){//calculates the start from january
        cout<<endl;
      }
    }
  }


  start = (start + days) % 7; //calculates the new start for the next month
}
}
