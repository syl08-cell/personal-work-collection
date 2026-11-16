/*题目描述

You manage 4 buildings, each of which has 3 floors, each of which consists of 10 rooms. Write a program which reads a sequence of tenant/leaver notices, and reports the number of tenants for each room.
For each notice , you are given four integers b,f,r and v which represent that v persons entered to room r of f−th floor at building b. If v is negative, it means that −v persons left.
Assume that initially no person lives in the building.

输入描述

In the first line, the number of notices n is given.
In the following n lines, a set of four integers b,f,r
and v which represents i−th notice is given in a line.
Note that incorrect building, floor and room numbers may be given. Please ignore the incorrect datas.You may get “Runtime Error” if you don’t notice this.
The data promises that 0≤ the number of tenants during the management ≤9,it means that the number of persons won’t be negative or exceed 9, the test data promises it, so it’s not necessary to judge it in your program.

输出描述

For each building, print the information of 1st,2ndand3rd floor in this order. For each floor information, print the number of tenants of 1st,2nd,…,10th room in this order. Print a single space character before the number of tenants.
Print "####################" (20 '#') between buildings.

样例输入 1 

3
1 1 3 8
3 2 2 7
4 3 8 1
样例输出 1 

 0 0 8 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0
####################
 0 0 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0
####################
 0 0 0 0 0 0 0 0 0 0
 0 7 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0
####################
 0 0 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 0 0 0
 0 0 0 0 0 0 0 1 0 0
 */

 #include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[4][30]={0};//把四个楼存在一个数组里
    for(int i=0;i<n;++i){//进入一次记录
    	int b,f,r,v;
    	cin >> b >> f >> r >> v;    
    	if(b<=4&&b>0&&f>0&&f<=3&&r>0&&r<=10){
    		arr[b-1][10*(f-1)+(r-1)]+=v;
        }//【第几个楼】【二维变一维】
    }//把所有变动都记下来了
    //开始打印
    for(int j=0;j<4;++j){
        for(int k=0;k<30;++k){
            if((k+1)%10!=0){
            	cout << " " << arr[j][k];
            }
            else{
                cout << " " << arr[j][k] << '\n';
            }
        }
        if(j!=3){
            for(int a=0;a<20;++a){
                
                if(a==19){
                    cout << "#" << '\n';
                }
                else{
                    cout << "#";
                }
                
            }
        }
    }
        
    
    
    
    return 0;
}