#include<iostream>
#include<string>
class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    vector<int>computeLPS(string &pat)
    {
        int n=pat.size();
        vector<int>lps(n,0);
        int len=0;
        int i=1;
        while(i<n)
        {
            if(pat[i]==pat[len])
            {
                lps[i++]=++len;
            }
            else
            {
                if(len!=0)
                {
                    len=lps[len-1];
                }
                else
                {
                    lps[i++]=0;
                }
            }
            
        }
        return lps;
    }
    
    bool kmpSearch(string &txt,string &pat)
    {
        int N=txt.size();
        int M=pat.size();
        vector<int>lps=computeLPS(pat);
        int i=0;
        int j=0;
        while(i<N)
        {
            if(txt[i]==pat[j])
            {
                i++;
                j++;
                if(j==M) return true;
            }
            else
            {
                if(j!=0) j=lps[j-1];
                else i++;
            }
        }
        return false;
    }
    bool areRotations(string &s1, string &s2) {
        // Your code here
        if(s1.length()!=s2.length())
        {
            return false;
        }
        string doubled=s1+s1;
        return kmpSearch(doubled,s2);
       
    }
    
};