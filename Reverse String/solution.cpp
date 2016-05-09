class Solution {
public:
    string reverseString(string s) {
		//	"Hello" -> "olleH"
		int length = s.size();
		char temp;
		for( int i = 0; i < length / 2; i++ ){
			//	Swap
			temp = s[i];
			s[i] = s[length - i - 1];
			s[length - i - 1] = temp;
		}

		return s;
    }
};
