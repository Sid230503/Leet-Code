class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mer(nums1.size() + nums2.size());
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),mer.begin());
        if(mer.size()%2 == 0){
            return (mer[((mer.size())/2-1)] + mer[(mer.size()/2)])/2.0;
        }
        else{
            return mer[(mer.size()-1)/2];
        }
    }
};