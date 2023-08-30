class Solution {
    public boolean isPalindrome(int x) {
        String x_string=Integer.toString(x);
        
        int middle=x_string.length()/2;
        
        for (int i=0; i<middle; i++){
            if (x_string.charAt(i)!=x_string.charAt(x_string.length()-i-1)){
                return false;
            }
        }
        return true;
    }
}