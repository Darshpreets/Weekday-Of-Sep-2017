// Code written in c++ works fine in gcc 4.8.5
// Run using 
// g++ smallest.cpp
// ./a.out


#include <iostream>

 using namespace std;

int rec(int arr[],int n) // function defination of recursion 

{

                int min;

                if(n==1)

                return arr[0];

                else

                {

                                min=rec(arr,n-1);

                                if(min<arr[n-1])

                                {

                                return min;

                                }

                                else

                                return arr[n-1];

                }

}

 

 

 

int main()

{

                int n;

                cout<<"Enter the number of elements you want to enter :";

                cin>>n;

                if (cin.fail()) // check against valid input of integar
                {
 cout<<"\n You have entered wrong input !!";
 cout<<" Enter valid integar: Terminating program";
 return 0;   //Not an int.

}
                if (n==0)
                {
                	cout<<"\n You have Entered the null string :";
                	cout<<"  \n Exiting Program \n";
               return 0;
                }
                int arr[n];

                cout<<"enter values : ";

                for(int i=0;i<n;i++)

                {

                                cin>>arr[i];
                                if (cin.fail()) // check against valid input of integar
                                 {
 cout<<"\n You have entered wrong input !!";
 cout<<" Enter valid integar: Terminating program";
 return 0;   //Not an int.
}

                }

                cout<<"\n The Smallest Element in List of ";
                cout<<n<<" entered numbers is "<<rec(arr,n)<<endl;
return 0;
}
 
 