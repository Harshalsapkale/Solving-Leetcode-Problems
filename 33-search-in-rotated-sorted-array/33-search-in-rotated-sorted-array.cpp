class Solution {
public:
    int search(vector<int>& nums, int target) {
     int low=0,high=nums.size()-1,mid;
        
        while(low<=high)                    // basic binary search 
        {                  
             mid=(high+low)/2;             // finding the mid value 
            
            if(nums[mid]==target)         // if in the best scenario we get the target value 
                return mid;
              
            if(nums[low]<=nums[mid])     // if this case is true we will work on the left side of mid 
            {    
                
                if(nums[low]<=target && nums[mid]>=target)  // now we will apply a binary search on the left side and with these if else case we will keep on reducing the size of our search area 
                    
                    high=mid-1;
                else
                    low=mid+1;
            }
            else                         // if this case work we will follow the same procedure on the right side of array
            {
              if(nums[mid]<=target && nums[high]>=target)
                  low=mid+1;
                else
                    high=mid-1;
            }
        }
        return -1;
        
    }
};