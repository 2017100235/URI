#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,ht;
	float s,vh;
	
	cin>> n >> ht >> vh ;
	s = (vh*ht);
	cout << "NUMBER = " << n << '\n';
	cout << fixed << setprecision (2);
	cout << "SALARY = U$ " << s; 
	cout << endl;
	
	return 0;
}
