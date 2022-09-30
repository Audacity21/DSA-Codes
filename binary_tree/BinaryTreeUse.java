package binary_tree;

import java.util.Scanner;

public class BinaryTreeUse {
    public static void main(String[] args) {
        BinaryTreeNode<Integer> root = LevelInputOfTree.levelInput();
        printTree(root);
        LevelInputOfTree.printLevel(root);
        System.out.println("Number of nodes in the tree: " + numNodes(root));
        System.out.println("Largest data in the tree: " + LargestData.largest(root));
        System.out.println("Height of the tree is: " + height(root));
        System.out.println("Number of leaf nodes: " + NumberOfLeafNodes.numLeaves(root));
        NodesAtDepthK.nodeAtK(root, 2);
        System.out.print(BalancedBinaryTree.isBinaryTreeBalanced(root));
    }

    // method to print the tree
    public static void printTree(BinaryTreeNode<Integer> root) {
        // base case
        if (root == null) {
            return;
        }

        System.out.print(root.data + ":");
        if (root.left != null) {
            System.out.print("L" + root.left.data + " ");
        }
        if (root.right != null) {
            System.out.print("R" + root.right.data);
        }
        System.out.println();
        printTree(root.left);
        printTree(root.right);
    }

    // method to get input of the tree
    public static BinaryTreeNode<Integer> takeInput(boolean isRoot, int parentData, boolean isLeft){
        if (isRoot) {
            System.out.print("Enter root data: ");
        } else {
            if (isLeft) {
                System.out.print("Enter left child of " + parentData + ": ");
            } else {
                System.out.print("Enter right child of " + parentData + ": ");
            }
        }
        Scanner scanner = new Scanner(System.in);
        int rootData = scanner.nextInt();

        if (rootData == -1){
            return null;
        }
        BinaryTreeNode<Integer> root = new BinaryTreeNode<>(rootData);
        BinaryTreeNode<Integer> leftChild = takeInput(false, rootData, true);
        BinaryTreeNode<Integer> rightChild = takeInput(false, rootData, false);
        root.left = leftChild;
        root.right = rightChild;
        return root;
    }

    // method to get the count of nodes
    public static int numNodes(BinaryTreeNode<Integer> root){
        if (root == null){
            return 0;
        }

        int leftNodeCount = numNodes(root.left);
        int rightNodeCount = numNodes(root.right);
        return 1 + leftNodeCount + rightNodeCount;
    }

    // method to get the height of the tree
    public static int height(BinaryTreeNode<Integer> root){
        if (root == null){
            return 0;
        }

        return Math.max(height(root.left), height(root.right)) + 1;
    }
}
