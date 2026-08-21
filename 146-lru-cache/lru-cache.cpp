class LRUCache {
public:
    struct Node {
        int key, value;
        Node* prev;
        Node* next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = nullptr;
            next = nullptr;
        }
    };

    unordered_map<int, Node*> mpp;
    int capacity;
    Node* head;
    Node* tail;

    LRUCache(int capacity) {
        this->capacity = capacity;

        head = new Node(0, 0);
        tail = new Node(0, 0);

        head->next = tail;
        tail->prev = head;
    }

    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertAfterHead(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    int get(int key) {
        if (mpp.find(key) == mpp.end()) {
            return -1;
        }

        Node* node = mpp[key];

        remove(node);
        insertAfterHead(node);

        return node->value;
    }

    void put(int key, int value) {
        
        if (mpp.find(key) != mpp.end()) {
            Node* node = mpp[key];

            node->value = value;

            remove(node);
            insertAfterHead(node);

            return;
        }

        
        if (mpp.size() == capacity) {
            Node* lru = tail->prev;

            mpp.erase(lru->key);
            remove(lru);
            delete lru;
        }

        
        Node* node = new Node(key, value);

        mpp[key] = node;
        insertAfterHead(node);
    }
};