/*Binary Tree - data structure, example without STL*/
#include <iostream>
#include <string>

using namespace std;
struct Tree {
    int key;
    string text;
    Tree* left;
    Tree* right;
};
Tree* root = nullptr;
void Addtree(Tree** current, int key, string text) {
    if (*current != nullptr) {
        if (key < (*current)->key)
            Addtree(&(*current)->left, key, text); 
        else if (key > (*current)->key)
            Addtree(&(*current)->right, key, text); 
    }
    else {
        *current = new Tree;
        (*current)->key = key;
        (*current)->text = text;
        (*current)->left = nullptr; 
        (*current)->right = nullptr; 
    }
}
void Showtree(Tree* current, int level) {
    if (current != nullptr) {
        Showtree(current->right, level + 1); 
        for (int i = 0; i < level; i++) cout << "\t";
        cout << current->text << endl; 
        Showtree(current->left, level + 1); 
    }
}
int Delete(Tree** current, int key) {
    int r = 0;
    if (*current != nullptr) {
        if (key < (*current)->key)
            r = Delete(&(*current)->left, key);
        else if (key > (*current)->key)
            r = Delete(&(*current)->right, key);
        else {
            Tree* tmp = *current;
            if (tmp->right == nullptr)
                *current = tmp->left;
            else if (tmp->left == nullptr)
                *current = tmp->right;
            delete tmp; 
            r = 1; 
        }
    }
    return r;
}
void Clear(Tree** current) {
    if (*current != nullptr) {
        Clear(&(*current)->left);
        Clear(&(*current)->right);
        delete* current; 
        *current = nullptr;
    }
}
int main() {
    setlocale(LC_ALL, "Ukrainian");

    Addtree(&root, 50, "IF");
    Addtree(&root, 30, "<�����>");
    Addtree(&root, 70, "THEN");
    Addtree(&root, 60, "<�������� 1>");
    Addtree(&root, 80, "ELSE");
    Addtree(&root, 90, "<�������� 2>");

    cout << "����i���� ��������� (��������� ������):\n" << endl;
    Showtree(root, 0);

    cout << "\n----------------------------------\n" << endl;
    cout << "��������� �i��� ELSE (���� 80)..." << endl;
    Delete(&root, 90);
    Delete(&root, 80);
    cout << "\n��������� �i��� ��������� �i��� ELSE:\n" << endl;
    Showtree(root, 0);

    Clear(&root);
    return 0;
}