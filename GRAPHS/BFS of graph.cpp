// T.C =O(V+E)

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V];
        //for(int i=0; i<V; i++)
        //visited[i]=false;
        queue<int>q;
        q.push(0);
        visited[0]=true;
        
        vector<int> ans;
        while(q.empty()==false)
        {
            int temp = q.front();
            q.pop();
            ans.push_back(temp);
            for(int i : adj[temp])
            {
                if(visited[i]==false)
                {
                    visited[i]=true;
                    q.push(i);
                }
            }
        }
        return ans;
        
    }
};