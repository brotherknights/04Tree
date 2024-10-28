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
//void PreorderCreate(BinaryTree**root) {//前序创建
//	int num;
//	scanf("%d",&num);
//	if (num==0) {
//		return;
//	}
//	//创建根
//	*root = (BinaryTree*)malloc(sizeof(BinaryTree));
//	(*root)->val = num;
//	(*root)->right = NULL;
//	(*root)->left = NULL;
//
//
//	//创建左子树
//	PreorderCreate(&((*root)->left));
//
//	//创建右子树
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