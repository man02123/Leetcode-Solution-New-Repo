// Last updated: 08/12/2025, 17:30:28
class Solution {
public:
    bool checkIfPangram(string sentence) {
    vector<int> arr(26,0);
        for(int i=0;i<sentence.size();i++)
        {
            char c=sentence[i];
            int l=c-97;
            
            arr[l]++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]>0)
                continue;
            return false;
        }
        return true;
    }
};