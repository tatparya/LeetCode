class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::map<int, int> numbers;
		for (int i = 0; i < nums.size(); i++)
		{
			if (numbers[nums[i]] == NULL)
			{
				numbers[nums[i]] = 1;
			}
			else
			{
				numbers[nums[i]] += 1;
			}
		}
		int total = nums.size();
		for (std::map<int, int>::iterator itr = numbers.begin(); itr != numbers.end(); itr++)
		{
			if (itr -> second > (total/2))
			{
				return itr -> first;
			}
		}
		return -1;
    }
};
