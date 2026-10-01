#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3 = nums1;
        for(int x : nums2)
        {
            nums3.push_back(x);
        }
        for(int i : nums3)
        {
            cout << nums3[i] << endl;
        }
    }
};

int main()
{
    
    return 0;
}