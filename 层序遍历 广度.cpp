//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* left;
//	struct node* right;
//}BinaryTree;
//
//
//
//void LevelTraversal(BinaryTree* root) {
//	if (root==NULL) {
//		return;
//	}
//	queue<BinaryTree*>q;//队列
//
//	//根入队
//	q.push(root);
//
//	//处理
//	while (!q.empty()) {
//		//弹出
//		root = q.front();
//		q.pop();
//
//		//打印
//		cout << root->val << " ";
//		//将非空的左右入队
//		if (root->left!=NULL) {
//			q.push(root->left);
//		}if (root->right != NULL) {
//			q.push(root->right);
//		}
//	}
//}
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
//	root->right = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->right->val = 3;
//	root->right->left = NULL;
//	root->right->right = NULL;
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
//int main() {
//	BinaryTree* root=CreateTree();
//	LevelTraversal(root);
//}