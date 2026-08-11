class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int sof = nums1.size();
        int sos = nums2.size();
        int ns = sof + sos;
        int arr[ns];
        int farr[ns];
        float avg;
        for (int i = 0; i < sof; i++) {
            arr[i] = nums1[i];
        }
        for (int i = 0; i < sos; i++) {
            arr[sof] = nums2[i];
            sof++;
        }
        
        for (int i = 0; i < ns - 1; i++) {
            for (int j = 0; j < ns - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
        if(ns%2==0){
            avg = (((arr[ns/2])+(arr[ns/2 - 1]))/2.0);
        }
        else{
            avg = arr[ns/2];
        }
        return avg;
    }
};