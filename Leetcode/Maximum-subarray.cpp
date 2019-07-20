class Solution {
public:
    int maxi(int x,int y,int z){
	    return max(max(x,y),z);
    }
    
int betw(vector<int>&nums,int low,int mid,int high){
	int sum_left = INT_MIN;int sum_right = INT_MIN;
	int left_len,right_len;
	int sum = 0;

	for(int i=mid;i>=low;i--){
		sum = sum + nums[i];
		if(sum > sum_left){
			sum_left = sum;
			left_len = i;
		}
	}
	sum = 0;
	for(int i=mid+1;i<=high;i++){
		sum = sum + nums[i];
		if(sum > sum_right){
			sum_right = sum;
			right_len = i;
		}
	}
	return sum_left + sum_right;
}
    
    int max_sub(vector<int>&nums,int low,int high){
	    if(low==high)
		    return nums[low];
	    int mid = (low+high)/2;
	    return maxi(max_sub(nums,low,mid),max_sub(nums,mid+1,high),betw(nums,low,mid,high));
    }
    
    int maxSubArray(vector<int>& nums) {
        int low = 0;
        int high = nums.size()-1;
        return max_sub(nums,low,high);
    }
};