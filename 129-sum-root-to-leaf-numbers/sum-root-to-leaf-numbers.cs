/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode() {}
 *     public TreeNode(int val) { this.val = val; }
 *     public TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public int SumNumbers(TreeNode root) {
        GC.Collect();
        return Dfs(root, 0);
    }
    
    int Dfs(TreeNode node, int num) {
        if (node == null) return 0;
        if (node.left == null && node.right == null) {
            return num * 10 + node.val;
        }
        return Dfs(node.left, num * 10 + node.val) + Dfs(node.right, num * 10 + node.val);
    }
}