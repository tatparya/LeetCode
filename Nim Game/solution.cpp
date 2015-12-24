class Solution {
public:
    bool canWinNim(int n) {

		// Take one two or three stones
		//	4 = 1 + 3
		//	5 = 1 + 3 + 1
		//	6 = 2 + 1 + 3
		//	7 = 3 + 1 + 3
		//	8 = 1 + 3(4) / 2 + 2(4) / 3 + 1(4)
		//	9 = 1 + 3
		//	10 = 2 + (8)
		//	11 = 3 + (8)
		// 	12 = 1 + 3 + (8)

		if( n % 4 == 0 )
			return false;
		else
			return true;

    }
};
