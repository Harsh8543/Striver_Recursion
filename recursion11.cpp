#include <iostream>
#include <vector>

void findClosestSum(const std::vector<int>& nums, int target, int start, int k, int currentSum, int& closestSum) {
    if (k == 0) {
        if (abs(target - currentSum) < abs(target - closestSum)) {
            closestSum = currentSum;
        }
        return;
    }
    if (start >= nums.size()) {
        return;
    }

  
    findClosestSum(nums, target, start + 1, k - 1, currentSum + nums[start], closestSum);
   
    findClosestSum(nums, target, start + 1, k, currentSum, closestSum);
}

int threeSumClosest(const std::vector<int>& nums, int target) {
    int closestSum = nums[0] + nums[1] + nums[2];  
    findClosestSum(nums, target, 0, 3, 0, closestSum);
    return closestSum;
}

int main() {
    std::vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    int result = threeSumClosest(nums, target);
    std::cout << "The closest sum is: " << result << std::endl;  
    return 0;
}