#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, n, i, h, o, v;
    int r[3000];

    cout << "������� �����, ��� �������� �� ������ ������ ���������: ";
    cin>> N;

    r[0]=1;
    h=0;
    o=1;

    for(n=2; n<= N; n++)
    {
        for (i=0; i<o; i++)
        {
            v=(r[i]*n)+h;
            h=v/10;
        }

    } // ����� ����� ������� ���� ������� ����� ��������� ������ �������
    cout<< v;
}
