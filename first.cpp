#include <iostream>
#include <time.h>
#include <random>

#define n 10  //代表数组的大小 

using namespace std;


int find_luck(int luck, int arr[])
{
    for (int i = 0; i < n; i++)
    {

        if (arr[i] == luck)
        {
            return 1;
        }
        else
            return -1;
    }
}


  


// 主函数
int main() {
    srand(0);
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        int num = rand() % 20 -10;
        arr[i] = num;

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
   }
    

    int luck;
   // int find_luck = find_luck(luck, arr);
    cout << "请输入选择的幸运值" << endl;
    cin >> luck;
    for (int i = 0; i < n; i++)
    {
        if (luck = arr[i])
        {
            cout << "开始执行" << endl;
            break;
        }
        else
            cout << "请重新开始：" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (luck == arr[i])
        {
            arr[i] = arr[i] * 2;
        }
    }
   
    int sum[n] = {0}; int temp = 0; 
//进行最大区间选择  从相邻的两个数算起
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j < 10)
            {
                sum[i] += arr[j];
            }
                       
        }
        if (temp < sum[i])
        {
            temp = sum[i];
       }
    }

    cout << "最大值为： " << temp << endl;

    return 0;
}