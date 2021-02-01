#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/all/ALDS1_9_C"

#include<cstdio>
#include<string>
#include<iostream>

#include"../../../data_structure/heapq.cpp"

int main(){
    HeapQ<int> que;
    std::string s;
    while(true){
        std::cin >> s;
        if(s=="insert"){
            int x;
            scanf("%d", &x);
            que.push(x);
        }else if(s=="extract"){
            printf("%d\n", que.top());
            que.pop();
        }else break;
    }
    return 0;
}

