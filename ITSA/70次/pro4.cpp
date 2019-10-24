#include<stdio.h>
#include<vector>
#include<iostream>

using namespace std;

int main(){
    int count;
    while (scanf("%d",&count)!=EOF){
        for (int i = 0; i < count; i++){
            int n, m;
            scanf("%d %d",&n,&m);
            vector <int> a (n);
            vector <int> b (m);
            for (int j = 0; j < n; j++){
                scanf("%d",&a[j]);
            }
            for (int j = 0; j < n; j++){
                scanf("%d",&b[j]);
            } 
            
        }
        
        
    }
    
    return 0;
}