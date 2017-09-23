//maximum minimun

#include <iostream>
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

using namespace std;


int main ()
{
 int first, second, third;
 int lo, hi;
 cout<<"\n Enter 3 Numbers: ";
 cin>>first;
 cin>>second;
 cin>>third;
lo = min(min(first, second), third);
hi = max(max(first, second), third);
int mid =(first+second+third)-(lo+hi);
cout<<"\n Numbers in ascceding order: "<<lo<<"\t "<<mid<<"\t "<<hi;;
cout<<"\n Numbers in descending order: "<<hi<<"\t "<<mid<<"\t "<<lo;
cout<<"\n Sum of Min and Max: "<<hi+lo<<endl;

return 0;
}

