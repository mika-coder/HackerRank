#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    vector<vector<int>> arrays;
    for(int i =0; i< a; i++){
        int n;
        scanf("%d",&n);
        vector<int> numbers;
        for(int j =0; j< n; j++){
            int buffer;
            scanf("%d",&buffer);            
            numbers.push_back(buffer);
        }
        arrays.push_back(numbers);
    }
    int output [b];
    for(int i =0; i< b; i++){
        int ar, n;
        scanf("%d %d", &ar, &n);
        output[i]= arrays[ar][n];
    }
        for(int i =0; i< b; i++){
            printf("%d\n",output[i]);
        }

    return 0;
}
