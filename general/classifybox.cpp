class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) 
    {
        string cat1 = "", cat2 = "";
        
        if(length >= 10000 || width >= 10000 || height >= 10000 || ((long long)length * width * height) >= 1000000000)    
            cat1 = "Bulky";
        if(mass >= 100)
            cat2 = "Heavy";
        
        if(cat1 == "Bulky" && cat2 == "Heavy")
            return "Both";
        else if(cat1 != "Bulky" && cat2 != "Heavy")
            return "Neither";
        else if(cat1 == "Bulky")
            return cat1;
        else
            return cat2;
    }
};
