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
//	//������
//	root->right = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->right->val = 3;
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
////void Traversal(BinaryTree* root) {//����
////	cout <<root;
////	if (root->left == NULL) {
////		root = root->right;
////	}
////	root = root->left;
////
////}
//void PreorderTraversal(BinaryTree* root) {//ǰ����� ������
//	//�������
//	if (root==NULL) {
//		return;
//	}
//	//��
//	printf("%d ",root->val);
//	//������
//	PreorderTraversal(root->left);
//	//������
//	PreorderTraversal(root->right);
//	
//}
//
//void InorderTraversal(BinaryTree* root) {//������� �����
//	//�Ȳ���ӡ���ڵ� �ȴ�ӡ����ڵ�������� 
//	// ��ӡ���ڵ�����������õķ����ʹ�ӡ���ڵ�ķ�������ͬ�� 
//	// ֻ�������õĶ���һ�� ��������������������������ʱ ��ʼ����
//
//	
//	//�������
//	if (root == NULL) {
//		return;
//	}	
//	//������
//	InorderTraversal(root->left);
//
//	//��
//	printf("%d ", root->val);
//
//	//������
//	InorderTraversal(root->right);
//
//}
//
//void LastorderTraversal(BinaryTree* root) {//������� ���Ҹ�
//	//�������
//	if (root == NULL) {
//		return;
//	}
//
//	//������
//	LastorderTraversal(root->left);
//	//������
//	LastorderTraversal(root->right);
//	//��
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