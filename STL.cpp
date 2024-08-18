#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    pair<int, int> p1 = {1, 3};
    cout << "accessing1st item of pair " << p1.first << " accessing second item of pair " << p1.second << endl;

    pair<int, pair<int, string>> p2 = {1, {3, "Subham"}};
    cout << "nested pairs" << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    // the above is an array of pairs;

    // cout << arr[1].second << endl;
    vector<pair<int,int>> v = {{1,2}, {10,5}, {5,9}, {3,43}};
    sort(v.begin(), v.end());
    for(int i = 0 ; i< v.size(); i++) {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    v.erase(v.begin());
    for(int i = 0 ; i< v.size(); i++) {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

void explainVector()
{
    // unlike arrays vectors are dynamic, and does not have fixed size
    vector<int> v1;
    v1.push_back(1);
    v1.emplace_back(3); // emplace_back is faster than push_back;
    for (int i = 0; i < 4; i++)
    {
        v1.push_back(i);
    }

    vector<pair<int, int>> v2;
    v2.push_back({4, 39});
    v2.push_back({23, 10});
    cout << v2[0].second << endl;

    vector<int> v3(5, 100); // this vector is now a container of size 5 with each value 100

    vector<int> v4(v3); // v4 is now a copy of v3
    cout << v4[2] << endl;

    //////////Iterator//////////////////

    //   Iterator points to the memory of the variables where it sits as
    //  and if we want to access the element from the memory then we just put a * in front of the iterrator so then it will give us the variable itself

    vector<int>::iterator it = v1.begin(); // this is the syntax for iterator

    it++;
    cout << "The value of variable at this memory is " << *it << endl;

    vector<int>::iterator it2 = v3.end(); // end points to the location just after the end of the list of anything, so to access the last element of anything we need to do *it--;
    it2--;
    cout << *it2 << endl; // now this will print the last value of the v3

    cout << v1.back() << endl; // it prints the last element of the vector

    ///////////  LOOP USING ITERATORS   /////////////

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (vector<pair<int, int>>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << it->first << " ";
    }
    // the above can also be done as:
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << it->second << " "; // if we have vector of pairs we can't just simply do as *it.first to access the value, above is the only syntax to access it
    }

    /////////// DELETION in vector  /////////////

    // deleting a single element from vector

    v1.erase(v1.begin() + 2); // deletes the third element in the vector v1
    // the above method only deletes one element from the vector
    // below is the method to erase multiple elements
    v1.erase(v1.begin() + 1, v1.begin() + 3); // deletes from 2nd element to 4th element (4th element is not included in deletion)

    // inserting element at the start of vector
    v1.insert(v1.begin(), 145);
    v1.insert(v1.begin() + 2, 3, 77); // this will insert 3 77s in the third position of the vector

    cout << v1.size() << endl;
    v1.pop_back(); // deletes last element from the vector

    // TODO: check ss16 for swaping the vectors and erasing the whole vector
    cout << v3.empty() << endl; // return of the vector is empty or not!
}

void explainList()
{
    list<int> l1;
    l1.push_back(2);
    l1.push_front(3);
    l1.emplace_back(6);
    l1.emplace_front(7);
    // check ss17 for the operations that can be performed on list
}

// check ss18 for deque

// check ss19 for stack

// check ss20 for queue

void explainPriorityQueue()
{
    // below is how priority_queue is formed

    // must check ss21 for pq must!!!!!

    priority_queue<int> pq1;
    pq1.push(2);
    pq1.push(9);
    pq1.push(5);

    // in a priority queue the element with the highest priority stays at the top, doesn't matter in which order the elements are being inserted

    // if the pq is of strings the string which is in the highes priority according to the lexographical order will stay at the top

    cout << pq1.top(); // 9
    pq1.pop();

    // below is the minimum priority pq

    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(5);
    pq2.push(9);
    pq2.push(7);
    cout << pq2.top() << endl; // prnits 5
}

void explainSet()
{
    // set stores everything in sorted order and all it's elements are unique
    set<int> st1;
    st1.insert(1);
    st1.insert(4);
    st1.insert(3);
    st1.insert(0);
    st1.insert(3); // this will not be inserted

    auto it = st1.find(3); // this will find 3 in the set and the it will point to it

    // but if the element to find is not present in the st then the it will point to the address of the variable just after the last element in the set;

    st1.erase(4); // deletes 4 from the set;

    int cnt = st1.count(0); // thiw integer cnt will now be either 0 or 1 based on if the element 0 is present in the set

    // checkout the ss22 for more on set
}

// check ss23 for multiset. // the difference in set ans multiset is that multiset can also store non-unique values but they will be stored

void explainMap()
{
    // map is like a key value pair where the key is always unique but the value can be same for example students in a class can have same name but not same roll nos. so the roll no is key and name is the value.

    // it's not necessary that the key shuld be integer only it can be any data structure {key:value}

    map<int, int> mp;
    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;

    mp[1] = 2; // thi will store 1 as the key and 2 as it's value
    mp1[3] = {2, 4};
    mp1.insert({6, {3, 7}});
    mp2[{4, 6}] = 20;

    for (auto it = mp1.begin(); it != mp1.end(); it++)
    {
        cout << it->second.first << " ";
    }

    // map stores unique keys in the sorted order
    // check ss24 and 25 for more info on map
}

// check ss26 for multimap

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false; // this will automatically swap the pairs
    if (p1.first > p2.first)
        return true;
    return false;

    // so we just made a comparater and if we want to sort some arra of pairs we can do the same or we can apply more custom condiions to sort, if the comp return true then nothing will change
    // but if the comp returns false then the pairs swap

    // so for custom sort we just have to compare two values and do our custom conditions and just return true or false
}

void explainExtra()
{

    int arr[6] = {1, 5, 30, 6, 9, 40};
    sort(arr, arr + 6);     // the sort function will sort the array or vector
    sort(arr + 2, arr + 5); // this will not sot the whole array but onl a specific part;

    // to sort the array in reverse order we do below as:
    sort(arr, arr + 5, greater<int>()); // now the array will be sorted in reverse order

    // to sort in a custom manner check ss27 for more and below is the method

    pair<int, int> ar[4] = {{12, 4}, {2, 6}, {7, 6}, {4, 9}};

    sort(ar, ar + 4, comp); // now this comp is the comparater which is a boolean function to sort in a desired way as in tje ss27
    //!!!!!!!!!!    MUST  check SS27  for the custom sort   !!!!!!////

    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i);
    }
    sort(v.begin(), v.end()); // by this way we can sort vectors also

    // __builtin_popcount is a built-in function provided by the GCC compiler (and some other compilers) that efficiently counts the number of set bits (1s) in an unsigned integer. It's often referred to as the population count.
    // Syntax:
    // C++
    // int __builtin_popcount(unsigned int x);
    // Use code with caution.
    // Parameters:
    //     x: The unsigned integer whose set bits are to be counted.
    // Return Value:
    //     The number of set bits in x.
    // Example:
    // C++
    // #include <iostream>
    // int main() {
    //     unsigned int num = 11; // Binary representation: 1011
    //     int count = __builtin_popcount(num);
    //     std::cout << "Number of set bits: " << count << std::endl; // Output: Number of set bits: 3
    //     return 0;
    // }


    // ss29 will give us the max element from an array
}

int main()
{
    explainPair();
    return 0;
}