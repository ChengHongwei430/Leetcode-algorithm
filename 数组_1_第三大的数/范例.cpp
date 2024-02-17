

//class Solution {
//public:
//    int thirdMax(vector<int>& nums) {
//
//        long a = LONG_MIN, b = LONG_MIN, c = LONG_MIN;
//        for (int i = 0; i < nums.size(); i++) {
//            if (nums[i] > a) {
//                if (nums[i] > b) {
//                    if (nums[i] > c) {
//                        long temp1 = c;
//                        long temp2 = b;
//                        c = nums[i];
//                        b = temp1;
//                        a = temp2;
//                    }
//                    else if (nums[i] < c) {
//                        long temp = b;
//                        b = nums[i];
//                        a = temp;
//                    }
//                }
//                else if (nums[i] < b)
//                    a = nums[i];
//            }
//        }
//        return a == LONG_MIN ? c : a;
//    }
//};