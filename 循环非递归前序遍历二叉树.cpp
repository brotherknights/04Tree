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
//	//根
//	root = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->val = 1;
//
//	//根的左
//	root->left = (BinaryTree*)malloc(sizeof(BinaryTree));
//	root->left->val = 2;
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
//
//void PreorderTraversal(BinaryTree*root) {
//	if (root == NULL)return;
//	stack<BinaryTree*>stack;
//	while (1) {
//		//遍历
//		//非空树
//		if (root!=NULL) {
//			//打印
//			cout << root->val << endl;
//			//入栈
//			stack.push(root);
//			//左子树
//			root = root->left;
//		}
//		else {
//			//终止条件 栈是否非空
//			if (stack.empty()) {
//				break;
//			}
//				//弹出
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
//		//遍历
//		//非空树
//		if (root != NULL) {
//			
//			//入栈
//			stack.push(root);
//			//左子树
//			root = root->left;
//		}
//		else {
//			//终止条件 栈是否非空
//			if (stack.empty()) {
//				break;
//			}
//			//弹出
//			root = stack.top();
//			stack.pop();
//
//			//打印
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