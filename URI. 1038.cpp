#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int c,q;
	
	cin >> c >> q;
	
	switch (c)
	{	
		case 1 : 
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << q*4.00 << endl; break;
		case 2 :
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << q*4.5 << endl; break;
		case 3 :
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << q*5.00 << endl; break;
		case 4 : 
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << q*2.00 << endl; break;
		case 5 : 
		cout << fixed << setprecision (2);
		cout << "Total: R$ " << q*1.5 << endl;	break;
	}
	return 0;
}
