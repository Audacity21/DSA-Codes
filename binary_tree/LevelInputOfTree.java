package binary_tree;


import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class LevelInputOfTree {
    public static BinaryTreeNode<Integer> levelInput() {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter root data: ");
        int rootData = scanner.nextInt();

        if (rootData == -1) {
            return null;
        }

        BinaryTreeNode<Integer> root = new BinaryTreeNode<>(rootData);
        Queue<BinaryTreeNode<Integer>> pendingChild = new LinkedList<>();

        pendingChild.add(root);

        while (!pendingChild.isEmpty()) {
            BinaryTreeNode<Integer> front = pendingChild.poll();
            System.out.print("Enter left child of " + front.data + ": ");
            int left = scanner.nextInt();
            if (left != -1) {
                BinaryTreeNode<Integer> leftChild = new BinaryTreeNode<>(left);
                front.left = leftChild;
                pendingChild.add(leftChild);
            }

            System.out.print("Enter right child of " + front.data + ": ");
            int right = scanner.nextInt();
            if (right != -1) {
                BinaryTreeNode<Integer> rightChild = new BinaryTreeNode<>(right);
                front.right = rightChild;
                pendingChild.add(rightChild);
            }
        }

        return root;
    }

    public static void printLevel(BinaryTreeNode<Integer> root) {
        Queue<BinaryTreeNode<Integer>> pendingNodes = new LinkedList<>();
        pendingNodes.add(root);

        while (!pendingNodes.isEmpty()) {
            BinaryTreeNode<Integer> front = pendingNodes.poll();
            if (front == null) {
                System.out.println();
                if (!pendingNodes.isEmpty()) {
                    pendingNodes.add(null);
                }
            } else {
                System.out.print(front.data + ":L:");
                if (front.left != null) {
                    pendingNodes.add(front.left);
                    System.out.print(front.left.data + ",R:");
                } else {
                    System.out.print(-1 + ",R:");
                }
                if (front.right != null){
                    pendingNodes.add(front.right);
                    System.out.println(front.right.data);
                } else {
                    System.out.println(-1);
                }
            }
        }
    }
}
