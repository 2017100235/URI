#include<bits/stdc++.h>
using namespace std;
float delta (float a, float b, float c);
float r1 (float a, float b, float d);
float r2 (float a, float b, float d);
int main (){
	double A,B,C,D,R1,R2;
	cin >> A >> B >> C;
	D = delta(A,B,C); 
	R1=r1(A,B,D); 
	R2=r2(A,B,D);	
	
	if (D<0)
		cout <<"Impossivel calcular \n"; 	
	else
	{
	if((R1 && R2)==0) 
		cout <<"Impossivel calcular \n";
	else
		{
		cout << fixed << setprecision (5);
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
		}
	}
	return 0;
}
float delta (float a, float b, float c)
{	
	return (pow(b,2) - (4*a*c));
}
float r1 (float a, float b, float d)
{
	return ((-b+sqrt(d))/(2*a));
}
float r2 (float a, float b, float d)
{
	return ((-b-sqrt(d))/(2*a));
}
