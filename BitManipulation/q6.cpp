#include <bits/stdc++.h>

using namespace std;



int main ()

{

  int n;

  cin >> n;

  int i, a[n];

  for (i = 0; i < n; i++)

    cin >> a[i];


  unordered_map < int, int >m;

  for (i = 0; i < n; i++)

    m[a[i]]++;


  for (auto it = m.begin (); it != m.end (); it++)

    {

      if (it->second != 3)

	{

	  cout << it->first << endl;

	  break;

	}

    }

}