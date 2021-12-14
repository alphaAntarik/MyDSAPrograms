#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
string revSt(string str){
      int i=0, n=str.length();
      for(i=0;i<n/2;i++){
            swap(str[i],str[n-i-1]);
      }
      return str;
}
int main(){
      
      string str="Antarik";
      
      cout<<revSt(str);

}

