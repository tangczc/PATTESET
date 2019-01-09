package com.leecode.cn;
/*
 *  给定字符串J 代表石头中宝石的类型，
 *  和字符串 S代表你拥有的石头。
 *   S 中每个字符代表了一种你拥有的石头的类型，
 *   你想知道你拥有的石头中有多少是宝石
 *   input:J=z S=ZZZ
 *   output:0
 *   
 */
public class Solution771 {
	public int numJewelsInStones(String J, String S) {
        int index = 0;
        char[] j1 = J.toCharArray();
        char[] s1 = S.toCharArray();
        for(int i = 0; i < j1.length;i++) {
        	for(int n = 0;n < s1.length;n++) {
        		if(j1[i] == s1[n]) {
        			index += 1;
        		}
        	}
        }
        return index;
        
    }
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Solution771 solution = new Solution771();
		System.out.println(solution.numJewelsInStones("z", "ZZZZZ"));
	}

}
