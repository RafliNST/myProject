#include <iostream>

class Node {
public:
    int key;
    Node* left;
    Node* right;
    Node* parent;

    Node(int k) : key(k), left(nullptr), right(nullptr), parent(nullptr) {}
};

Node* insert(Node* root, int key) {
    if (root == nullptr) {
        return new Node(key);
    } else {
        if (key < root->key) {
            root->left = insert(root->left, key);
            root->left->parent = root;
        } else {
            root->right = insert(root->right, key);
            root->right->parent = root;
        }
    }
    return root;
}

void printTree(Node* node) {
    if (node) {
        std::cout << "Node: " << node->key;
        if (node->parent) {
            std::cout << ", Parent: " << node->parent->key;
        }
        if (node->left) {
            std::cout << ", Left Child: " << node->left->key;
        }
        if (node->right) {
            std::cout << ", Right Child: " << node->right->key;
        }
        std::cout << std::endl;
        printTree(node->left);
        printTree(node->right);
    }
}

int main() {
    Node* root = nullptr;
    int keys[] = {15, 6, 18, 3, 7, 17, 20, 2, 4, 13, 9};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; ++i) {
        root = insert(root, keys[i]);
    }

    std::cout << "Binary Search Tree:" << std::endl;
    printTree(root);

    return 0;
}
