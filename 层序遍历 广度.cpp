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
//	queue<BinaryTree*>q;//����
//
//	//�����
//	q.push(root);
//
//	//����
//	while (!q.empty()) {
//		//����
//		root = q.front();
//		q.pop();
//
//		//��ӡ
//		cout << root->val << " ";
//		//���ǿյ��������
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
//	//��
//	root = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->val = 1;
//
//	//������
//	root->left = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->val = 2;
//
//	root->right = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->right->val = 3;
//	root->right->left = NULL;
//	root->right->right = NULL;
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
//	BinaryTree* root=CreateTree();
//	LevelTraversal(root);
//}