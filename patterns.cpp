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
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void lowerTriangleNumsSame(int n)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void triangleFormation(int n, int m)
{
    // below is my approach
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((floor(m / 2) + i) < j || (floor(m / 2) - i) > j)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    // below is striver approach
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void lowerTriangleBinary(int n)
{
    for (int i = 0; i < n; i++)
    {
        int binary = 1;
        if(i % 2 != 0) binary = 0;
        for (int j = 1; j <= i + 1; j++)
        {
            cout << binary;
            if (binary == 1)
                binary = 0;
            else
                binary = 1;
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n;
    lowerTriangleBinary(n);
    //  for a good pattern check ss13
}