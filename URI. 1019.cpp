#include <bits/stdc++.h>
using namespace std;
int main ()
{ int N,h,m,s;

cin >> N ;
h = (N/3600);
m = ((N-(h*3600))/60);
s = (N - (h*3600) - (((N-(h*3600))/60)*60) );
cout << h << ":"<< m << ":" << s << endl;
return 0;
}
