//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* left;
//	struct node* right;
//}BinaryTree;
//
//void AddNode(BinaryTree** tree, int num) {
//	//��ʱ�ڵ�
//	BinaryTree* temp = (BinaryTree*)malloc(sizeof(BinaryTree));
//	temp->val = num;
//	temp->left = NULL;
//	temp->right = NULL;
//
//	//�յ���
//	if (*tree == NULL) {
//		*tree = temp;
//		return;
//	}
//	//�ǿ���
//	BinaryTree* node = *tree;
//	while (node) {
//		if (node->val > num) {
//			//������
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
//			//��� 
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
//		//�����ֵ
//		AddNode(&root, arr[i]);
//	}
//}
//
//void InorderTraversal(BinaryTree* root,BinaryTree**head,BinaryTree**tail) {//������� �����
//	//�Ȳ���ӡ���ڵ� �ȴ�ӡ����ڵ�������� 
//	// ��ӡ���ڵ�����������õķ����ʹ�ӡ���ڵ�ķ�������ͬ�� 
//	// ֻ�������õĶ���һ�� ��������������������������ʱ ��ʼ����
//
//	//�������
//	if (root == NULL) {
//		return;
//	}	
//	//������
//	InorderTraversal(root->left,head,tail);
//
//	//��
//	if (*head == NULL) {
//		*head = root;
//	}
//	else {
//		(*tail)->right = root;//β�͵���һ�������ڵĽڵ�
//		root->left = *tail;//�ڵ��ǰһ���ǵ�ǰ��β��
//	}
//	*tail = root;//�����Ľڵ��Ϊ�µ�β��
//	
//
//	//������
//	InorderTraversal(root->right,head,tail);
//
//}
//
//
//
//int main() {
//
//}