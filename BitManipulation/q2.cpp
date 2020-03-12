

#include <iostream>


using namespace std;


int main()

{
    int a,b,c;

    cin>>a;

    
int f1=1,f2=1,f3=1;

    int res=0,i;

    for(i=0;i<32;i++)

        {

            f1 = (a&1);

            f2 = (b&1);

            f3 = (c&1);

        
    if(f3==1)

            {

                if(f1==0 && f2==0)

                    res+=1;

            }

            else
 
            {

                if(f1==1 || f2==1)

                {

                    if(f1&&f2)

                        res+=2;

                    else

                        res+=1;

                }

            }

            a = a>>1;

            b = b>>1;

            c = c>>1;

        }

    cout<<res<<endl;

}
