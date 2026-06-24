/*AVL Tree- data structure, example without STL*/
#include <iostream>
#include <string>
using namespace std;
struct node{
	string key;
	unsigned char height;
	node* left;
	node* right;

	node(string s){
		key = s;
		right = nullptr;
		left = nullptr;
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
node* insert(node* p, string s) {
    if (!p) return new node(s);
    if (s < p->key)
        p->left = insert(p->left, s);
    else
        p->right = insert(p->right, s);
    return balance(p);
}
int Countnode(node* p, char c) {
    if (p == nullptr) {
        return 0;
    }
    int count = 0;
    if (!p->key.empty() && p->key[0] == c) {
        count = 1;
    }
    return count + Countnode(p->left, c) + Countnode(p->right, c);
}
int main() {
   node* root = nullptr;
   root = insert(root, "Apple");
   root = insert(root, "Banana");
   root = insert(root, "Mango");
   root = insert(root, "Avocado");
   root = insert(root, "Apricot");
   root = insert(root, "Cherry");
   cout << "AVL - Tree created!" << endl;
   char targetChar = 'A';
   int result = Countnode(root, targetChar);
   cout << "The number of nodes started with (A): "<< result << endl;
   return 0;
}