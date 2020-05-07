class LRUCache {
    
    list<pair<int,int> >dq;
    unordered_map<int,list<pair<int,int> >::iterator>mp;
    int size; 
public:
    LRUCache(int capacity) {
        
        size=capacity;
        
    }
    
    int get(int key) {
        
        if(mp.find(key)!=mp.end())
        {
            int value= (*mp[key]).second;
            dq.erase(mp[key]);
            dq.push_front({key,value});
            mp[key]=dq.begin();
            return value;
        }
        return -1;
        
    }
    
    void put(int key, int value) {
        
        
        
        
        if(mp.find(key)!=mp.end())
        {
            dq.erase(mp[key]);
             dq.push_front({key,value});
             mp[key]=dq.begin();
        }
        else
        {
        if(size==mp.size())
        {
             mp.erase(dq.back().first);
            dq.pop_back();
            dq.push_front({key,value});  
            mp[key]=dq.begin();
        }
        else
        {
            dq.push_front({key,value});
            mp[key]=dq.begin();
        }
        }
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */