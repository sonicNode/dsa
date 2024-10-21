#include<iostream>
//#include<string>
using namespace std;
string back_count(int day, int count)
{
      int temp=count%7;
      int output=day-temp;
      int cond;
      if(output < 0)
            cond= output+7;

      else
            cond= output;
            string days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
            return days[cond];
     /*  switch(cond)
       {
            case 0:
              return "Sunday";
              break;
            case 1:
              return "Monday";
              break;
            case 2:
              return "Tuesday";
              break;
            case 3:
              return "Wednesday";
              break;
            case 4:
              return "Thursday";
              break;
            case 5:
              return "Friday";
              break;
            case 6:
              return "Saturday";
              break;
            default:
              return "Unexpected error sorry: ";

       }*/
}
int main()
{
    int day,count;
    cout<<"Whats the current day of the week: \n";
    string days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    for(int i=0; i<7; i++)
      {
            cout<<"Enter "<< i << " for "<< days[i] <<"\n";
      }
    cin>>day;
    if (day>6)
     cout<<"please enter a number between 0 to 6: ";
    else
    {
      cout<<"How many days you want to rewind: ";
      cin>>count;
      cout<<count<<" days before "<<days[day]<<" is "<<back_count(day,count);
    }
    return 0;
}