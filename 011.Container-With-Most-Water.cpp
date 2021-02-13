class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int water = 0;
        
        while(l<r){
            int temp = (r-l)*min(height[l], height[r]); 
            water = max(water, temp);
            
            if( height[l] < height[r])
                l++;
            else
                r--;
        }
        return water;
    }
};

/*

two pointer method O(n)
head & tail move toward middle

*/
