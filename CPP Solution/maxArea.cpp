int maxArea(vector<int>& height) {
    int s=0,e=height.size()-1;
    int maxA=0,area=0;
    while(s<e){
        area=min(height[s],height[e])*(e-s);
        maxA=max(area,maxA);
        if(height[s]<height[e]) s++;
        else e--;
    }
    return maxA;
}
