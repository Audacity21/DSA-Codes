package binary_tree;

public class InsertDuplicateNode {
    public static void insertDuplicate(BinaryTreeNode<Integer> root){
        if (root == null){
            return;
        }

        BinaryTreeNode<Integer> newNode = new BinaryTreeNode<>(root.data);
        BinaryTreeNode<Integer> rootLeft = root.left;
        root.left = newNode;
        newNode.left = rootLeft;
        insertDuplicate(rootLeft);
        insertDuplicate(root.right);
    }
}
