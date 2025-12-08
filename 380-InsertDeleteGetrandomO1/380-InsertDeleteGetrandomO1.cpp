// Last updated: 08/12/2025, 17:37:18
class RandomizedSet {
public:unordered_map<int,int> mp;
    vector<int> temp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())return false;
        temp.push_back(val);
        mp[val]=temp.size()-1;
        
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)!=mp.end())
        {
           temp[mp[val]]=temp.back();
            mp[temp.back()]=mp[val];
            temp.pop_back();
            mp.erase(val);
            
            return true;
        }
        
       return false; 
        
    }
    
    int getRandom() {
return temp[rand()%temp.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */