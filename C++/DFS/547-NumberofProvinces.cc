class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool> marked(isConnected.size(),false);
        int count=0;

        for (int i=0; i<isConnected.size(); i++){
            if (!marked[i]){
                count+=1;
                traverse(isConnected,marked,i);
            }
        }
        return count;
    }

    void traverse(vector<vector<int>>& graph, vector<bool>& marked, int i){
        marked[i]=true;

        for (int j=0; j<graph[i].size(); j++){
            if (!marked[j] && graph[i][j]==1){
                traverse(graph,marked,j);
            }
        }
    }
};