// Last updated: 08/12/2025, 17:29:30
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int fcount=0;
        for(int i=0;i<sentences.size();i++)
        { 
            int count =1;
            for(int j=0;sentences[i][j]!='\0';j++)
            {
               
                if(sentences[i][j]==32)
                    count++;
            }
            if(count>fcount)
                fcount=count;

         }
        return fcount;
        
    }
};