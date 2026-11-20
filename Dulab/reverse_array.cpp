/*题目描述

把一串数字的顺序颠倒。本题要求全部用指针操作完成，体会 *、p++、p-- 以及 [begin, end) 区间约定。

要求：实现函数 void reverse(int* begin, int* end)，反转 [begin, end) 区间（end 指向最后一个元素的下一格），函数体内不使用下标 [ ]，只用指针操作；输入输出也用指针遍历。

输入描述

第 1 行一个整数 n（1 ≤ n ≤ 1000）；

第 2 行 n 个整数，以空格分隔。

输出描述

输出 1 行：反转后的 n 个整数，以一个空格分隔。

样例输入 1 

6
11 12 13 14 15 16
样例输出 1 

16 15 14 13 12 11
样例输入 2 

5
3 -1 4 -1 5
样例输出 2 

5 -1 4 -1 3
*/

#include <iostream>
using namespace std;


void reverse(int *begin,int *end){
    end--;
    while(begin<end){
        int tem=*begin;
        *begin=*end;
        *end=tem;
        begin++;
        end--;
        
    }
    
}

int main(){
    int n;
    cin >> n;
    int a[1001];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }
    
    reverse(a,a+n);
    for (int *p = a; p < a + n; p++){
        cout << *p << " ";
    }
    
    return 0;
    
}