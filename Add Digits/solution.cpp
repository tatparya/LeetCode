class Solution {
public:
    int addDigits(int num) {
		int sum = 0;
		int temp = num;
		while( temp > 0 || sum > 9 ){
			if( temp == 0 && sum > 9 ){
				temp = sum;
				sum = 0;
			}
			sum += temp % 10;
			temp = temp / 10;
		}

		return sum;
    }
};
