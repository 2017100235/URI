#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int N, i,n1;
  cin >> N;
  for (i=1; i<=N; i++)
    {
    cin >> n1;
    if (n1 == 0)
	cout << "NULL" << endl;
        else if ((n1%2) == 0)
			{
			  if (n1 > 0)
			    cout << "EVEN POSITIVE" << endl;
			  else
			    cout << "EVEN NEGATIVE" << endl;
			}
        else
			{
			  if (n1 > 0)
			    cout << "ODD POSITIVE" << endl;
			  else
			    cout << "ODD NEGATIVE" << endl;
			}
    }
  return 0;
}

