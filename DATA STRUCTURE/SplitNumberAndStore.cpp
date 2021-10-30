#include<iostream>
using namespace std;

struct node {
    char data;
    node *next;
};

void displayList(node *head) {
    while(head != NULL) {
        cout << head->data << "  ";
        head = head->next;
    }
}

void insertNode(node** head, char ch) {
    node* newNode = NULL;
    newNode = new node();
    newNode->data = ch;

    if(*head == NULL) {
        newNode->next = NULL;
        *head = newNode;
    }
    else {
        newNode->next = (*head);
        (*head) = newNode;
    }
}

void splitWord(node ** head, string s) {
    int size = s.size() - 1;
    for(int i = size; i >= 0; i--) {
        insertNode(head,s[i]);
    }
}

int main()
{
    string word = "Hello";
    node * head = NULL;
    splitWord(&head,word);
    displayList(head);
    return 0;
}
