#include<bits/stdc++.h>
using namespace std;

int find(int n)
{
if(n==1)
return 0;
else if(n%2==0)
return 1+find(n/2);
else
return 1+min(find(n+1),find(n-1));
}

int main()
{
int n;
cin>>n;
int ans = find(n);
cout<<ans<<endl;
}