/*
Problem statement
Given a binary tree having ‘N’ number of nodes. Your task is to find the sum of all left nodes present in the input binary tree. That is, you need to take the sum of all nodes which are the left child of some node.
Note :
1. A binary tree is a tree in which each node can have at most two children. 
2. The given tree will be non-empty i.e the number of non-NULL nodes will always be greater than or equal to 1.
3. Multiple nodes in the tree can have the same values, all values in the tree will be positive.
*/
#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	}
*/
/*
template <typename T>
void Sum_left(BinaryTreeNode<T> *root, long long &sum){
	queue<BinaryTreeNode<T> *>q;
	q.push(root);
	while(! q.empty()){
		BinaryTreeNode<T> *f = q.front();
		q.pop();

		if(f->left != NULL){
			sum += f->left->data;
		}

		if(f->left != NULL)
			q.push(f->left);
		if(f->right != NULL)
			q.push(f->right);
	}
}
template <typename T>
long long leftSum(BinaryTreeNode<T> *root)
{
	long long sum = 0;
	Sum_left(root,sum);
	return sum;
}
*/