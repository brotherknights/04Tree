//#include"head.h"
//
//typedef struct node {
//	int val;
//	struct node* left;
//	struct node* right;
//}BinaryTree;
//
//BinaryTree* Create(int arr[],int length) {
//	BinaryTree* root;//���ڵ�
//	int i = 0;
//	root = (BinaryTree*)malloc(sizeof(BinaryTree)*length);
//	for (i; i <= length - 1;i++) {
//		root[i].val = arr[i];
//		if (2 * i + 1 <= length-1) {
//			root[i].left = &(root[2 * i + 1]);
//		}
//		else
//		{
//			root[i].left = NULL;
//		}
//		 if (2 * i + 2 <= length - 1) {
//			 
//			 root[i].right = & (root[2 * i + 2]) ;
//			
//		 }
//		 else {
//			 
//			 root[i].right = NULL;
//		 }
//		
//	}
//	return root;
//}
//
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
//int main() {
//	BinaryTree* root;
//	int arr[] = { 1,2,3,4,5 };
//	root=Create(arr,5);
//	PreorderTraversal(root);
//}