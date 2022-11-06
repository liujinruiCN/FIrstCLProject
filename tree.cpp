//
// Created by 刘谨瑞 on 2022/11/6.
//
#include <iostream>
using namespace std;
struct Node{
    string data;
    int left,right;
}A[10001];
string s;
int cnt=0;
int createTree(){
    cin >> s;
    if(s!="*"){
        //根节点不为空
        cnt++;
        int k=cnt;
        A[k].data = s;
        A[k].left = createTree();
        A[k].right = createTree();
        return k;
    }else{
        return 0;
    }
}

int height(int k){
    if(k==0){
        return 0;
    }
    return max(height(A[k].left), height(A[k].right))+1;
}
int main(){
    //先序：根左右
    int root = createTree();
    cout << root <<endl;
    cout << height(root) << endl;
    return 0;
}