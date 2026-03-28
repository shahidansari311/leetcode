class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(),water=0;
        int leftmx=0,rightmx=0,maxheight=height[0],index=0;
        for(int i=1;i<n;i++){
            if(maxheight<height[i]){
                maxheight=height[i];
                index=i;
            } 
        }

        for(int i=0;i<index;i++){
            if(leftmx>height[i]){
                water+=leftmx-height[i];
            }
            else leftmx=height[i];
        }
        
        for(int i=n-1;i>index;i--){
            if(rightmx>height[i]){
                water+=rightmx-height[i];
            }
            else rightmx=height[i];
        }
        return water;
    }
};