class Solution
{
    public:
        int quickSort( vector<int> & nums, int start, int end, int k )
        {
            cout << "Start : " << start << endl;
            cout << "End : " << end << endl << endl;

            int pivot = end;
            int wall = start;
            int itr = start;
            int temp;

            if ( end - start <= 0 )
            {
                return start;
            }

            while( itr < pivot )
            {
                //  Check if pivot is greater than itr
                if( nums[itr] < nums[pivot] )
                {
                    if( itr != wall )
                    {
                        //  Swap itr with new wall
                        temp = nums[itr];
                        nums[itr] = nums[wall];
                        nums[wall] = temp;
                    }
                    wall++;
                }
                itr++;
            }

            //  Swap wall with pivot
            temp = nums[wall];
            nums[wall] = nums[pivot];
            nums[pivot] = temp;

            //  Check if current wall is at right position for
            //  k'th largest element
            if ( wall == nums.size() - k )
            {
                return wall;
            }

            if ( nums.size() - k < wall )
                //  Sort left half
                return quickSort( nums, start, wall - 1, k );
            else
                //  Sort right half
                return quickSort( nums, wall + 1, end, k );
        }

        int findKthLargest(vector<int>& nums, int k)
        {
            return nums[quickSort( nums, 0, nums.size() - 1, k )];
        }
};
