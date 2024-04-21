class UnionFind { // usual UnionFind class
    vector<int> root, rank;
public:
    UnionFind(int n) : root(n), rank(n) {
        rank.assign(n, 1);
        iota(root.begin(), root.end(), 0);
    }

    int Find(int x) {//Path compression
        if (x == root[x])
            return x;
        else
            return root[x] = Find(root[x]);
    }

    void Union(int x, int y) {//Union by rank
        int rX = Find(x), rY = Find(y);
        if (rX == rY)
            return;
        if (rank[rX] > rank[rY])
            swap(rX, rY);
        root[rX] = rY;
        if (rank[rX] == rank[rY])
            rank[rY]++;
    }
    bool connected(int x, int y) { return Find(x) == Find(y); }
};

class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        UnionFind G(n);// graph G with n vertices
        for (auto& e: edges){
            G.Union(e[0], e[1]);// edge between
        }
        return G.connected(source, destination);
    }
};
