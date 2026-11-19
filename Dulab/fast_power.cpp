/*题目描述

快速幂
给定非负整数 a、b 和正整数 p，计算 a^b mod p，也就是 a 的 b 次方除以 p 的余数。

约定 0^0 = 1。当 p = 1 时，任何数的余数都是 0。

b 可能很大，不能把 a 连乘 b 次。

本题只使用变量、分支和循环，不需要数组、函数或字符串。

输入描述

一行三个整数 a、b、p（0 ≤ a, b ≤ 10^9，1 ≤ p ≤ 10^9）。

输出描述

输出一个整数，表示 a^b mod p。

样例输入 1 

2 10 1000
样例输出 1 

24
样例输入 2 

2 0 7
样例输出 2 

1
说明

把指数不断除以 2。指数是奇数时，把当前的 a 乘进答案。每做完一次，a 自己平方，指数减半。乘法中间结果请用 long long，并且每次乘法后都取模。
*/

/*#include <iostream>
using namespace std;
                                     //a bad example--------floating
                                     //but it is a good idea(mine)
int main(){
    
    long long a,b,p;
    cin >> a >> b >> p;
    long long sum=1;
    bool b0=true;
    while(b!=1){
    	if(b==0){
            cout << 1%p;
            b0=false;
            break;
        }
    
        else if(b%2==0){
            b/=2;
            a*=a;
        }
        else if(b%2!=0){
            b--;
            sum*=a;
        }
    }
    if(b0){
    	cout << (sum*a)%p;
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main(){
    long long a, b, p;
    cin >> a >> b >> p;

    a %= p;                      // 先压进 [0,p)，否则后面平方照样溢出
    long long sum = 1 % p;

    while (b != 1) {
        if (b == 0) {
            cout << sum << endl;
            return 0;
        }
        else if (b % 2 == 0) {
            b /= 2;
            a = a * a % p;       // ← 取模
        }
        else {
            b--;
            sum = sum * a % p;   // ← 取模
        }
    }
    cout << sum * a % p << endl;
    return 0;
}