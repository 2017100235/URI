#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int i=0,cont=0,m=0;

	for (;;)
	{
		cin>> i;
		if (i<0)
		break;
		else
		{
		m +=i;
		cont +=1;
		}
	}
	cout <<fixed <<setprecision(2);
	cout << (float) m/cont;
	cout<< endl;
	return 0;
}
