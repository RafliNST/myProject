#include <iostream>
#include <sstream>
#include <deque>
#include <iomanip>
#include <cmath>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinarySearchTree {
private:
    Node* root;

    Node* insert(Node* root, int data) {
        if (root == nullptr) {
            Node* newNode = new Node;
            newNode->data = data;
            newNode->left = newNode->right = nullptr;
            return newNode;
        }

        if (data < root->data) {
            root->left = insert(root->left, data);
        } else if (data > root->data) {
            root->right = insert(root->right, data);
        }

        return root;
    }

    Node* findMin(Node* root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    Node* remove(Node* root, int data) {
        if (root == nullptr) {
            return root;
        }

        if (data < root->data) {
            root->left = remove(root->left, data);
        } else if (data > root->data) {
            root->right = remove(root->right, data);
        } else {
            // Node with only one child or no child
            if (root->left == nullptr) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (root->right == nullptr) {
                Node* temp = root->left;
                delete root;
                return temp;
            }

            // Node with two children, get the inorder successor
            Node* temp = findMin(root->right);

            // Copy the inorder successor's content to this node
            root->data = temp->data;

            // Delete the inorder successor
            root->right = remove(root->right, temp->data);
        }

        return root;
    }

    int maxHeight(Node* p) {
        if (!p) return 0;
        int leftHeight = maxHeight(p->left);
        int rightHeight = maxHeight(p->right);
        return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
    }

    string intToString(int val) {
        ostringstream ss;
        ss << val;
        return ss.str();
    }

    void printBranches(int branchLen, int nodeSpaceLen, int startLen, int nodesInThisLevel, const deque<Node*>& nodesQueue) {
        deque<Node*>::const_iterator iter = nodesQueue.begin();
        for (int i = 0; i < nodesInThisLevel / 2; i++) {
            cout << ((i == 0) ? setw(startLen - 1) : setw(nodeSpaceLen - 2)) << "" << ((*iter++) ? "/" : " ");
            cout << setw(2 * branchLen + 2) << "" << ((*iter++) ? "\\" : " ");
        }
        cout << endl;
    }

    void printNodes(int branchLen, int nodeSpaceLen, int startLen, int nodesInThisLevel, const deque<Node*>& nodesQueue) {
        deque<Node*>::const_iterator iter = nodesQueue.begin();
        for (int i = 0; i < nodesInThisLevel; i++, iter++) {
            cout << ((i == 0) ? setw(startLen) : setw(nodeSpaceLen)) << "" << ((*iter && (*iter)->left) ? setfill('_') : setfill(' '));
            cout << setw(branchLen + 2) << ((*iter) ? intToString((*iter)->data) : "");
            cout << ((*iter && (*iter)->right) ? setfill('_') : setfill(' ')) << setw(branchLen) << "" << setfill(' ');
        }
        cout << endl;
    }

    void printLeaves(int indentSpace, int level, int nodesInThisLevel, const deque<Node*>& nodesQueue) {
        deque<Node*>::const_iterator iter = nodesQueue.begin();
        for (int i = 0; i < nodesInThisLevel; i++, iter++) {
            cout << ((i == 0) ? setw(indentSpace + 2) : setw(2 * level + 2)) << ((*iter) ? intToString((*iter)->data) : "");
        }
        cout << endl;
    }

    void printPretty(Node* root, int level, int indentSpace) {
        int h = maxHeight(root);
        int nodesInThisLevel = 1;

        int branchLen = 2 * ((int)pow(2.0, h) - 1) - (3 - level) * (int)pow(2.0, h - 1);
        int nodeSpaceLen = 2 + (level + 1) * (int)pow(2.0, h);
        int startLen = branchLen + (3 - level) + indentSpace;

        deque<Node*> nodesQueue;
        nodesQueue.push_back(root);
        for (int r = 1; r < h; r++) {
            printBranches(branchLen, nodeSpaceLen, startLen, nodesInThisLevel, nodesQueue);
            branchLen = branchLen / 2 - 1;
            nodeSpaceLen = nodeSpaceLen / 2 + 1;
            startLen = branchLen + (3 - level) + indentSpace;
            printNodes(branchLen, nodeSpaceLen, startLen, nodesInThisLevel, nodesQueue);

            for (int i = 0; i < nodesInThisLevel; i++) {
                Node* currNode = nodesQueue.front();
                nodesQueue.pop_front();
                if (currNode) {
                    nodesQueue.push_back(currNode->left);
                    nodesQueue.push_back(currNode->right);
                } else {
                    nodesQueue.push_back(NULL);
                    nodesQueue.push_back(NULL);
                }
            }
            nodesInThisLevel *= 2;
        }
        printBranches(branchLen, nodeSpaceLen, startLen, nodesInThisLevel, nodesQueue);
        printLeaves(indentSpace, level, nodesInThisLevel, nodesQueue);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void insert(int data) {
        root = insert(root, data);
    }

    void remove(int data) {
        root = remove(root, data);
    }

    void display() {
        cout << "Binary Search Tree (Pretty print):" << endl;
        printPretty(root, 1, 0);
    }
};

int main() {
    BinarySearchTree bst;
    int choice, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Masukkan Elemen\n";
        cout << "2. Lihat BST\n";
        cout << "3. Hapus Elemen\n";
        cout << "4. Keluar\n";
        cout << "Masukkan Pilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan Nilai Untuk Dimasukkan: ";
                cin >> value;
                bst.insert(value);
                break;
            case 2:
                bst.display();
                break;
            case 3:
                cout << "Masukkan Nilai Untuk Dihapus: ";
                cin >> value;
                bst.remove(value);
                break;
            case 4:
                cout << "Keluar Dari Prograam.\n";
                break;
            default:
                cout << "Pilihan Tidak Sesuai. Silahkan Coba Lagiv.\n";
        }
    } while (choice != 4);

    return 0;
}