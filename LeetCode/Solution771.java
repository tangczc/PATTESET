package com.leecode.cn;
/*
 *  �����ַ���J ����ʯͷ�б�ʯ�����ͣ�
 *  ���ַ��� S������ӵ�е�ʯͷ��
 *   S ��ÿ���ַ�������һ����ӵ�е�ʯͷ�����ͣ�
 *   ����֪����ӵ�е�ʯͷ���ж����Ǳ�ʯ
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
