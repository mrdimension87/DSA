class BrowserHistory {
private:
    struct Node{
        string data;
        Node* next;
        Node* prev;
        Node(string s){
            data =s;
            next = nullptr;
            prev = nullptr;
        }
    };

public:
    Node* site;
    BrowserHistory(string homepage) {
        site = new Node(homepage);
    }
    
    void visit(string url) {
        Node* temp = site->next;
        while(temp){
            Node* del = temp;
            temp=temp->next;
            delete del;
        }

        Node* curr = new Node(url);
        curr->prev= site;
        site->next = curr;
        site = curr;
    }
    
    string back(int steps) {
        while(steps && site->prev){
            site = site-> prev;
            steps--;
        }
        return site->data;
    }
    
    string forward(int steps) {
        while(steps && site->next){
            site=site->next;
            steps--;
        }
        return site->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */