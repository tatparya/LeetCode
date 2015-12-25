class Solution {
public:

	/*
		( Move all zeros in an array to the end )
		Input	1 2 0 3 0 0 4 5 0 6
		Output	1 2 3 4 5 6 0 0 0 0
	*/
    void moveZeroes(vector<int>& nums) {
		int ptr = 0;
		int current = 0;
		int size = nums.size();
		while( current < size ){
			if( nums[current] != 0 ){
				if( current != ptr ){
					nums[ptr] = nums[current];
				}
				current++;
				ptr++;
			}
			else{
				//	If current is non zero
				current++;
			}

		}
		//	Ptr is at end of array, set rest to 0
		while( ptr < size ){
			nums[ptr] = 0;
			ptr++;
		}
    }
};
