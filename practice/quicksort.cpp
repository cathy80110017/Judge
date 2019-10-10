#include<stdio.h>
int main(){
    int n[10];
    int count;
    scanf("%d",&count);                 //輸入會有多少要排
    for (int i = 0; i < count; i++){
        scanf("%d",&n[i]);              //輸入陣列
    }
    for (int i = 0; i < count; i++){
        int big, small, left, right;
        int data=n[i];
        left=0;                      
        right=count-1;
        big=n[left];                     //最左邊找大
        small=n[right];                  //最右邊找小
        while (left!=right){             //如果左右兩邊不等於
            while (big<data){            //從最左邊開始找比data大的值
                left++;
                big=n[left];
                if (left==right){
                    int a;  
                    a=n[left];          //data跟相交的數交換
                    n[left]=data;
                    data=a;
                    break;              //如果左邊找不到比data小，而因此碰到right
                }                
            }
            while (small>data){         //從最邊右開始找比data小的值
                right--;
                small=n[right];
                    if (left==right){
                        int a;
                        a=n[left];      //data跟相交的數交換
                        n[left]=data;
                        data=a;                        
                        break;          //如果右邊找不到比data大，而因此碰到left
                    }                 
            }
            if (left!=right){
                    int a;
                    a=n[left];       
                    n[left]=n[right];    //left跟right交換
                    n[right]=a;
            }
            
        }
        

    }
/*    for (int i = 0; i < count; i++){
        printf("%d ",n[i]);
    }
*/    

    return 0;
}