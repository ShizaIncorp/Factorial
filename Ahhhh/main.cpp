#include <iostream>

using namespace std;

int main()
{
    int i;
    int n;
    int a;
    a=1;
    int x;
    x=1;
    cin>>n;
    for( i = 1; i < n; i++){
        a=a+1; x=x*a;
    }
    cout << x << endl;
    return 0;
}
