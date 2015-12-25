#include <hash_map>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        hash_map<int, int> numbers;
		for( int i : nums ){
			if( numbers[ i ] != 1 ){
				numbers[ i ] = 1;
			}
			else
				return false;
		}
    }
};
