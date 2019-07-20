class Solution {
public:
    int maxi(int x,int y,int z){
	return max(max(x,y),z);
}
int find_min(vector<int>&prices,int low,int high){
	int min = INT_MAX;
	for(int i=low;i<=high;i++){
		if(prices[i]<min)
			min = prices[i];
	}
	return min;
}
int find_max(vector<int>&prices,int low,int high){
	int max = INT_MIN;
	for(int i=low;i<=high;i++){
		if(prices[i]>max)
			max = prices[i];
	}
	return max;
}
int fun(vector<int>&prices,int low,int high){
	if(low >= high)
		return INT_MIN;
	int mid = (low+high)/2;
	int diff = find_max(prices,mid+1,high)-find_min(prices,low,mid);
	return maxi(diff,fun(prices,low,mid),fun(prices,mid+1,high));
}
    int maxProfit(vector<int>& prices) {
        int low = 0;
        int high = prices.size() - 1;
        int ans = fun(prices,low,high);
        if(ans>0)
            return ans;
        else
            return 0;
    }
};