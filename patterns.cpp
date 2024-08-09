#include <bits/stdc++.h>

using namespace std;

void squareStarPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lowerTriangle(int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = n + 1 - i; j < n + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void lowerTriangleNums(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void lowerTriangleNumsSame(int n)
{
    for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j <i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}


int main()
{
    int n;
    cin >> n;
    lowerTriangleNumsSame(n);
}