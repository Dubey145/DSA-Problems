import java.util.*;
class greatest_candies{
    public static List<Boolean> kidsWithCandies(int[] candies,int extraCandies){
        List<Boolean> result = new ArrayList<Boolean>();
        int max_val=candies[0];
        for(int i = 1; i < candies.length; i++ ){
            max_val = Math.max(max_val,candies[i]);
            //max = (max>candies[i])?max : candies[i];
        }
        //System.out.println(max_val);
        for(int i = 0 ; i < candies.length;i++){
            if(candies[i]+extraCandies>=max_val){
                result.add(true);
            }
            else
                result.add(false);
        }
        return result;
    }
    public static void main(String[] args) throws Exception{
            int candies[] = {2,3,5,1,3};
            List<Boolean> result = new ArrayList<Boolean>();
            result = kidsWithCandies(candies,3);
            for(int i = 0 ; i<result.size();i++){
                System.out.println(result.get(i));
            }
    }
}