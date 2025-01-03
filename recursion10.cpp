// class Solution {
//     public:
//     void func(int ind, int sum,vector<int>&arr,int N,vector<int>&sumSubset){
//         if(ind==N){
//             sumSubset.push_back(sum);
//             return;
//         }
//         //pick the element
//         func(ind+1,sum + arr[ind],arr,N,sumSubset);
        
//     // do not pick the element
//      func(ind+1,sum,arr,N,sumSubset);
//     }
//   public:
//     vector<int> subsetSums(vector<int> arr, int N) {
//      vector<int>sumSubset;
//      func(0,0,arr,N,sumSubset);
//      sort(sumSubset.begin(),sumSubset.end());
//      return sumSubset;
//     }
// };

#include <iostream>
#include <vector>
#include <algorithm> // Required for sort

class Solution {
public:
    void func(int ind, int sum, std::vector<int>& arr, int N, std::vector<int>& sumSubset) {
        if (ind == N) {
            sumSubset.push_back(sum);
            return;
        }
        // Pick the element
        func(ind + 1, sum + arr[ind], arr, N, sumSubset);
        
        // Do not pick the element
        func(ind + 1, sum, arr, N, sumSubset);
    }

    std::vector<int> subsetSums(std::vector<int> arr, int N) {
        std::vector<int> sumSubset;
        func(0, 0, arr, N, sumSubset);
        std::sort(sumSubset.begin(), sumSubset.end());
        return sumSubset;
    }
};

int main() {
    Solution sol;
    std::vector<int> arr = {3, 1, 2};
    int N = arr.size();
    
    std::vector<int> result = sol.subsetSums(arr, N);
    
    for (int sum : result) {
        std::cout << sum << " ";
    }
    std::cout << std::endl;

    return 0;
}
