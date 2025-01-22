#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
    stack<int> st;
    vector<int> result(nums2.size());
    vector<int> nge(nums1.size());
    for(int i = nums2.size(); i>=0;i--)
    {
        while(!st.empty() && st.top()<= nums2[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            result[i] = -1;
        }
        else {
            result[i] = st.top();
        }
        st.push(nums2[i]);
    }

    for(int j = 0; j<nums2.size(); j++) {
        for(int k = 0; k<nums1.size(); k++) {
            if(nums1[j] == nums2[k]) {
                nge[j] = result[k];
            }
            else{
                continue;
            }
        }
    }
    return nge;
}

int main() {
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    vector<int> result = nextGreaterElement(nums1, nums2);
    for(int x : result) {
        cout<<x<<" ";
    }
    return 0;
}