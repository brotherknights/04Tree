//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* left;
//	struct node* right;
//}BinaryTree;
//
//void AddNode(BinaryTree** tree, int num) {
//	//临时节点
//	BinaryTree* temp = (BinaryTree*)malloc(sizeof(BinaryTree));
//	temp->val = num;
//	temp->left = NULL;
//	temp->right = NULL;
//
//	//空的树
//	if (*tree == NULL) {
//		*tree = temp;
//		return;
//	}
//	//非空树
//	BinaryTree* node = *tree;
//	while (node) {
//		if (node->val > num) {
//			//左子树
//			if (node->left == NULL) {
//				node->left = temp;
//				return;
//			}
//			node = node->left;
//		}
//		else if (node->val < num) {
//			if (node->right == NULL) {
//				node->right = temp;
//				return;
//			}
//			node = node->right;
//		}
//		else {
//			//相等 
//			printf("data error");
//			free(temp);
//			temp = NULL;
//		}
//	}
//
//}
//
//
//BinaryTree* CreateBstTree(int arr[], int length) {
//	BinaryTree* root;
//	int i;
//	for (i = 0; i < length; i++) {
//		//添加数值
//		AddNode(&root, arr[i]);
//	}
//}
//
//void InorderTraversal(BinaryTree* root,BinaryTree**head,BinaryTree**tail) {//中序遍历 左根右
//	//先不打印根节点 先打印完根节点的左子树 
//	// 打印根节点的左子树调用的方法和打印根节点的方法是相同的 
//	// 只不过调用的对象不一样 当左子树的左子树再无左子树时 开始回溯
//
//	//参数检测
//	if (root == NULL) {
//		return;
//	}	
//	//左子树
//	InorderTraversal(root->left,head,tail);
//
//	//根
//	if (*head == NULL) {
//		*head = root;
//	}
//	else {
//		(*tail)->right = root;//尾巴的下一个是现在的节点
//		root->left = *tail;//节点的前一个是当前的尾巴
//	}
//	*tail = root;//新来的节点成为新的尾巴
//	
//
//	//右子树
//	InorderTraversal(root->right,head,tail);
//
//}
//
//
//
//int main() {
//
//}