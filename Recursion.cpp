#include<bits/stdc++.h>
using namespace std;

// check ss32 to understand recursion

// when a program runs for infinite time until it runs of our memory then it gives segmentation fault, and thi condition is called stack overflow
// in a infinite recursion no function is executed fully as the function wait for the other functions in the memory to complete then they will complete their execution but as no function is completed in infinite recursion they will be stored in a stack in memory and will cause segmentation fault


// so to stop a recursion there has to be a condition which is base condition

// check ss33 for recursion tree

void recursionFunction(int &num) {
    if(num > 100 ) {
        cout<<"Now the function is completed and the num value is: "<<num<<endl;
        return;
    }
    cout<<num<<" ";
    num++;
    recursionFunction(num);
}

void printName(int i , int n) {
    // this time withut using global variable or using the address & we will be doing recursion

    if(i>n) {
        cout<<"Function stopped";
        return;
    }

    cout<<"Subhm Kumar ";
    // printName(i + 1, n); // here we have passed the increamented value of i so in the next function call we will have i + 1;

    // or we could have also done as below:
    i++;
    printName(i, n);// here we already increamented value of i and then passed in next function; time complexity of this will be o(n) as we will not count he constants and lower value but as the function is getting called n times so it's o(n);
    // and space complexity is also o(n) as  n-1 functions are getting stored in the stack so we will assume o(n);
    //
}

int sumofN( int n){
    // below is a brute force approach which required 3 parameters
    // if(j > n) {
    //     cout<<i;
    //     return;
    // }
    // cout<<i<<" ";
    // i = j + i; // 1,3,6,10
    // sumofN(i,j+1, n);

    // below is an optimised approach
    if(n == 0) return 0;
    return n + sumofN(n-1); // if the function to be recursed is being called in the return then the return will not immediately terminat the function it will still wait for the function to reach base condition;

}

int factorial(int n) {
    // below is the brute force approach in which we required two more parameters;
    // if(j >= n) {
    //     cout<<i;
    //     return;
    // }
    // j++;
    // i = i*j;
    // factorial(i, j, n);

    if(n == 0) return 1;
    return n*factorial(n-1);

    
}

void swapArray(int i, int arr[], int n) {
    if( i>=n/2 ) return;

    swap(arr[i], arr[n-i-1]);
    swapArray(i+1, arr, n);

}

bool checkPalindrome(int i, string s) {
    if(i >= s.length()/2) return true;
    if(s[i] != s[s.length()-i-1]) return false;
    return checkPalindrome(i+1, s);
}

int fibonacciSeries(int n) {
    if(n <= 1) return n; // when the function reaches this base condition this n can be either 0 or 1, so that's whywe write here n and not a static 1;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
    // check ss34, 35, 36  for more on multiple recursion
    // ss37 shows how the recursion works, and remember the left thing on tree is executed first in the ss; 

    // ss38 shows the time complexity of this program , however the time complexity is not exactly 2^n but it's near 2^n;
}

int main() {
    int num, arr[] = {1,2,3,4,5,67,8,9};
    cin>>num;
    string str;
    cin>>str;
    cout<<checkPalindrome(0, str);
    // arrays are always passed with reference so changes made in the function will reflect everywhere
    for(int i = 0 ; i< num; i++) {
        cout<<arr[i]<<" ";
    }


}



// JAI SHREE RAM
// hello this is redgear shadowbalde keyboard