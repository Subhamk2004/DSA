#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        map<int, pair<int, int>> mp;
        int mpCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != mp[mpCount].first)
            {
                mp[i].first = nums[i];
                mp[i].second = 1;
            }
            else if (nums[i] == nums[i - 1])
            {
                mp[mpCount].second++;
            }
            else if (nums[i] != nums[i - 1])
            {
                mpCount++;
                mp[mpCount].first = nums[i];
                mp[mpCount].second = 1;
            }
        }
        cout << "size of map is: " << mp.size() << endl;
        int maxF = 0;
        while (k > 0)
        {
            int maxFreq = 0;
            int maxFreqNumIndex = 0;
            cout << mp.size();

            for (int j = 0; j < mp.size(); j++)
            {
                if (mp[j].second > maxFreq)
                {
                    maxFreq = mp[j].second;
                    maxFreqNumIndex = j;
                }
            }
            for (int j = maxFreqNumIndex; j < mp.size(); j++)
            {
                if (mp[j + 1].first > 0)
                {
                    int diff = mp[j + 1].first - mp[j].first;
                    if (diff * mp[j].second >= k)
                    {
                        maxF = mp[j].second + mp[j + 1].second;
                        mp[j + 1].second = maxF;
                        k = k - diff * mp[j].second;
                        auto it = mp.begin();
                        mp.erase(it);
                    }
                    else
                    {
                        if (maxF < mp[j].second)
                        {
                            maxF = mp[j].second;
                        }
                        auto it = mp.begin();
                        mp.erase(it);
                    }
                }
            }
        }
        cout << endl;
        cout << mp.size() << endl;
        for (int i = 0; i < mp.size(); i++)
        {
            cout << mp[i].first << " ";
        }
        cout << endl;
        cout<<"Max frequency is: " << maxF;
        return 0;
    }
};

int main()
{
    int N, k;
    cin >> N>>k;

    vector<int> arr(N);

    // adding elements to the vector
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    ob.maxFrequency(arr, k);
}