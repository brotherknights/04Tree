//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* left;
//	struct node* right;
//}BinaryTree;
//
//int i = 0;
//
//void PreorderCreate(BinaryTree**root) {//ǰ�򴴽�
//	int num;
//	scanf("%d",&num);
//	if (num==0) {
//		return;
//	}
//	//������
//	*root = (BinaryTree*)malloc(sizeof(BinaryTree));
//	(*root)->val = num;
//	(*root)->right = NULL;
//	(*root)->left = NULL;
//
//
//	//����������
//	PreorderCreate(&((*root)->left));
//
//	//����������
//	PreorderCreate(&((*root)->right));
//
//}
//BinaryTree* createTree() {
//	int num;
//	scanf("%d",&num);
//	if (num == 0) {
//		return NULL;
//	}
//	BinaryTree* root = (BinaryTree*)malloc(sizeof(BinaryTree*));
//	root->val = num;
//	root->left = NULL;
//	root->right = NULL;
//
//	root->left = createTree();
//
//	root->right = createTree();
//	return root;
//}
//
//int main() {
//
//}