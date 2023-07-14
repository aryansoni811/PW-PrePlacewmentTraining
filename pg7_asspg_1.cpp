#include <iostream>
#include <vector>

void moveZeroes(std::vector<int>& nums) {
    int index = 0;
    for (int num : nums) {
        if (num != 0) {
            nums[index++] = num;
        }
    }
    while (index < nums.size()) {
        nums[index++] = 0;
    }
}

int main() {
    std::vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
