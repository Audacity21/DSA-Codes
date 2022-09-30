package binary_tree;

public class NumberOfLeafNodes {
    public static int numLeaves(BinaryTreeNode<Integer> root){
        if (root == null){
            return 0;
        }

        if (root.left == null && root.right == null){
            return 1;
        }

        return numLeaves(root.left) + numLeaves(root.right);
    }
}
