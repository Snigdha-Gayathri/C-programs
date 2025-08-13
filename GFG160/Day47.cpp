class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        if(arr.empty()) return 0;
        unordered_set<int>s;
        for(int num:arr)
        {
            s.insert(num);
        }
        int maxLen=0;
        
        
        for(int num:s)
        {
            if(s.find(num-1)==s.end())
            {
                int currentNum=num;
                int currentStreak=1;
                while(s.find(currentNum+1)!=s.end())
                {
                    currentNum++;
                    currentStreak++;
                }
                maxLen=max(maxLen,currentStreak);
            }
        }
        return maxLen;
        
    }
};
