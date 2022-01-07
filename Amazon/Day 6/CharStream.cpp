class Solution {
	public:
     
     string FirstNonRepeating(string A){
		    string ans = "";
		    deque<char> q;
		    int arr[27] = {0};
		    for(int i=0;i<A.length();i++){
		        if(!arr[A[i]-'a']){
		            q.push_back(A[i]);
		        }
		        arr[A[i] - 'a']++;
		        if(arr[q.front() - 'a'] == 1){
		            ans += q.front();
		        }
		        else{
		            while(!q.empty() and arr[q.front() - 'a'] != 1){
		                q.pop_front();
		            }
		            if(!q.empty()){
		                ans += q.front();
		            }else{
		                ans += "#";
		            }
		        }
		    }
		    return ans;
		}
    }
};