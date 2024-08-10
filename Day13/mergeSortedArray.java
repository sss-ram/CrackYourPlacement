class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int temp, j=0,i;
        if(n == 0)
            return;
        if(m == 0){
            while(j<n){
                nums1[j] = nums2[j];
                j++;
            }
            return;
        }
        for(i=0; i<m; i++){
            if(nums1[i]>nums2[j]){
                temp = nums1[i];
                nums1[i] = nums2[j];
                nums2[j] = temp;
            }
            while(j+1<n){
                if(nums2[j]>nums2[j+1]){
                    temp = nums2[j];
                    nums2[j] = nums2[j+1];
                    nums2[j+1] = temp;
                    j++;
                }
                else
                    break;
            }
            j=0;
        }

        while(i<m+n){
            nums1[i++]=nums2[j++];
        }

    }
}