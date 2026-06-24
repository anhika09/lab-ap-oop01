/*2-3 Tree - data structure, example without STL*/
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Node {
    vector<int> keys;
    vector<Node*> children;
    bool isLeaf;

    Node() : isLeaf(true) {}
    Node(int key) : isLeaf(true) { keys.push_back(key); }
};

struct TwoThreeTree {
    Node* root;
    TwoThreeTree() : root(nullptr) {}

    void insert(int key) {
        if (!root) {
            root = new Node(key);
            return;
        }
        pair<int, Node*> result = insertRec(root, key);
        int promoted = result.first;
        Node* newRight = result.second;

        if (newRight) {
            Node* newRoot = new Node();
            newRoot->keys = { promoted };
            newRoot->children = { root, newRight };
            newRoot->isLeaf = false;
            root = newRoot;
        }
    }

    pair<int, Node*> insertRec(Node* node, int key) {
        if (node->isLeaf) {
            node->keys.push_back(key);
            sort(node->keys.begin(), node->keys.end());
            if (node->keys.size() == 3)
                return splitNode(node);
            return make_pair(0, (Node*)nullptr);
        }

        int i = 0;
        while (i < (int)node->keys.size() && key > node->keys[i]) i++;

        pair<int, Node*> res = insertRec(node->children[i], key);
        int promoted = res.first;
        Node* newChild = res.second;

        if (!newChild) return make_pair(0, (Node*)nullptr);

        node->keys.insert(node->keys.begin() + i, promoted);
        node->children.insert(node->children.begin() + i + 1, newChild);

        if (node->keys.size() == 3)
            return splitNode(node);
        return make_pair(0, (Node*)nullptr);
    }

    pair<int, Node*> splitNode(Node* node) {
        int mid = node->keys[1];

        Node* right = new Node();
        right->isLeaf = node->isLeaf;
        right->keys = { node->keys[2] };

        if (!node->isLeaf) {
            right->children = { node->children[2], node->children[3] };
            node->children = { node->children[0], node->children[1] };
        }

        node->keys = { node->keys[0] };
        return make_pair(mid, right);
    }

    bool search(int key) {
        return searchRec(root, key);
    }

    bool searchRec(Node* node, int key) {
        if (!node) return false;

        int i = 0;
        while (i < (int)node->keys.size() && key > node->keys[i]) {
            i++;
        }
        if (i < (int)node->keys.size() && node->keys[i] == key) {
            return true;
        }
        if (node->isLeaf) {
            return false;
        }
        return searchRec(node->children[i], key);
    }

    void remove(int key) {
        if (!root) return;
        removeRec(root, key);

        if (root->keys.empty()) {
            Node* old = root;
            root = root->isLeaf ? nullptr : root->children[0];
            delete old;
        }
    }

    bool removeRec(Node* node, int key) {
        if (node->isLeaf) {
            vector<int>::iterator it = find(node->keys.begin(), node->keys.end(), key);
            if (it == node->keys.end()) return false;
            node->keys.erase(it);
            return node->keys.empty();
        }

        int i = 0;
        while (i < (int)node->keys.size() && key > node->keys[i]) i++;

        bool deficit;
        if (i < (int)node->keys.size() && key == node->keys[i]) {
            Node* successor = node->children[i + 1];
            while (!successor->isLeaf) successor = successor->children[0];
            int successorKey = successor->keys[0];
            node->keys[i] = successorKey;
            deficit = removeRec(node->children[i + 1], successorKey);
            i = i + 1;
        }
        else {
            deficit = removeRec(node->children[i], key);
        }

        if (deficit) fixDeficit(node, i);
        return node->keys.empty();
    }

    void fixDeficit(Node* parent, int childIdx) {
        if (childIdx > 0 && parent->children[childIdx - 1]->keys.size() >= 2) {
            rotateRight(parent, childIdx);
            return;
        }
        if (childIdx < (int)parent->children.size() - 1 &&
            parent->children[childIdx + 1]->keys.size() >= 2) {
            rotateLeft(parent, childIdx);
            return;
        }
        if (childIdx > 0)
            merge(parent, childIdx - 1);
        else
            merge(parent, childIdx);
    }

    void rotateLeft(Node* parent, int childIdx) {
        Node* deficient = parent->children[childIdx];
        Node* rightSibling = parent->children[childIdx + 1];

        deficient->keys.push_back(parent->keys[childIdx]);
        parent->keys[childIdx] = rightSibling->keys.front();
        rightSibling->keys.erase(rightSibling->keys.begin());

        if (!rightSibling->isLeaf) {
            deficient->children.push_back(rightSibling->children.front());
            rightSibling->children.erase(rightSibling->children.begin());
        }
    }

    void rotateRight(Node* parent, int childIdx) {
        Node* deficient = parent->children[childIdx];
        Node* leftSibling = parent->children[childIdx - 1];

        deficient->keys.insert(deficient->keys.begin(), parent->keys[childIdx - 1]);
        parent->keys[childIdx - 1] = leftSibling->keys.back();
        leftSibling->keys.pop_back();

        if (!leftSibling->isLeaf) {
            deficient->children.insert(
                deficient->children.begin(), leftSibling->children.back());
            leftSibling->children.pop_back();
        }
    }

    void merge(Node* parent, int leftIdx) {
        Node* left = parent->children[leftIdx];
        Node* right = parent->children[leftIdx + 1];

        left->keys.push_back(parent->keys[leftIdx]);
        left->keys.insert(left->keys.end(), right->keys.begin(), right->keys.end());
        left->children.insert(left->children.end(),
            right->children.begin(), right->children.end());

        parent->keys.erase(parent->keys.begin() + leftIdx);
        parent->children.erase(parent->children.begin() + leftIdx + 1);

        delete right;
    }


    int nodeCounter = 0;

    string generateDOT(Node* node, ofstream& file) {
        string nodeId = "node" + to_string(nodeCounter++);
        string label = "<f0>";
        for (size_t i = 0; i < node->keys.size(); ++i)
            label += " | " + to_string(node->keys[i]) + " | <f" + to_string(i + 1) + ">";

        file << "    " << nodeId << " [label=\"" << label << "\"];\n";

        if (!node->isLeaf) {
            for (size_t i = 0; i < node->children.size(); ++i) {
                if (node->children[i]) {
                    string childId = generateDOT(node->children[i], file);
                    file << "    " << nodeId << ":f" << i << " -> " << childId << ";\n";
                }
            }
        }
        return nodeId;
    }

    void exportToDOT(const string& filename) {
        nodeCounter = 0;
        ofstream file(filename);
        if (!file.is_open()) return;
        file << "digraph G {\n";
        file << "    node [shape=record, style=filled, fillcolor=lightyellow];\n";
        if (root) generateDOT(root, file);
        file << "}\n";
    }
};

int main() {
    TwoThreeTree tree;
    int insert[] = { 47, 5, 24, 100, 36, 98, 5, 29, 45, 17, 10, 8 };
    int insertCount = sizeof(insert) / sizeof(insert[0]);

    for (int i = 0; i < insertCount; i++)
        tree.insert(insert[i]);
    tree.exportToDOT("treet.dot");

    int deleteKeys[] = { 100, 24, 98, 10 };
    int deleteCount = sizeof(deleteKeys) / sizeof(deleteKeys[0]);

    for (int i = 0; i < deleteCount; i++)
        tree.remove(deleteKeys[i]);
    tree.exportToDOT("tree_2.dot");
    return 0;
}