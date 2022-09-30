package binary_tree;

public class LargestData {
    public static int largest(BinaryTreeNode<Integer> root){
        if (root == null){
            return -1;
        }

        int largestLeft = largest(root.left);
        int largestRight = largest(root.right);

        return Math.max(root.data, Math.max(largestLeft, largestRight));
    }
}
