#include <bits/stdc++.h>
using namespace std;

void extractDigits(int num)
{
    int cnt = (int)(log10(num) + 1);
    cout << cnt << endl;

    cout << "Extracted digits fromt he number are" << endl;
    int digitCnt = 0;
    for (int i = 0; num > 0; i++)
    {
        cout << num % 10 << " " << endl;
        num = num / 10;
        digitCnt++;
    }
    cout << "The number of digits in the number are: " << digitCnt << endl;

    // another method to find the number of digits in a nuber is by taking a log to the base 10 of that number a below;

    // int cnt = (int)(log10(num) + 1);
    // cout<<cnt<<endl; // thi thing here willnot give correct output as till now the num is 0 due to the loop so do this operation before starting operation on num;

    // if division is involved in operations then the time complexity will not be simply o(n) , but it will be in terms of log as:

    // o(log10(n)); here 10 is the unmber by which we are dividing
}

void reverseNumber(long int num)
{
    int cnt = (int)(log10(num) + 1);
    cout << "digits in number are" << cnt << " " << num << endl;
    long int reversedNum = 0;
    for (int i = 0; num > 0; i++)
    {
        int lastDigit = num % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        cout << lastDigit << " " << reversedNum << endl;
        num = num / 10;
    }
    cout << "reversed number is: " << reversedNum;
}

bool checkPalindrome(long int num)
{
    long int numCopy = num;
    long int reversedNum = 0;
    for (int i = 0; numCopy > 0; i++)
    {
        int lastDigit = numCopy % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        numCopy = numCopy / 10;
    }
    if(reversedNum == num) return true;
    return false;
}

void printDivisors(long int num) {
    // make sure you start from i = 1 , as if you start from 0 you will get core dumped error

    // below is first approach
    for(long int i = 1; i<=sqrt(num); i++) {
        if(num%i==0 && num%i != i) {
            cout<<i<<" "<<num/i<<" ";
        }
        else if(num%i==0 && num%i == i) {
            cout<<i<<" ";
        }
    }

    // below is second approach
    for(long int i = 1; i<=num; i++) {
        if(num%i==0) {
            cout<<i<<" ";
        }
    }

}

// check ss30 for more question and algo

int main()
{
    long int num;
    cin >> num;
    printDivisors(num);
}