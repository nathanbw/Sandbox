#include <vector>
using std::vector;

namespace Statistics {
	double average (vector<double>& nums) {
		double sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
		}
		return sum / nums.size();
	}
	
	double median (vector<double>& nums) {
		int size = nums.size();
		if (size % 2 == 0)
			return (nums[(size / 2) - 1] + nums[size / 2]) / 2.0;
		else
			return nums[size / 2];
	}
}
