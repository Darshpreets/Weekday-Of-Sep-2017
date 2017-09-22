/* Program to find the day of the given date - DAY.cpp */
#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

int input (); //Function For input

int main()
{

int tdate, s=0; // variables for input date 
char week[7][10] ;
strcpy(week[3], "Sunday") ;
strcpy(week[4], "Monday") ;
strcpy(week[5], "Tuesday") ;
strcpy(week[6], "Wednesday") ;
strcpy(week[7], "Thursday") ;
strcpy(week[1], "Friday") ;
strcpy(week[2], "Saturday") ;

tdate = input(); // calling functon for date
if (tdate> 30)// checking against valid input
	        {
	        cout <<"\n Enter valid input, Date must be less than 30 \n" ;
	        tdate = input();
	        }
	       
	    else if (tdate<0) // checking against valid input
	        {
	        cout <<"\n Enter valid input  Date must be greater than 1 " ;
	      
	        tdate = input();
	        }
	         
	        
	       tdate= tdate % 7; //taking modulus to reduce checking of all cases as all days are multiple of 7

switch(tdate) // to check against the number of days using switch
{
    case 1 : s=1; // prints "Friday"
             break;       // and exits the switch
    case 2 : s=2; // prints Satuarday
             break;
    case 3 : s=3; //prints sunday
             break; 
    case 4 : s=4;// prints monday
             break;
    case 5 : s=5;
             break;
    case 6 : s=6;
             break;
    case 0 : s=7;      
             break;  
}


cout<<"\n Weekday on this date is: "  <<week[s]<<endl ;


return 0;
} 

int input () // defination of input
{
	int c;
cout<<"\n Enter the date of the month September.  " ;
cin>>c;
if(!cin.good()) // checking against valide integar input
	        {

	            cout<<"ERROR, THAT WAS NOT NUMBERIC"<<endl;

	            cin.clear();

	         cin.ignore(numeric_limits<streamsize>::max(), '\n' );

	        }
	        return c;
}
