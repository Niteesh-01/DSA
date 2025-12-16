class MyHashMap {
public:
    vector<int> v; //this brute force approach takes sc=O(10^6)
    int size;

    MyHashMap() {
        size=1e6+1;  //10 ki power 6 +1
        v.resize(size);  //v ke size ko size ke brabar kr diye
        fill(begin(v),end(v),-1);  //initially filled with-1
    }
    
    void put(int key, int value) {
        v[key]=value;
    }
    
    int get(int key) {
        return v[key];
    }
    
    void remove(int key) {
        v[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */