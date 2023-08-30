class Solution {
    public boolean canPlaceFlowers(int[] flowerbed, int n) {
        
        boolean prev=false;
        int max_num=0;
        for (int i=0; i<(flowerbed.length); i++){
            if (flowerbed[i]==0){
                
                boolean left=(i==0 || flowerbed[i-1]==0);
                boolean right=(i==flowerbed.length-1 || flowerbed[i+1]==0);
                
                if (left & right){
                    max_num++;
                    flowerbed[i]=1;
                }

            }
        }

        return (max_num>=n?true:false);
    }
}