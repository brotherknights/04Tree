//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* left;
//	struct node* right;
//}BinaryTree;
//
//BinaryTree* CreateTree() {
//	BinaryTree* root = NULL;
//
//	//��
//	root = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->val = 1;
//
//	//������
//	root->left = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->val = 2;
//
//	//�����
//	root->left->left = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->left->val = 4;
//	root->left->left->left = NULL;
//	root->left->left->right = NULL;
//
//	//�����
//	root->left->right = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->right->val = 5;
//	root->left->right->left = NULL;
//	root->left->right->right = NULL;
//	return root;
//}
//
//int main() {
//	BinaryTree* CreateTree();
//}