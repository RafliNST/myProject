#include <iostream>

struct Node {
  int data;
  Node* left;
  Node* right;
};

Node* createNode(int data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}
  
Node* insert(Node* root, int data) {
  if (root == NULL) {
    return createNode(data);
  } 
  
  if (data < root->data) {
    root->left = insert(root->left, data);
  } else if (data > root->data) {
    root->right = insert(root->right, data);
  }
  
  return root;
}

void inOrderTraversal(Node* root) {
  if (root == NULL) {
    return;
  }
  inOrderTraversal(root->left);
  std::cout << root->data << " ";
  inOrderTraversal(root->right);
}

int main() {
  Node* root = NULL;
  root = insert(root, 74);
  insert(root, 32);
  insert(root, 65);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);
  insert(root, 80);
  insert(root, 84);
  insert(root, -43);
  insert(root, 10000);
  insert(root, 0);

  inOrderTraversal(root);

  delete root;
  return 0;
}
