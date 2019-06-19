#include <bits/stdc++.h>
using namespace std;
int main ()
{   int x,y,z,maiorAB;
cin >> x >> y >> z;
maiorAB = (x+y+abs(x-y))/2;
if(maiorAB>z)
    cout << maiorAB << " eh o maior" << endl;
else 
    cout << z << " eh o maior" << endl;
    return 0;
}
