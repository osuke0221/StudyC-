#include<iostream>
#include<vector>
#include<Algorithm>
int main()
{
	std::vector<int>nums = { 1,2,3,4,5,6,7,8,9,10 };

	for (int i = 0; i < nums.size(); ++i) {
		if (i % 2 == 0) {
			std::swap(nums[i], nums.back());
			nums.pop_back();
			--i;
		}
	}
	for (const int& value : nums) {
		std::cout << value << " ";
	}
}