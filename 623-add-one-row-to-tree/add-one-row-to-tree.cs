/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    public TreeNode AddOneRow(TreeNode root, int val, int depth) {
        addnode(ref root,val,depth-1);
        GC.Collect();
        return root;
    }

    void addnode(ref TreeNode root,int val,int depth){
        if(root==null) return; 
        if(depth==0){
            TreeNode tg = new TreeNode(val);
            tg.left = root;
            root=tg;
        }
        if(depth!=1){
            addnode(ref root.left,val,depth-1);
            addnode(ref root.right,val,depth-1);
        }
        if(depth==1) {
            TreeNode t1 = root.left;
            TreeNode t2 = root.right;
            TreeNode te1 = new TreeNode(val);
            TreeNode te2 = new TreeNode(val);
            root.right = te1;
            root.left = te2;
            te1.right=t2;
            te2.left=t1;
        }
    }
}