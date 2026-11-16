/*题目描述

Write a program which reads a word W and a text T , and prints the number of word W which appears in text T. T consists of string T 
i
​
  separated by space characters and newlines. Count the number of T 
i
​
  which equals to W. The word and text are case insensitive.

输入描述

In the first line,the word W is given. In the following lines,the text T is given separated by space characters and newlines."END_OF_TEXT" indicates the end of the text.

输出描述

Print the number of W in the text.

样例输入 1 

computer
Nurtures computer scientists and highly-skilled computer engineers
who will create and exploit "knowledge" for the new era.
Provides an outstanding computer environment.
END_OF_TEXT
样例输出 1 

3
说明

The length of W≤10,W consists of lower case letters.
The length of T in a line ≤1000.
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	    
    char w[11];
    cin >> w;
    cin.ignore();
    char t[1001];
    int sum = 0;
    do{
        cin.getline(t,1001);
        for(int i=0;t[i]!='\0';++i){
           if(t[i]==w[0]){
               int j = 1;
               for(;w[j]!='\0';++j){
                   if(t[i+j]!=w[j]){
                       break;
                   }
               }
               if(w[j]=='\0'){
                   ++sum;
               }
           }
        }
       
    }while(strcmp(t, "END_OF_TEXT") != 0);
    
        
    cout << sum;    
    return 0;    
}