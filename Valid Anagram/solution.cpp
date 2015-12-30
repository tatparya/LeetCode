class Solution {
public:

	bool isAnagram(string s, string t) {
		int str[256] = {0};
		int len1 = s.size();
		int len2 = t.size();
		if( len1 != len2 ){
			return false;
		}
		//	Count first string;
		for( int i = 0; i < len1; i++ ){
			str[ int(s[ i ]) ]++;
			//cout << int(s[i]) << endl;
		}

		//	Count other string
		for( int i = 0; i < len2; i++ ){
			str[ int(t[ i ]) ]--;
			//cout << int(t[i]) << endl;
		}

		for( int i = 0; i < 256; i++ ){
			if( str[i] != 0 ){
			    //cout << "Not same : " << i << " : " << char(i) << endl;
				return false;
			}
		}

		return true;
	}
};
