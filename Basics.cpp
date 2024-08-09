#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// now we will be learning functions
// 1) Void functions -> does not return anything
// 2) returning functions
// 3) parametrised functions
// 4) non-parameterised functions

void printName(string name)
{
    cout << "Hello it's " << name << " in a void func" << endl;
}

void addten(int &num)
{
    num = num + 10;
    cout << num << endl;
}

int main()
{
    string name;
    cin >> name;
    printName(name);
    cout << "Again Hllo World!" << endl;
    std::cout << "Using std" << std::endl; // if we are not using the 4th line in the code
    int a = 10;
    // long b = 10974981;
    // long long x = 92841751892690812;
    // for decimals
    float c = 1.44;
    // double d = 9102384.21907502;
    cout << a << " " << c << " " << endl;

    string s = "subham";
    string str;
    // if we want to take more than one word as input in string:
    cout << "Enter a para to test geline" << endl;
    getline(cin, str);
    cout << str << endl;

    char ch = 'a';
    cout << "char is " << ch << endl;

    // now we will be doing if else statements

    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "You are not an adult" << endl;
    }
    else if (age >= 18)
    {
        cout << "You are an adult" << endl;
    }

    // switch statements
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    default:
        cout << "Invalid";
        break;
        // if all the cases fail this will execute but this one also need a break statement to stop from executing the below statements
    }
    cout << "check";
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // array of integers initilaised with a size of 10
    cout << arr[3] << endl;
    int arr1[2][5];             // a 2D array
    cout << arr1[1][3] << endl; // this iwll be agarbage value as the value of arr1[1][3] is not defined

    // now we will be dealing with strings

    string s1 = "Subhamk";
    int len = s1.size();
    int len1 = s1.length(); // both length and size can be used for string's length

    // as the array's size in c+  is fixed we don't have any function in c++ to calculate the length of  array
    // sizeof(arr) :-> this will give the size of array in bytes, and yes as the size of array in fixed we already know the size of array

    cout << len << " " << len1 << " " << endl;
    s1[3] = 'k'; // string can be mdified in c++
    cout << s1 << endl;

    // no we will be learining loops
    // for loops

    for (int i = 0; i < len1; i++)
    {
        cout << s1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < len1; i = i + 3)
    {
        cout << i << endl;
        cout << s1[i] << " ";
    }

    // while loops
    int increament = 0;
    while (increament <= 7)
    {
        cout << "increament is " << increament << endl;
        increament++;
    }

    // do while loops

    do
    {
        cout << "inside do " << increament << endl;
    } while (increament <= 5); // the do will for sure run at least once even if the condition is not true

    // in built func5ions like below:
    int maxnum;
    maxnum = max(10, 244);
    cout << maxnum << endl;

    // pass by value example below
    int num = 10;
    addten(num);
    cout << num << endl; // this num will not be increamented as the copy of num is sent to the addten function and not the original num so, num will be 10 only even after calling the addten function

    // so if we do want to change the origna; value we need to send the addres reference also, so do to that we need to add an extra &befoore the parameter in the function so that now it will make changes to the original value also

    // this is called pass by reference

    // an array is always passed by reference but no other things like vectors, pairs etc , for them we need to pass reference





    /////////////////////TIME COMPLEXITY/////////////////////////////////

    // for time complexity take a look at the screen shots and in that the theta angle is the time complexity;

    // every code takes time in terms of (Big-Oh notation) -> O(time taken)

    // and in place of the time taken in the Big Oh notation, it is the number of the steps which are execting in the code  example below in the for loop;

    int n = 7;
    for (int i = 0; i < n; i++)
    {
        cout << "i";
    }

    //  so for the above line of code ghe time complexity is O(number of steps)  and number of steps are
    // 1) initialisation of  i = 0;
    // 2) checking i<5 ;
    // 3) printing i;
    // 4) increasing i as i++;
    // 5) checking i<5
    // etc
    // remember the initialisation will only be one time.

    // time complexity can be find out by three steps
    // 1) Worst case scenerio
    // 2) avoid constants
    // 3) avoid lower values

    // calculating worst case scenerio
    // the above for loop os running three steps every time it executes which are check, print , increase i,
    // and it is running those steps for n times, so we will write the time complexity as :
    // O(n*3)
    // take a look at ss 3    for best, avg, worst case scenerios, avg is (best + worst) / 2
    //

    // and yes avoid constants as we did with the (int n= 7), we didn't count this in our complexity(time);

    // let's say ou time compelxity is O(4n^15 + 3n^8 + 5)
    // so in the above first avoid constants, so we will discard constast 8,
    // and next 3n^8 is very less or lower in comparison to the 4n^15, so we will discard that also so our updated time complexity will be:

    // O(4n^15); 
    // take a look at ss4 for time complexity problem which is o(n^2);

    // have a look at ss5 and ss6 for a good time complexity problem

    return 0;
}