class Solution {
    public boolean isIsomorphic(String s, String t) {
        if (s.length()!=t.length()){
            return false;
        }else{
            HashMap<Character, Character> hm1=new HashMap<Character, Character>();
            HashMap<Character, Character> hm2=new HashMap<Character, Character>();
            for (int i=0; i<s.length(); i++){
                char t_char=t.charAt(i);
                char s_char=s.charAt(i);
                
                if (hm1.containsKey(s_char)){
                    if (hm1.get(s_char)!=t_char){
                        return false;
                    }

                }else{
                    hm1.put(s_char, t_char);
                }
                
                if (hm2.containsKey(t_char)){
                    if (hm2.get(t_char)!=s_char){
                        return false;
                    }
                }else{
                    hm2.put(t_char,s_char);
                }
            }
        }
        return true;
    }
}