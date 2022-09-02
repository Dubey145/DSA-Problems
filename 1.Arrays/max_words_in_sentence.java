import java.util.*;
public class max_words_in_sentence {
    public static int mostWordsFound(String[] sentences) {
        
        int max=1;
        for(int i = 0 ; i < sentences.length; i++){
            int counter = 1;
            for(int j = 0 ; j<sentences[i].length();j++){
                if(sentences[i].charAt(j) == ' '){
                    counter++;
                }
            }
            max = Math.max(counter,max);
        }
        return max;
    }
    public static void main(String[] args) {
        
    }
}
