#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, n, i, h, o, v;
    int r[100000];

    cout << "������� �����, ��� �������� �� ������ ������ ���������: ";
    cin>> N;
    if (N<0)
        {
        cout<< "�� �� ����� ���������� �������� ���������� �������������� �����";
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
    cout<<N<<"!=";
    for(i=o-1;i>=0;i--)
         cout<<r[i];

    return 0;
}


