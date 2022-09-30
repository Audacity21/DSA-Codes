package binary_tree;

public class NodesAtDepthK {
    public static void nodeAtK(BinaryTreeNode<Integer> root, int k){
        if (root == null){
            return;
        }

        if (k == 0) {
            System.out.println(root.data);
            return;
        }

        nodeAtK(root.left, k - 1);
        nodeAtK(root.right, k - 1);
    }
}
