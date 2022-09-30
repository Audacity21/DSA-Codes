package binary_tree;

public class RemoveLeaves {
    public static BinaryTreeNode<Integer> removeLeaves(BinaryTreeNode<Integer> root){
        if (root == null){
            return null;
        }

        if (root.left == null && root.right == null){
            return null;
        }

        // when the function returns null for the leaf nodes, we change the value of leaf nodes with null here
        root.left = removeLeaves(root.left);
        root.right = removeLeaves(root.right);

        return root;
    }
}
