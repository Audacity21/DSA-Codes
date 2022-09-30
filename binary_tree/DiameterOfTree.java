package binary_tree;

public class DiameterOfTree {
    public static int diameterOfTree(BinaryTreeNode<Integer> root){
        int[] max = new int[1];
        height(root, max);
        return max[0];
    }

    private static int height(BinaryTreeNode<Integer> root, int[] max){
        if (root == null){
            return 0;
        }

        int leftHeight = height(root.left, max);
        int rightHeight = height(root.right, max);

        max[0] = Math.max(max[0], rightHeight + leftHeight);

        return 1 + Math.max(leftHeight, rightHeight);
    }
}