class Solution {
public:
    char findTheDifference(string s, string t) {
		int sum1 = 0;
        int sum2 = 0;
		for (int i = 0; i < s.size(); i++)
		{
            sum1 += (int) s[i];
		}
		//	Check other string
		for (int j = 0; j < t.size(); j++)
		{
			sum2 += (int) t[j];
		}

		return (char) sum2 - sum1;
    }
};
