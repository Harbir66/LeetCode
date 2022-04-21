class MyHashSet {
public:
        vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key))
            v.push_back(key);
    }
    
    void remove(int key) {
        // int i=0;
        for(auto i=v.begin();i!=v.end();i++){
            if(*i==key) {
                v.erase(i);
                break;
            }
        }
        // v.erase(key);
    }
    
    bool contains(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i]==key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */