// mobile bill  
//runs fine in gcc 4.8.5

#include <iostream>
#include <ctype.h>
 int op(int ac, char cod);
using namespace std;

int main ()
{
	int Acc, totmin ;
	char sercode;

	cout<<"\n Enter your account Number: ";
	cin>>Acc;
	cout<<"\n Enter service code: ";
	cin>>sercode;

	sercode = tolower(sercode);
	
	if (! (sercode == 'p') || (sercode == 'r'))
	{
		cout<<"\n Invalid code enter P or R: ";
		return 0;
	}


 op (Acc,sercode);

}

 int op (int ac, char co)
{
	int regminutes, daymin, n8min, pcahrge=0, regcharge=0;
	char reg[] = "Regular Service", per[] = "Premium Service";


if (co == 'p')
{
	cout<<"Enter minutes from 6Am to 6 Pm: ";
	cin>>daymin;
	cout<<"\n Enter minutes from 6Pm to 6Am: ";
	cin>>n8min;

	
	if (daymin > 75)
	{
		daymin = daymin-75;
		pcahrge = daymin * 0.10;

	}

if (n8min >100)
{
	n8min = n8min-100;
	pcahrge = pcahrge + (n8min * 0.05); 
}

cout<<" \n Account number:  "<<ac;
cout<<endl<<per;
cout<<"\n Total cost: "<<pcahrge<<endl;

}
else if (co == 'r')
{
	cout<<"\n Enter minutes: ";
	cin>>regminutes;
	if (regminutes > 50)
	{
		regminutes = regminutes-50;
		regcharge = regminutes * 0.20;
	}
cout<<" \n Account number:  "<<ac;
cout<<endl<<reg;
cout<<"\n Total cost: "<<regcharge<<endl;
}

return 0;
}
