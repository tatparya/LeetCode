using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int * nums;
        nums = new int[n];

        for( int i = 0; i < n; i++ ){
            nums[i] = 1;
        }

        int count = 0;
        int temp = 0;
        for( int i = 2; i < n; i++ ){
            temp = 0;
            if( nums[i] == 1 ){
                count++;
                // cout << "prime : " << i << endl;
                while( temp < n ){
                    // cout << "temp : " << temp << endl;
                    nums[temp] = 0;
                    temp += i;
                }
            }
        }
        return count;
    }
};
