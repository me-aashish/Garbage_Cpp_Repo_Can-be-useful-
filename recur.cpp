#include <iostream>
using namespace std;


struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};

// insert node at the front
void insertFront(struct Node** head, int data) {
  // allocate memory for newNode
  struct Node* newNode = new Node;

  newNode->data = data;
    newNode->next = (*head);
  newNode->prev = NULL;

  if ((*head) != NULL)
    (*head)->prev = newNode;

  (*head) = newNode;
}
void insertEnd(struct Node** head, int data) {
  struct Node* newNode = new Node;
  newNode->data = data;
  newNode->next = NULL;
  struct Node* temp = *head;
  if (*head == NULL) {
    newNode->prev = NULL;
    *head = newNode;
    return;
  }
   
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = newNode;
  newNode->prev = temp;
}

void deleteNode(struct Node** head, struct Node* del_node) {
  if (*head == NULL || del_node == NULL)
    return;
  if (*head == del_node)
    *head = del_node->next;
  if (del_node->next != NULL)
    del_node->next->prev = del_node->prev;
  if (del_node->prev != NULL)
    del_node->prev->next = del_node->next;
  free(del_node);
}

void displayList(struct Node* node) {
  struct Node* last;
  cout << "HEAD->";
  while (node != NULL) {
    cout << node->data << "->";
    last = node;
    node = node->next;
  }
  if (node == NULL)
    cout << "HEAD\n";
}

int main() {
  struct Node* head = NULL;

  insertFront(&head, 1);
  cout << "Inserted 1 at the start of doubly linked list\n";
  insertFront(&head, 6);
  cout << "Inserted 6 at the start of doubly linked list\n";
  insertFront(&head, 10);
  cout << "Inserted 10 at the start of doubly linked list\n";
  insertEnd(&head, 5);
  cout << "Inserted 5 at the end of doubly linked list\n";
  insertEnd(&head, 9);
  cout << "Inserted 9 at the end of doubly linked list\n";
  cout << "Current Doubly Linked List is : ";
  displayList(head);
  deleteNode(&head, head->next->next->next->next);
  cout << "After deleting last element, Current Doubly Linked List is : ";
  displayList(head);
  deleteNode(&head, head);
  cout << "After deleting first element, Current Doubly Linked List is : ";
  displayList(head);

  return 0;
}