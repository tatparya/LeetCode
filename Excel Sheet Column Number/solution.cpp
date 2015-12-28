class Solution {
public:
    int titleToNumber(string s) {
		//	AA = 27 = 1 * (26 ^ 0) + 1 * (26 ^ 1)
		//	BB = 2 * (26 ^ 0) + 2 * (26 ^ 1)

		int col = 0;
		int len = s.size();

		for( int i = 0; i < len; i++ ){
			col += int( s[len - i - 1] - 'A' + 1 ) * pow( 26, i );
		}

		return col;
    }
};
