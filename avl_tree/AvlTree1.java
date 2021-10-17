/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    int lh;
    int rh;
    TreeNode(int data) {
        val = data;
        lh = 0;
        rh = 0;
    }
}
class AvlTree1
{
    public static TreeNode insertNode(TreeNode root,int val) {
        if(root == null) {
            return new TreeNode(val);
        }
        if(val < root.val) {
            root.left = insertNode(root.left, val); 
            root.lh = 1 + Math.max(root.left.lh, root.left.rh);
        } else {
            root.right = insertNode(root.right, val);
            root.rh = 1 + Math.max(root.right.lh, root.right.rh);
        }
        if(root.lh - root.rh == 2) {
            // left heavy
            // check left node's balace
            if(root.left.lh - root.right.rh == 1) {
                // ll rotation
                System.out.println("LL Rotation : " + root.val);
                root = llRotation(root);
            } else {
                // lr rotation
                System.out.println("LR Rotation : " + root.val);
                root.left = rrRotation(root.left);
                root.lh = 1 + Math.max(root.left.lh, root.left.rh);
                root = llRotation(root);
            }
        } else if(root.rh - root.lh == 2) {
            // right heavy
            if(root.right.rh - root.right.lh == 1) {
                // rr rotation
                System.out.println("RR Rotation : " + root.val);
                root = rrRotation(root);
            } else {
                // rl rotation
                System.out.println("RL Rotation : " + root.val);
                root.right = llRotation(root.right);
                root.rh = 1 + Math.max(root.right.lh, root.right.rh);
                root = rrRotation(root);
            }
            
        }
        return root;
    }
    
    public static TreeNode llRotation(TreeNode root) {
        TreeNode left = root.left;
        root.lh = left.right != null ? 1 + Math.max(left.right.lh, left.right.rh) : 0;
        left.rh = 1 + Math.max(root.lh, root.rh);
        root.left = left.right;
        left.right = root;
        return left;
    }
    
    public static TreeNode rrRotation(TreeNode root) {
        TreeNode right = root.right;
        root.rh = right.left != null ? 1 + Math.max(right.left.lh, right.left.rh) : 0;
        right.lh = 1 + Math.max(root.lh, root.rh);
        root.right = right.left;
        right.left = root;
        return right;
    }
    
    public static void traverseTree(TreeNode root) {
        if(root == null) return;
        traverseTree(root.left);
        System.out.print(root.val+" ");
        traverseTree(root.right);
    }
    
    public static void levelOrderTraversal(TreeNode root) {
        if(root == null) return;
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);
        while(!queue.isEmpty()) {
            int size = queue.size();
            for(int i=0;i<size;i++) {
                TreeNode poll = queue.poll();
                System.out.print(poll.val+"(" + poll.lh + "," + poll.rh +")");
                if(poll.left != null) 
                queue.add(poll.left);
                if(poll.right != null) 
                queue.add(poll.right);
            }
            System.out.println("");
        }
    }
    
	public static void main (String[] args) throws java.lang.Exception
	{
		TreeNode root = null;
		root = insertNode(root,0);
		root = insertNode(root,-1);
		root = insertNode(root,2);
		root = insertNode(root,3);
		root = insertNode(root,6);
		root = insertNode(root,1);
		root = insertNode(root,5);
		levelOrderTraversal(root);
	}
}
