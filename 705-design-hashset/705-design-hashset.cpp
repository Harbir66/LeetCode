class MyHashSet {
public:
        vector<bool> v;
    MyHashSet() {
        v.resize(1e6+1,0);
    }
    
    void add(int key) {
        v[key]=1;
    }
    
    void remove(int key) {
        // int i=0;
        v[key]=0;
        // v.erase(key);
    }
    
    bool contains(int key) {
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */