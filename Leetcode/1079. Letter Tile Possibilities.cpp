class Solution {
public:
    void permute(string tiles,string temp,int n,vector<int>&vis,set<string>&st){
        for(int i=0;i<n;i++){
            if(!vis[i]){
                temp+=tiles[i];
                st.insert(temp);
                vis[i]=1;
                permute(tiles,temp,n,vis,st);
                temp.pop_back();
                vis[i]=0;
            }
        }
    }
    int numTilePossibilities(string tiles) {
        int n=tiles.size();
        vector<int>vis(n,0);
        set<string>st;
        permute(tiles,"",n,vis,st);
        return st.size();
    }
};
