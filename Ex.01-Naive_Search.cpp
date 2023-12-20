#include<bits/stdc++.h>
using namespace std;

int main() {
  string text;
  string pattern;
  getline(cin,text);
  getline(cin,pattern);
  int x=pattern.size();
  for(int i=0;i<text.size();i++)
    {
      int pattern_index=0;
      while(pattern[pattern_index]==text[i+pattern_index]&&pattern_index<x)
      {
        pattern_index++;
      }
      if(pattern_index==x)
      {
        cout<<"Pattern Matched\n";
        break;
      }
    }

}
