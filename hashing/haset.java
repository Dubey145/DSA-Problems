import java.net.Inet4Address;
import java.util.*;
public class haset{

    public static void main(String[] args) {
        /*
            add operation 
            delete operation
            contains operation
            all are O(1) on an average 
        */   
        HashSet<Integer> h = new HashSet<Integer>();
        h.add(1);
        h.add(2);
        h.add(2); // copies will be stored
        h.add(3);
        h.add(4);

        System.out.println(h.contains(3));

        h.remove(2);

        System.out.println(h.contains(2));

        Iterator<Integer> i = h.iterator(); // to iterate
        while(i.hasNext()){
            System.out.println(i.next());
        } // printing order can be different

        //size
        System.out.println(h.size());
        for(Integer s : h){
            System.out.println(s); // simpler method of printing all items using for each loop
        }
        // h.clear() will clear all items in the hashset
    }

}