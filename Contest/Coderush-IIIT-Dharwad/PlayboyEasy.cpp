//   https://www.hackerrank.com/contests/coderush-iiit-dharwad-2022/challenges/playboy-easy

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact = fact * i;
    return fact;
}

int mainn(){
        int num;
        cin>>num;
        return factorial(num);
}

int main() {
    int loop;
    // int num;
    cin>>loop;
    for(int i=0; i<loop; i++){
        cout<< mainn()<<endl;
    }
    return 0;
}