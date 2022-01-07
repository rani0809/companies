class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k){
       vector<int>res;
       
       multiset<int, greater<int>>set;
       
       for(int i = 0; i < k; i++){
           set.insert(arr[i]);
       }
       
       res.push_back(*set.begin());
       
       for(int i = k; i < n; i++){
           
           auto it = set.find(arr[i-k]);
           
           set.erase(it);
           
           set.insert(arr[i]);
           
           res.push_back(*set.begin());
           
       }
       return res;
    }
};