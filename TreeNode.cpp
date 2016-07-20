#include "TreeNode.h"
#include <iostream>

template <class type>
TreeNode<type>::TreeNode(type addValue) {
	tree = new TreeNode;
	tree->value(addValue);
	tree->left_child(NULL);
	tree->right_child(NULL);
}

template <class type>
TreeNode<type>::TreeNode() {
	tree = NULL
}

template <class type>
TreeNode<type>::~TreeNode() {
	if (tree != NULL) {
		del(tree->left_child);
		del(tree->right_child);
		delete tree;
		tree = NULL;
	}
	return;
}

template <class type>
void TreeNode<type>::addNode(type addValue) {
	if (tree == NULL) {
		TreeNode(addValue);
	}
	if (addValue < tree->value) {
		if (tree->left_child != NULL) {
			addNode(addValue, tree->left_child);
		}
		else {
			tree->left_child = new TreeNode;
			tree->left_child->left_child =
				tree->left_child->right_child = NULL;
			tree->left_child->value = addValue;
		}
	}

	if (addValue >= tree->value) {
		if (tree->right_child != NULL) {
			addNode(addValue, tree->right_child);
		}
		else {
			tree->right_child = new TreeNode;
			tree->right_child->left_child =
				tree->right_child->right_child = NULL;
			tree->right_child->value = addValue;
		}
	}
	return;
}

template <class type>
void TreeNode<type>::show() {
	if (treee != NULL) {
		show(tree->left_child);
		cout << tree->value << " ";
		show(tree->right_child);
	}
	return;
}