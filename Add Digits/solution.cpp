class Solution {
public:
    int addDigits(int num) {

		// 	1 = 1
		// 	2 = 2
		//	10 = 1
		// 	11 = 2
		// 	12 = 3
		//	13 = 4
		//	14 = 5
		//	15 = 6
		//	16 = 7
		//	17 = 8
		//	18 = 9
		//	19 = 10 = 1

		return 1 + ( num - 1 ) % 9;
    }
};
