#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int count;
    
    while (scanf("%d",&count) != EOF){        
        vector<int> arr(count);
        for (int i = 0; i < count; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        cout <<*arr.begin() <<' ' <<*arr.end() <<' ' <<endl;
        if (*arr.end() - *arr.begin() == arr.size()){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        
        
    }
}