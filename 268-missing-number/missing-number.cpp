class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a= nums.size();
        for(int i=0; i<a+1; i++){
            int flag=0;
            for(int j=0; j<a; j++){
                if(nums[j] == i){
                    flag=1;
                    break;
                }
            }if(flag==0){
                return i;
                }
        }return -1;  
    }
};