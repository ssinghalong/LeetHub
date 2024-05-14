class Solution {
public:
    int dodo(vector<vector<int>> &grid,int m,int n,int i,int j){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0){
            return 0;
        }
        
        int temp = grid[i][j];
        grid[i][j]=0;

        int lefsum = dodo(grid,m,n,i-1,j);
        int rigsum = dodo(grid,m,n,i+1,j);
        int downsum = dodo(grid,m,n,i,j-1);
        int upsum = dodo(grid,m,n,i,j+1);
        
        grid[i][j]=temp;
        return temp+max(lefsum,max(rigsum,max(downsum,upsum)));
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ma=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ma=max(ma,dodo(grid,m,n,i,j));
            }
        }
        
        return ma;
    }
};