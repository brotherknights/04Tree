#include"head.h"

typedef struct node {
	int val;
	struct node* left;
	struct node* right;
}BinaryTree;

//BinaryTree* CreateBstTree(BinaryTree* tree, int arr[], int length) {
//	BinaryTree* root;
//	for (int i = 0; i < length;i++) {
//		if (tree==NULL) {//�Ƿ���root�ڵ�
//			BinaryTree* tree = (BinaryTree*)malloc(sizeof(BinaryTree));
//			tree->val=arr[i];
//			break;
//		}
//		else {
//			//�Ѿ���root�ڵ��� �ǿ�
//			while (1) {
//				//��ֹ����
//				if (arr[i]>(root->val)&&root->right==NULL) {//������Ϊ�� ���ұ�
//					BinaryTree* temp = (BinaryTree*)malloc(sizeof(BinaryTree));
//					root->right = temp;
//					break;
//				}
//				else if(arr[i] > (root->val) && root->right != NULL){//���� ������
//					root = root->right;
//				}
//				else if (arr[i] < (root->val) && root->right == NULL) {//С����Ϊ��
//					BinaryTree* temp = (BinaryTree*)malloc(sizeof(BinaryTree));
//					root->left = temp;
//					break;
//				}
//				else if (arr[i] < (root->val) && root->right != NULL) {
//					root = root->left;
//				}
//			}
//			
//
//		}
//	}
//}

void AddNode(BinaryTree** tree, int num) {
	//��ʱ�ڵ�
	BinaryTree* temp = (BinaryTree*)malloc(sizeof(BinaryTree));
	temp->val = num;
	temp->left = NULL;
	temp->right = NULL;

	//�յ���
	if (*tree == NULL) {
		*tree = temp;
		return;
	}
	//�ǿ���
	BinaryTree* node = *tree;
	while (node) {
		if (node->val > num) {
			//������
			if (node->left == NULL) {
				node->left = temp;
				return;
			}
			node = node->left;
		}
		else if (node->val<num) {
			if (node->right == NULL) {
				node->right = temp;
				return;
			}
			node = node->right;
		}
		else {
			//��� 
			printf("data error");
			free(temp);
			temp = NULL;
		}
	}

}

void InorederTraversal(BinaryTree*tree) {
	if (tree == NULL) {
		return;
	}
	InorederTraversal(tree->left);
	printf("%d/n",tree->val);
	InorederTraversal(tree->right);
}

BinaryTree* CreateBstTree(int arr[],int length) {
	BinaryTree* root;
	int i;
	for (i = 0; i < length;i++) {
		//�����ֵ
		AddNode(&root, arr[i]);
	}
}

void search(BinaryTree *tree,int num,BinaryTree **del,BinaryTree**father) {
	if (tree==NULL) {
		return;
	}
	while (tree) {
		if (tree->val==num) {
			*del = tree;
			return;
		}
		else if (tree->val>num) {
			//������
			*father = tree;
			tree = tree->left;
		}
		else {
			//������
			*father = tree;
			tree = tree->right;
		}
	}

}


void delNode(BinaryTree**tree,int num) {
	//����
	BinaryTree* del = NULL;
	BinaryTree* father = NULL;

	search(*tree,num,&del,&father);
	if (del==NULL) {
		return;
	}
	//�������Ӹ���
	//��������
	BinaryTree* mark = NULL;
	if (del->left!=NULL&&del->right!=NULL) {
		//���������ֵ
		mark = del;
		father = del;
		del = del->left;

		//���Ҳ���������������max
		while (del->right!=NULL) {
			father = del;
			del = del->right;
		}
		//�滻 
	mark->val = del->val;
	}
	//�������һ������
	//��
	if (father == NULL) {
		*tree = del->left ? del->left : del->right;
		free(del);
		del = NULL;
		return;
	}
	//�Ǹ�
	if (del==father->left)
	{
		father->left = del->left ? del->left : del->right;
	}
	else {
		father->right = del->left ? del->left : del->right;
	}free(del);
	del = NULL;

}


//BinaryTree* DeleteBstTree(BinaryTree* root,int num) {
//	//1.�ҵ�Ҫɾ���Ľڵ�
//	BinaryTree*tree=LevelTraversal(root, num);
//	//2.�������Ӹ���
//	while(1){
//		//������0��
//		 if (tree->left == NULL && tree->right == NULL) {
//			 //ֱ��ɾ��
//			 
//		}
//		//������1�� Ҳ����Ҷ�ӽڵ� үү������������
//		 else if (tree->left!=NULL||tree->right!=NULL) {
//			
//		 }
//		//������2�� //��������max������� �������������е�min�����ұ� �滻 ɾ���ڵ�
//		 else if (tree->left!=NULL&&tree->right!=NULL) {
//
//		 }
//	}
//}

//BinaryTree* LevelTraversal(BinaryTree* root, int num) {
//	if (root==NULL) {
//		return NULL;
//	}
//	queue<BinaryTree*>q;//����
//
//	//�����
//	q.push(root);
//
//	//����
//	while (!q.empty()) {
//		//����
//		
//		root = q.front();
//		if (root->val=num) {
//			
//			break;
//		}
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
//	return root;
//}

