/*AVL Tree Example*/
#include <iostream> 
using namespace std; 
struct node {
    char key;             
    unsigned char height;  
    node* left;            
    node* right;          

    node(char k) {
        key = k;          
        left = nullptr;   
        right = nullptr;  
        height = 1;        
    }
};
unsigned char height(node* p) {
    return p ? p->height : 0; 
}
int bfactor(node* p) {
    return height(p->left) - height(p->right); 
}
void fixheight(node* p) {
    unsigned char hl = height(p->left);  
    unsigned char hr = height(p->right); 
    p->height = (hl > hr ? hl : hr) + 1; 
}
node* rotateright(node* p) {
    node* q = p->left;    
    p->left = q->right;  
    q->right = p;         
    fixheight(p);        
    fixheight(q);        
    return q;             
}
node* rotateleft(node* q) {
    node* p = q->right;   
    q->right = p->left;  
    p->left = q;          
    fixheight(q);         
    fixheight(p);         
    return p;             
}

node* balance(node* p) {
    fixheight(p);         
    if (bfactor(p) == 2) { 
        if (bfactor(p->left) < 0) 
            p->left = rotateleft(p->left);
        return rotateright(p);      
    }
    if (bfactor(p) == -2) { 
        if (bfactor(p->right) > 0)  
            p->right = rotateright(p->right);
        return rotateleft(p);    
    }
    return p; 
}
node* insert(node* p, char k) {
    if (!p) return new node(k); 
    if (k < p->key)
        p->left = insert(p->left, k); 
    else
        p->right = insert(p->right, k); 
    return balance(p); 
}
char findMin(node* p) {
    if (p == nullptr) {           
        return '\0';             
    }
    while (p->left != nullptr) {
        p = p->left;              
    }
    return p->key;            
}
int main() {
    node* root = nullptr; 
    root = insert(root, 'K');
    root = insert(root, 'O');
    root = insert(root, 'M'); 
    root = insert(root, 'A'); 
    root = insert(root, 'R');

    cout << "AVL - Tree created!" << endl;
    char minElement = findMin(root);

    if (minElement != '\0') {
        cout << "The min element of tree : " << minElement << endl;
    }
    else {
        cout << "Tree is empty" << endl;
    }
    return 0; 
}