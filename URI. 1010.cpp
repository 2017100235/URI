#include<bits/stdc++.h>
using namespace std;
int main()

{
	int c1,n1,c2,n2;
	float v1,v2;
	
	cin >> c1 >> n1 >> v1;
	cin >> c2 >> n2 >> v2; 
	cout << fixed << setprecision (2);
	cout << "VALOR A PAGAR: R$ "<< ((n1*v1)+(n2*v2));
	cout << endl;
	
	return 0;
}
