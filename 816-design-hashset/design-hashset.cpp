class MyHashSet {
public:    
    struct ListNode {
        int val;
        ListNode* next;
        ListNode(int x){
            val=x;
            next=nullptr;
        }
    };

public:
    ListNode* head = nullptr;

    MyHashSet() {
        
    }
    
    void add(int key) {
        if(!contains(key)){
            ListNode* dummy = new ListNode(key);
            dummy->next = head;
            head = dummy;
        }
    }
    
    void remove(int key) {
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr!=nullptr){
            if(curr->val == key){
                if(prev == nullptr){
                    head = curr->next;
                }
                else{
                    prev->next = curr->next;
                }

                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }
    
    bool contains(int key) {
        ListNode* curr = head;
        while(curr != nullptr){
            if(curr->val == key){
                return true;
            }
            curr=curr->next;
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