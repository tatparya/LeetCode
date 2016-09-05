class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        std::map<char, int> chars;
        for (int i = 0; i < magazine.size(); i++)
        {
			if (chars[magazine[i]] == NULL)
			{
				chars[magazine[i]] = 1;
			}
			else
			{
				chars[magazine[i]] += 1;
			}
        }

		for (int j = 0; j < ransomNote.size(); j++)
		{
			if (chars[ransomNote[j]] == NULL)
			{
				return false;
			}
			else if (chars[ransomNote[j]] == 0)
			{
				return false;
			}
			else
			{
				chars[ransomNote[j]] -= 1;
			}
		}
		return true;
    }
};
