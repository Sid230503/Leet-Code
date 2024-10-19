class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int x=nums.size(),ele,cot=0;
        for(int i=0; i<x; i++){
            if(cot==0){
                ele=nums[i];
                cot=1;
            }
            else if(ele == nums[i]) cot++;
            else cot--;
        }return ele;
    }
};