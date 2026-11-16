/*题目描述

输入一个字符串，将该字符串进行解密。解密规则：大写字母’A’,’B’,’C’,’D‘用’W’,’X’,’Y’,’Z‘代替，对于’E‘到’Z‘的字母，分别用原字母的前 4 个字符代替(例如用’A‘代替’E’)，其他字符保持不变。（要求使用指针实现)

输入描述

原字符串

输出描述

解密后的字符串

样例输入 1 

ABCDEFGHIJKLMNOPQRSTUVWXYZ
样例输出 1 

WXYZABCDEFGHIJKLMNOPQRSTUV
说明

原字符串可能包含空格
*/

#include <iostream>
using namespace std;

int main(){
    
    char arr[1000];
    cin.getline(arr,1000);
    for(char *p=arr;*p!='\0';++p){//指针遍历方式
        if((int)*p>=65&&(int)*p<=68){
            *p=(char)((int)*p+22);
        }
        else if((int)*p>=69&&(int)*p<=90){
            *p=(char)((int)*p-4);
        }
    }
   // for(char *p=arr;*p!='\0';++p){
   //     cout << *p;
   // }
    cout << arr;
    return 0;
}