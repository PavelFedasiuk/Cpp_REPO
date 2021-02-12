#include <iostream>

using namespace std;

int numb1(int n, int m);
bool numb2(int n, int m);
bool numb3(int n, int m);

int main()
{
    int n, m;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Numb 1: " << numb1(n, m) << endl;
    cout << "Numb 2: " << numb2(n, m) << endl;
    cout << "Numb 3: " << numb3(n, m) << endl;
}

int numb1(int n, int m)
{
    return n++ - m;
}

bool numb2(int n, int m)
{
    return m-- > n;
}

bool numb3(int n, int m)
{
    return n-- > m;
}