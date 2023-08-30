class Solution {
    public int lengthOfLongestSubstring(String s) {
        List<String> tracker=new ArrayList<>();
        String finals=new String();
        String current=new String();


        for (int i=0; i<s.length(); i++){
            tracker=new ArrayList<>();
            current=new String();

            for (int j=i; j<s.length(); j++){
                if (tracker.contains(s.substring(j,j+1))){
                    break;
                }else{
                    tracker.add(s.substring(j,j+1));
                    current+=s.substring(j,j+1);
                    if (current.length()>finals.length()){
                        finals=current;
                    }
                }
            }

        }
        return finals.length();
        
    }
}