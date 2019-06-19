#include<bits/stdc++.h>
using namespace std;
int main()
{
	double sf,v;
	string n;
	
	cin >> n;
	cin >> sf >> v;
	cout << fixed << setprecision (2);
	cout << "TOTAL = R$ " << (sf+(v*0.15));
	return 0;
}
