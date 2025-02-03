#include <bits/stdc++.h>
using namespace std;

int maximumNum(vector<int> arr) {
    int maxi = arr[0];
    for(int i = 1; i<arr.size(); i++) {
        if(arr[i]>maxi) {
            maxi = arr[i];
        }
    }
    return maxi;
}

void greatestcandies(vector<int> arr, int extra) {
    int maxi = maximumNum(arr);
    vector<bool> result(5);
    for(int i = 0; i<arr.size(); i++) {
        if(arr[i]+extra >= maxi) {
            result[i] = true;
        }
        else{
            result[i] = false;
        }
    }
}

// void display(vector<bool> result) {
//     for(int i = 0; i<result.size(); i++) {
//         cout<<result[i]<<" ";
//     }
//     cout<<endl;
// }


int main() {
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    greatestcandies(candies, extraCandies);
}