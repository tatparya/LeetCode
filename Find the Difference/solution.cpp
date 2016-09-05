class Solution {
public:
    char findTheDifference(string s, string t) {
		std::map<char, int> characterMap;

		//	Store chars in map
		for (int i = 0; i < s.size(); i++)
		{
			cout << s[i] << endl;
			//	Check if char in map
			if (characterMap[s[i]] == NULL)
			{
				characterMap[s[i]] = 1;
			}
			else
			{
				characterMap[s[i]] += 1;
			}
		}

		//	Check other string
		for( int j = 0; j < t.size(); j++ )
		{
			cout << s[j] << endl;
			if (characterMap[t[j]] == NULL)
			{
				return t[j];
			}
			else if (characterMap[t[j]] == 0)
			{
				return t[j];
			}
			else
			{
				characterMap[t[j]] -= 1;
			}
		}
		return 'a';
    }
};
