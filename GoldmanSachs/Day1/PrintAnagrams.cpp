class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        
unordered_map<string,vector<string>> mp;

for(string s:string_list){
string srt=s;
sort(srt.begin(),srt.end());

mp[srt].push_back(s);
}

vector<vector<string>> ans;

for(auto x:mp){
ans.push_back(x.second);
}

return ans;

    }
};