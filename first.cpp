#include <iostream>
#include <time.h>
#include <random>

#define n 10  //��������Ĵ�С 

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


  


// ������
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
    cout << "������ѡ�������ֵ" << endl;
    cin >> luck;
    for (int i = 0; i < n; i++)
    {
        if (luck = arr[i])
        {
            cout << "��ʼִ��" << endl;
            break;
        }
        else
            cout << "�����¿�ʼ��" << endl;
    }

    for (int i = 0; i < n; i++)
    {
        if (luck == arr[i])
        {
            arr[i] = arr[i] * 2;
        }
    }
   
    int sum[n] = {0}; int temp = 0; 
//�����������ѡ��  �����ڵ�����������
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

    cout << "���ֵΪ�� " << temp << endl;

    return 0;
}