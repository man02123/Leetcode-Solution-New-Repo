// Last updated: 08/12/2025, 17:35:22
class Solution {
public:
    vector<int> dx, dy;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dx = {0,-1,0,1};
        dy = {1,0,-1,0};
        vector<vector<int>> visited (image.size()+1 , vector<int> (image[0].size()+1 , 0)) ;

        int startColor = image[sr][sc];
        image[sr][sc] = color;
        dfs(image , sr , sc , color ,startColor, visited);
        return image;
    }

    void dfs (vector<vector<int>>& image  , int x , int y ,  int color ,int initial,  vector<vector<int>>& vis ) {
            
            for(int i =0 ;i < 4;i++){
                int nx = x + dx[i];
                int ny = y+dy[i];

                if(nx>=0 && ny>=0 && nx<image.size() && nx<image[0].size() && !vis[nx][ny] && image[nx][ny] == initial){
                    
                    image[nx][ny] = color;
                    vis[nx][ny] = 1;
                    dfs(image , nx, ny , color , initial , vis);
                    
                }
            }

    }
};