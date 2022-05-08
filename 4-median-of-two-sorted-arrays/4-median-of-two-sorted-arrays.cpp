class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<int> ans;
        int s=0,e=0;
        
        while(s<n1 or e<n2){
            if(s>=n1){ //we have exhasuted all the elements in num1
                while(e<n2){
                    //chip in the rest of the nums2 vector
                    ans.push_back(nums2[e]);
                    e++;
                }
            }

            else if(e >= n2){// we have exhausted all the elements in nums2
                while(s<n1){
                    //chip in the rest of the elements of nums1 vector
                    ans.push_back(nums1[s]);
                    s++;
                }
            }  

            else if(nums1[s]<nums2[e]){// num1 has samller element
                ans.push_back(nums1[s]);
                s++;
            }

            else if(nums2[e]<nums1[s]){// num2 has samller element
                ans.push_back(nums2[e]);
                e++;
            } 
            else{
                ans.push_back(nums1[s]);
                ans.push_back(nums2[e]);
                s++;
                e++;
            }
        }
        int n = ans.size();
        if(n&1){
            return ans[n/2];
        }
        else return (ans[n/2] + ans[n/2 - 1])/2.0;
    }
};