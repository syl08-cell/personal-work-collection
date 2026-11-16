/*题目描述

统计每个元音字母在字符串中出现的次数。

输入描述

输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的只包括小写字母的字符串。

输出描述

对于每个测试实例输出5行，格式如下：

a:num1
e:num2
i:num3
o:num4
u:num5

多个测试实例之间由一个空行隔开。
请特别注意：最后一块输出后面没有空行。

样例输入 1 

2
aeiou
my name is ignatius
样例输出 1 

a:1
e:1
i:1
o:1
u:1

a:2
e:1
i:3
o:0
u:1
*/

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    cin.ignore();//清理'\n'
    char chars[100];
    for(int i=0;i<n;++i){
        cin.getline(chars,100);//cin遇到空格就停
        int suma,sume,sumi,sumo,sumu;
        suma=sume=sumi=sumo=sumu=0;
        for(int j=0;j<100&&(chars[j]!='\0');++j){
           switch(chars[j]){
               case 'a':suma+=1;break;
           	   case 'e':sume+=1;break;
               case 'i':sumi+=1;break;
               case 'o':sumo+=1;break;
               case 'u':sumu+=1;break;
               default:break;    
           }
            
        
        
        }
               cout << "a:" << suma << "\n";
               cout << "e:" << sume << "\n";
               cout << "i:" << sumi << "\n";
               cout << "o:" << sumo << "\n";
               cout << "u:" << sumu << "\n";
               if(i!=n-1){cout << "\n";}
          
        
        
    }
    
    return 0;
}