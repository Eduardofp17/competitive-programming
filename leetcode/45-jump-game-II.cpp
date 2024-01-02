#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
       if(nums.size()== 1) return 0;
            int n = nums.size();
			 long long max_reach = nums[0];
			 long long steps = 1;
			 long long last_index = nums[0];

			 for(int i = 0; i < n; i++){
				if(i > last_index){
					steps += 1;
					last_index = max_reach;
				}

					max_reach = std::max(static_cast<long long>(max_reach), static_cast<long long>(i + nums[i]));

			 }

			 return steps;
    }
};


int main(){
	Solution s;
	vector<int> in1 = {2,3,1,1,4};
	vector<int> in2 = {2,3,0,1,4};

	cout << s.jump(in1) << endl;
	cout << s.jump(in2) << endl;

	return 0;
};
