#include"head.h"

typedef struct node {
	int val;
	struct node* left;
	struct node* right;
}BinaryTree;

//BinaryTree* CreateBstTree(BinaryTree* tree, int arr[], int length) {
//	BinaryTree* root;
//	for (int i = 0; i < length;i++) {
//		if (tree==NULL) {//是否有root节点
//			BinaryTree* tree = (BinaryTree*)malloc(sizeof(BinaryTree));
//			tree->val=arr[i];
//			break;
//		}
//		else {
//			//已经有root节点了 非空
//			while (1) {
//				//终止条件
//				if (arr[i]>(root->val)&&root->right==NULL) {//大于且为空 放右边
//					BinaryTree* temp = (BinaryTree*)malloc(sizeof(BinaryTree));
//					root->right = temp;
//					break;
//				}
//				else if(arr[i] > (root->val) && root->right != NULL){//大于 但不空
//					root = root->right;
//				}
//				else if (arr[i] < (root->val) && root->right == NULL) {//小于且为空
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
	//临时节点
	BinaryTree* temp = (BinaryTree*)malloc(sizeof(BinaryTree));
	temp->val = num;
	temp->left = NULL;
	temp->right = NULL;

	//空的树
	if (*tree == NULL) {
		*tree = temp;
		return;
	}
	//非空树
	BinaryTree* node = *tree;
	while (node) {
		if (node->val > num) {
			//左子树
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
			//相等 
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
		//添加数值
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
			//左子树
			*father = tree;
			tree = tree->left;
		}
		else {
			//右子树
			*father = tree;
			tree = tree->right;
		}
	}

}


void delNode(BinaryTree**tree,int num) {
	//查找
	BinaryTree* del = NULL;
	BinaryTree* father = NULL;

	search(*tree,num,&del,&father);
	if (del==NULL) {
		return;
	}
	//分析孩子个数
	//两个孩子
	BinaryTree* mark = NULL;
	if (del->left!=NULL&&del->right!=NULL) {
		//左子树最大值
		mark = del;
		father = del;
		del = del->left;

		//最右侧是左子树中最大的max
		while (del->right!=NULL) {
			father = del;
			del = del->right;
		}
		//替换 
	mark->val = del->val;
	}
	//零个或者一个孩子
	//根
	if (father == NULL) {
		*tree = del->left ? del->left : del->right;
		free(del);
		del = NULL;
		return;
	}
	//非根
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
//	//1.找到要删除的节点
//	BinaryTree*tree=LevelTraversal(root, num);
//	//2.分析孩子个数
//	while(1){
//		//孩子是0个
//		 if (tree->left == NULL && tree->right == NULL) {
//			 //直接删除
//			 
//		}
//		//孩子是1个 也就是叶子节点 爷爷和孙子连接上
//		 else if (tree->left!=NULL||tree->right!=NULL) {
//			
//		 }
//		//孩子是2个 //找左子树max（最左边 或者找右子树中的min（最右边 替换 删除节点
//		 else if (tree->left!=NULL&&tree->right!=NULL) {
//
//		 }
//	}
//}

//BinaryTree* LevelTraversal(BinaryTree* root, int num) {
//	if (root==NULL) {
//		return NULL;
//	}
//	queue<BinaryTree*>q;//队列
//
//	//根入队
//	q.push(root);
//
//	//处理
//	while (!q.empty()) {
//		//弹出
//		
//		root = q.front();
//		if (root->val=num) {
//			
//			break;
//		}
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
//	return root;
//}

