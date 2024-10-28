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
//	//根
//	root = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->val = 1;
//
//	//根的左
//	root->left = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->val = 2;
//
//	//根的右
//	root->right = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->right->val = 3;
//
//	//左的左
//	root->left->left = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->left->val = 4;
//	root->left->left->left = NULL;
//	root->left->left->right = NULL;
//
//	//左的右
//	root->left->right = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->right->val = 5;
//	root->left->right->left = NULL;
//	root->left->right->right = NULL;
//	return root;
//}
//
////void Traversal(BinaryTree* root) {//遍历
////	cout <<root;
////	if (root->left == NULL) {
////		root = root->right;
////	}
////	root = root->left;
////
////}
//void PreorderTraversal(BinaryTree* root) {//前序遍历 根左右
//	//参数检测
//	if (root==NULL) {
//		return;
//	}
//	//根
//	printf("%d ",root->val);
//	//左子树
//	PreorderTraversal(root->left);
//	//右子树
//	PreorderTraversal(root->right);
//	
//}
//
//void InorderTraversal(BinaryTree* root) {//中序遍历 左根右
//	//先不打印根节点 先打印完根节点的左子树 
//	// 打印根节点的左子树调用的方法和打印根节点的方法是相同的 
//	// 只不过调用的对象不一样 当左子树的左子树再无左子树时 开始回溯
//
//	
//	//参数检测
//	if (root == NULL) {
//		return;
//	}	
//	//左子树
//	InorderTraversal(root->left);
//
//	//根
//	printf("%d ", root->val);
//
//	//右子树
//	InorderTraversal(root->right);
//
//}
//
//void LastorderTraversal(BinaryTree* root) {//后序遍历 左右根
//	//参数检测
//	if (root == NULL) {
//		return;
//	}
//
//	//左子树
//	LastorderTraversal(root->left);
//	//右子树
//	LastorderTraversal(root->right);
//	//根
//	printf("%d ", root->val);
//}
//
//
//int main() {
//	BinaryTree*root= CreateTree();
//	PreorderTraversal(root);
//	return 0;
//
//}