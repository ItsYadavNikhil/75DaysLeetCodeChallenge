class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      for(int i=0,j=i+1;j<nums.size();i++,j++) {
        if(nums[i]==nums[j]){
            nums.erase(nums.begin()+j);
            i--;
            j--;
        }
      }  return nums.size();
    }
};