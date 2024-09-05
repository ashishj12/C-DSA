// 287. Find the Duplicate Number

// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

// There is only one repeated number in nums, return this repeated number.

// You must solve the problem without modifying the array nums and uses only constant extra space.

class solution
{
public:
    int findDuplicate(std::vector<int> &nums);

    // apply binary search

    int left = 1;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = left + right / 2;
        int count = 0;

        for (int num : nums)
        {
            if (num <= mid)
            {
                count++;
            }
        }
        if (count > mid)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
}