/*My family Tree - SBT*/
#include <iostream>
#include <string>
using namespace std;
struct TreeNode {
    string name;       
    TreeNode* left;    
    TreeNode* right;  
}; 
TreeNode* CreateNode(string name) {
    TreeNode* newNode = new TreeNode; 
    newNode->name = name;             
    newNode->left = NULL;             
    newNode->right = NULL;            
    return newNode;
}
void PrintTree(TreeNode* current, int level) {
    if (current != NULL) {
        PrintTree(current->right, level + 1);
        for (int i = 0; i < level; i++) {
            cout << "\t\t";
        }
        cout << current->name << endl;
        PrintTree(current->left, level + 1);
    }
}
void ClearTree(TreeNode* current) {
    if (current != NULL) {
        ClearTree(current->left); 
        ClearTree(current->right); 
        delete current;            
    }
}
int main() {
    setlocale(LC_ALL, "Ukrainian");
    TreeNode* root = CreateNode("Анна Гончарук");
    root->left = CreateNode("Оксана Гончарук"); 
    root->right = CreateNode("Миколай Гончарук"); 
    root->left->left = CreateNode("Валерiй Сташко");  
    root->left->right = CreateNode("Тетяна Сташко");  
    root->right->left = CreateNode("Василь Гончарук");     
    root->right->right = CreateNode("Валентина Гончарук");
    cout << "--- Моє родинне дерево (злiва на право) ---" << endl << endl;
    PrintTree(root, 0);
    cout << endl << "--------------------------------------------------------" << endl;
    ClearTree(root);
    root = NULL;
    return 0;
}
