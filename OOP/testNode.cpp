#include <iostream>

class Node {
    public:
      int data;
      Node* next;

      Node(int data) {
          Node::data = data;
          this->next = nullptr;
      }
};

int main() {
  Node* head = new Node(7);
  head->next = new Node(2);
  head->next->next = new Node(3);
  head->next->next->next = new Node(5);
  head->next->next->next->next = new Node(21);
  head->next->next->next->next->next = new Node(-10);

  Node* current = head;
  while (current != nullptr) {
    std::cout << current->data << " ";
    current = current->next;
  }
  std::cout << std::endl;
  return 0;
}
