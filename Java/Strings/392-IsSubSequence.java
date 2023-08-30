class Solution {
    public boolean isSubsequence(String s, String t) {
        if (s.length()>0){
            int letter_count=0;
            String sub_string="";
            for (int i=0; i<t.length(); i++){
                String letter=t.substring(i, i+1);
                if (letter.equals(s.substring(letter_count,letter_count+1))){
                    sub_string=sub_string+letter;
                    letter_count+=1;
                    if (sub_string.equals(s)){
                        return true;
                    }else if (letter_count==s.length()){
                        return false;
                    }

                }
            }
            return false;
        }else{
            return true;
        }
        
    }
}