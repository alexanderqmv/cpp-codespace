#include <iostream>

using namespace std;

struct Node
{
	int data; // дата
	Node* left; // левое поддерево
	Node* right; // правое поддерево

	 
};


Node* createNode(int Data)
{
	Node* newNode = new Node;
	newNode->data = Data;
	newNode->left = nullptr;
	newNode->right = nullptr;

	return newNode;
	 
}

void deleteTree(Node* node) {
	if (node == nullptr) return;
	deleteTree(node->left);
	deleteTree(node->right);
	delete node;
	node = nullptr;
}

void printPreOrder(Node* node)
{
	if (node == nullptr) return;

	cout << node->data << " ";
	printPreOrder(node->left);
	printPreOrder(node->right);
}
void printTree(Node* node, int level) {
	if (node == nullptr) return;
	printTree(node->right, level + 1);
	for (int i = 0; i < level; i++) cout << "    ";
	cout << node->data << endl;
	printTree(node->left, level + 1);
}

int main(int argc, const char* argv[])
{

	Node* root = createNode(1);
	root->left = createNode(2);	
	root->right = createNode(3);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	
	//printPreOrder(root);
	cout << endl;
	printTree(root, 0);
	deleteTree(root);

	
	 

	return 0;
}
