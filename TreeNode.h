#pragma once
#ifndef GUARD_TreeNode_h
#define GUARD_TreeNode_h

template <class type>
class TreeNode {
protected:
	type value;
	TreeNode *left_child;
	TreeNode *right_child;
public:
	TreeNode<type> tree;
	TreeNode(type);
	TreeNode();
	~TreeNode();

	void addNode(type);
	void show();
};

#endif