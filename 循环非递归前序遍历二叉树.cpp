//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* left;
//	struct node* right;
//}BinaryTree;
//
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
//
//void PreorderTraversal(BinaryTree*root) {
//	if (root == NULL)return;
//	stack<BinaryTree*>stack;
//	while (1) {
//		//����
//		//�ǿ���
//		if (root!=NULL) {
//			//��ӡ
//			cout << root->val << endl;
//			//��ջ
//			stack.push(root);
//			//������
//			root = root->left;
//		}
//		else {
//			//��ֹ���� ջ�Ƿ�ǿ�
//			if (stack.empty()) {
//				break;
//			}
//				//����
//				root =stack.top();
//				stack.pop();
//				root = root->right;
//
//		}
//	}
//}
//
//void InorderTraversal(BinaryTree* root) {
//	if (root == NULL)return;
//	stack<BinaryTree*>stack;
//	while (1) {
//		//����
//		//�ǿ���
//		if (root != NULL) {
//			
//			//��ջ
//			stack.push(root);
//			//������
//			root = root->left;
//		}
//		else {
//			//��ֹ���� ջ�Ƿ�ǿ�
//			if (stack.empty()) {
//				break;
//			}
//			//����
//			root = stack.top();
//			stack.pop();
//
//			//��ӡ
//			cout << root->val << endl;
//
//			root = root->right;
//
//		}
//	}
//}
//
//
//void LastorderTraversal(BinaryTree* Tree) {
//	if (Tree == NULL)return;
//	stack<BinaryTree*>stack;
//	while (1) {
//		if (Tree!=NULL) {
//			stack.push(Tree);
//			Tree = Tree->left;
//		}
//		else {
//
//		}
//	}
//}
//
//int main() {
//	BinaryTree* root;
//	root=CreateTree();
//	PreorderTraversal(root);
//}