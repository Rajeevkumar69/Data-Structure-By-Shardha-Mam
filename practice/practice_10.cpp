#include<iostream>
#include<vector>
using namespace std;

/*
Given an array of numbers sorted in ascending order and a target sum, find a pair in the array whose sum is equal to the given target.
Write a function to return the indices of the two numbers (i.e. the pair) such that they add up to the given target. If no such pair exists return [-1, -1].

Input: [1, 2, 3, 4, 6], target=6
Output: [1, 3]
*/


vector<int> searchPair(vector<int> &arr, int target){
    int n = arr.size();
    int st = 0, end = n-1;

    while(st < end){
        int currSum = arr[st] + arr[end];

        if(currSum == target){
            return {st, end};
        }else if(currSum < target){
            st++;
        }else{
            end--;
        }
    }
    return {-1,-1};
}

/*
Given an array of numbers sorted in non-decreasing order, remove the duplicates in place so that each distinct value appears only once, 
keeping the values in sorted order at the front of the array. You may not use any extra space, so the solution must use constant extra space, .

Return k, the number of distinct values. What the array holds beyond the first k positions does not matter and is not checked.

Example 1:

Input: [2, 3, 3, 3, 6, 9, 9]
Output: 4
*/

int  getDistinctValue(vector<int> &arr){
    
    if(arr.empty()){
        return 0;
    }

    int i = 0;

    for(int j=i; j<arr.size(); j++){
        if(arr[i] != arr[i+1]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}


int main(){
    vector<int> arr= {1,2,3,4,6};
    int target = 6;

    vector<int> result = searchPair(arr, target);

    for(auto val : result){
        cout << val << ",";
    }
    
    vector<int> arr2 = {2, 3, 3, 3, 6, 9, 9};
    cout << getDistinctValue(arr2);

    return 0;
}