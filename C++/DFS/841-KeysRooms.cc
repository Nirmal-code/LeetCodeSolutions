class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> marked_rooms;
        for (int i=0; i<rooms.size(); i++){
            marked_rooms.push_back(false);
        }
        int count=0;
        dfs(rooms,marked_rooms,0,count);

        return count==rooms.size()-1;

    }

    void dfs(vector<vector<int>>& rooms, vector<bool>& marked, int room, int &count){
        marked[room]=true;
        for (int i=0; i<rooms[room].size(); i++){
            if (!marked[rooms[room][i]]){
                count+=1;
                dfs(rooms,marked,rooms[room][i],count);
            }
        }
    }
};