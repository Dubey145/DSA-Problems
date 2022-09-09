import java.util.*;
public class hashmap {
    public static void main(String[] args) {
        //key value pairs 
        HashMap<String, Integer> hm = new HashMap<String, Integer>();
        hm.put("game1",20);
        hm.put("game2",40);
        hm.put("game3",30);
    
        System.out.println(hm);
        //to traverse 
        for(Map.Entry<String,Integer> e : hm.entrySet()){
            System.out.println(e.getKey() + " " + e.getValue());
        } // output order can differ

        //containsKey

        if(hm.containsKey("game2")){
            //
        }
        if(hm.containsValue(20)){

        }
        hm.remove("game2"); // it removes the value of the key to be removed otherwise null if the key is not present

        hm.get("game1"); //gets the value of game1

        hm.size();

    }
}
