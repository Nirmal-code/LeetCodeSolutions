class Solution {
    public boolean isValid(String s) {
        Stack <String> open=new Stack<String>();

        for (int i=0; i<s.length(); i++){
            String val=s.substring(i, i+1);

            switch(val){
                case ("("):
                case ("["):
                case ("{"):
                    open.push(val);
                    break;
                case ("}"):
                    if (open.size()==0){
                        return false;
                    }else if (!open.peek().equals("{")){
                        return false;
                    }else{
                        open.pop();
                    }
                    break;
                case (")"):
                    if (open.size()==0){
                        return false;
                    }else if (!open.peek().equals("(")){
                        return false;
                    }else{
                        open.pop();
                    }
                    break;
                case ("]"):
                    if (open.size()==0){
                        return false;
                    }else if (!open.peek().equals("[")){
                        return false;
                    }else{
                        open.pop();
                    }
                    break;
                    
            }
        }
        if (open.size()==0){
            return true;
        }else{
            return false;
        }


    }
}