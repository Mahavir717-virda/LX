class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;

        int left = 0, right = height.size() - 1;

        while(left < right)
        {
            int length = min(height[left],height[right]);
            int width = right - left;

            area = max(area, length * width);

            if(height[left] < height[right])
                left++;
            else 
                right--;
        }

        return area;
    }
};