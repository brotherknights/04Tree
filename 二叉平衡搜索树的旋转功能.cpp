#include"head.h"

typedef struct node {
	int val;
	struct node* father;
	struct node* left;
	struct node* right;
}BinaryTree;



BinaryTree* CreateTree() {
	BinaryTree* root = NULL;

	//��
	root = (BinaryTree*)malloc(sizeof(BinaryTree));
	root->val = 1;
	root->father = NULL;

	//������
	root->left = (BinaryTree*)malloc(sizeof(BinaryTree));
	root->left->father = root;
	root->left->val = 2;

	//������
	root->right = (BinaryTree*)malloc(sizeof(BinaryTree));
	root->right->father = root;
	root->right->val = 3;

	//�����
	root->left->left = (BinaryTree*)malloc(sizeof(BinaryTree));
	root->left->left->father = root->left;
	root->left->left->val = 4;
	root->left->left->left = NULL;
	root->left->left->right = NULL;

	//�����
	root->left->right = (BinaryTree*)malloc(sizeof(BinaryTree));
	root->left->right->father = root->left;
	root->left->right->val = 5;
	root->left->right->left = NULL;
	root->left->right->right = NULL;
	return root;
}

BinaryTree* rightrevolve(BinaryTree*root) {
	BinaryTree* temp = root->left->right;
	BinaryTree* temp2 = root;
	BinaryTree* temp3 = root->left;
	if (root->left->right) {//���e����
		root->left = root->left->right;
		temp3->right = root;
		root = temp3;
		root->right->father = root;
		root->right->left->father = root->right;

		

	}
}



int main() {

}