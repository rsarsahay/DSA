void permute(vector<string> &ans,string s,int ind){
	        if(ind==s.size()){
	            ans.push_back(s);
	            return;
	        }
	        
	        for(int i=ind;i<s.size();i++){
	            swap(s[ind],s[i]);
	            permute(ans,s,ind+1);
	            swap(s[ind],s[i]);
	        }
	        
	    }
	    
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    permute(ans,S,0);
		    sort(ans.begin(),ans.end());
		    ans.erase(unique(ans.begin(),ans.end()),ans.end());
		    return ans;
		}