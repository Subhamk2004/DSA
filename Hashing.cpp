#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    // cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++) {
        int x = 0;
        // cin>>x;
        arr[i] = x;
    }

    int hash[13] = {0}; // we take the size of the hash array as the number which we will think will be the max number user will be searching for
    // so in this case we are assuming that user will be searching for numbers upto 13 in the array;
    for(int i = 0; i< n ;i++) {
        hash[arr[i]] += 1;
    }

    // for(int i = 0 ;i < 13; i++) {
    //     cout<<hash[i]<<" ";
    // } //check this if you want to know the hash array that has been formed

    int queries = 1;
    // cin>>queries;
    while(queries--) {
        int number = 0;
        // cin>>number;
        cout<<number<<" has appeared "<<hash[number]<<" times"<<endl;
    }

    int x = 'a'; // this will assign x the ascii value of 'a', so x = 97 here;

    // now we will be learning hashing for strings

    string s = "sdgshfsdhjkfgsf";
    // cin>>s;
    int hash2[26] = {0};
    for(int i = 0; i< 5; i++) {
        hash2[s[i] - 97] += 1;
    }
    // for(int i = 0; i< 26; i++) {
    //     cout<<hash2[i]<<" ";
    // }

    int q = 3;
    // cin>>q;
    while(q--) {
        char ch = 'a';
        // cin>>ch;
        int numchar = ch-97;
        cout<<numchar<<" "<<endl;
        cout<<ch<<" has appeared "<<hash2[numchar]<<" times"<<endl;
    }


    // now since hashing through array can be very expensice for system and time complexity,so we will be using maps for hashing 
    // check ss41 for more on what are the benefits of using map

    int n1;
    cin>>n1;
    int arr2[n1];
    for(int i =0; i< n1; i++) {
        cin>>arr2[i];
    }

    map<int, int> mp;

    for(int i = 0; i< n1; i++) {
        mp[arr2[i]] += 1;
    }

    int q1;
    cin>>q1;
    while (q1--)
    {
        int num;
        cin>>num;
        cout<<num<<" has appeared "<<mp[num]<<" times"<<endl;
    }


    //  similarly we can use maps for strings also;

    // but there is a thing unordered map whic takes way less time than the map itself, chec ss42 for that time complexity

    // the storing and fetching of the map's element itself take logN, and if you are running that in a loop it will take N*logN,
    // and unordered_map in that case will take N^2;


    // now with hashing ther are various methods for hashing check ss43 for that !!!! Must check !!!! ss43  !!!!! for hashing methods


    // A collision occurs when two different data items produce the same hash value.

    

    return 0;
}


// hashing is basically pre storing and fetching, because searching an dfetching are very basic operations and if the tarffic or data is ver much this can take a lot of time, so this is where hashing comes in.


// for hash limits in array check ss40