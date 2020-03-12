#include <iostream>


using namespace std;


int main()

{

    int n;

    cin>>n;

    int a[n],i;

    for(i=0;i<n;i++)

    cin>>a[i];

    
int res[n];

    res[0]=a[0];

    
for(i=1;i<n;i++)

    {

        res[i]=res[i-1]^a[i];

    }

    
int k;

    cin>>k;

    while(k--)

    {

        int l,r,ans;

        cin>>l>>r;

        
if(l>0)

        {

            ans = res[r] ^ res[l-1];

        }
        
	else

        ans = res[r];

        
cout<<ans<<endl;

    }

}