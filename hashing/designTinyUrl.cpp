class Solution {
public:
    
    unordered_map<string,string> urls;
    int counter = 1;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) 
    {
        string short_url = "tiny.cc/";
        short_url+=to_string(counter);
        counter++;
        urls[short_url] = longUrl;
        return short_url;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string long_url = urls[shortUrl];
        return long_url;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
