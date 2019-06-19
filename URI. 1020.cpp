#include <bits/stdc++.h>
using namespace std;
int main ()
{ int N,a,m,d;

cin >> N ;
a = (N/365);
m = ((N-(a*365))/30);
d = (N - (a*365) - (((N-(a*365))/30)*30) );
cout << a << " ano(s)" << endl; 
cout << m << " mes(es)"<< endl;
cout << d <<" dia(s)"<< endl;
return 0;
}
