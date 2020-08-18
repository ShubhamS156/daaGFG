/*
 * Find the KthSmallest element in O(h) where h is height of the binary tree
 * To find the kth smallest element we introduce another field in the structure of bst. These types of bsts are called augmented binary trees
 * we introduce a field called leftCount which tells the number of nodes in the left subtree of the current node
 * suppos if the ledtCount of the root node is 4 then it means that there are 4 nodes smaller than the root node. i.e. the proprty of a binary search tree.
 * This means that the root node is leftCount+1th smallest node.
 * To maintain the leftCount of a node modify the insert and delete function.
 * While inserting we search for the right subtree to go in so if we go in the left subtree increment the leftCount of the node by 1. If we go in the right subtree do
 * not increment the count. Same with deleting, if we go in the left subtree to delete the desired node decrement the leftCount of the node by 1.
 */

