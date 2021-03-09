// Cautare_secventiala.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n, x, i, gasit, a[50];
    cin >> n;
    cout << "Dati numarul de cautat:";
    cin >> x;
    cout << "Dati elementele tablului:"<<endl;
    gasit = 0;
    for (i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
        if (a[i] == x)
            gasit = 1;
    }
    if (gasit == 0)
        cout << "Numarul cautat nu apartine tablului!" << endl;
    else
        cout << "Numarul apartine tablului!" << endl;
    return 0;
}


