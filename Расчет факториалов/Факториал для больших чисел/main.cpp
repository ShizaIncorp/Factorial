#include <iostream>

using namespace std;

int main()
{

    cout << "Enter the number for which you want to find out the factorial: ";
    int N, n, i, h, o, v;
    int r[3000];
    cin>> N;
    if (N>3000)
    {
        cout << "Sorry, we can't calculate such a large factorial value.";
        return 0;
    }
    if (N<0)
    {
        cout<< "We cannot calculate the factorial value of a negative number";
        return 0;
    }

    r[0]=1;
    h=0;
    o=1;

    for(n=2; n<= N; n++)
    {
        for (i=0; i<o; i++)
        {
            v=(r[i]*n)+h;
            r[i]=v%10;
            h=v/10;
        }
        while(h>0)
        {
            r[o++]=h%10;
            h/=10;
        }
    }
    cout<<N<<"!=" ;
    for(i=o-1;i>0;i--)
         cout<<r[i];
         cout<<r[0]<<endl;

}














