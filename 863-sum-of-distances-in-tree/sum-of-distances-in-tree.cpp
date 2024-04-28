class Solution {
public: 
    int N;
    long root_result = 0;
    vector<int> count;

    int dfsRoot(unordered_map<int, vector<int>> &adj, int curr_node, int prev_node, int curr_depth){
        int total_count = 1;
        root_result += curr_depth;
        for(int &child : adj[curr_node]){
            if(child == prev_node) continue;

            total_count += dfsRoot(adj, child, curr_node, curr_depth + 1);
        }

        count[curr_node] = total_count;
        return total_count;
    }
    void DFS(unordered_map<int, vector<int>> &adj, int parent_node, int prev_node, vector<int> &result){
        for(int &child : adj[parent_node]){
            if(child == prev_node) continue;

            result[child] = result[parent_node] - count[child] + (N - count[child]);
            DFS(adj, child, parent_node, result);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        N = n;
        count.resize(n, 0);

        for(vector<int> &vec : edges){
            int u = vec[0];
            int v = vec[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }  

        root_result = 0;
        dfsRoot(adj, 0, -1, 0); //Graph, let assume parent  = 0, distance b/w root itself(Mainly distance), track previous root parent

        vector<int> result(n, 0);
        result[0] = root_result;

        DFS(adj, 0, -1, result);

        return result;
    }
};