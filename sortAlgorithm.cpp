#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include"quickSort.h"
#include"buddleSort.h"

using std::cin;
using std::cout;
using std::endl;

int NUM = 100;
enum sortAlogrithm{quickSort = 1,buddleSort};
enum sortAlogrithm testSort = quickSort;
int begin = 0,end = 100;

// 依次输入，1测试数据个数,2调用算法名，3数据范围起，4数据范围终
int main(int argc,char *argv[])
{
    cout << "*****排序算法测试*****" << endl;

	cout << argc <<endl;
	for(int i=0;i<argc;i++)
	{ cout << argv[i] <<"  ";}
	cout << endl;

	if(argc > 2)
	NUM =atoi(argv[1]);
    int sum[NUM];
	
	if(argc > 3)
{
	if(0 == strcmp(argv[2],"quickSort"))
        {   cout << "测试算法quickSort" <<endl;
            testSort = quickSort;}
	if (0 == strcmp(argv[2],"buddleSort"))
	{   cout << "测试算法buddleSort" <<endl;
            testSort = buddleSort;
        }	
}	
	if(argc > 4 && atoi(argv[3])<atoi(argv[4]))
	{	cout << "--------------"<< endl;
	  begin = atoi(argv[3]);
	 end = atoi(argv[4]);}
	
    srand((unsigned int)time(NULL));
	cout << "排序前数组：" <<endl;
    for(int i = 0;i<NUM;i++)
    {   //cout << "+++++++++++++++++++++ " <<endl;
        sum[i] = begin + rand()%(end - begin);
        cout << sum[i] <<" ";
    }   cout << endl;
	switch(testSort)
	{	case quickSort:	
			cout << "测试算法quickSort" <<endl; 
			QuickSort(sum,0,NUM-1);break;
		case buddleSort:
			cout << "测试算法buddleSort" <<endl;
			bubble_sort(sum,NUM);
		default :QuickSort(sum,0,NUM-1);		
	}
	
	
	cout << endl;
	cout << endl;
	for(int i= 0;i<NUM;i++)
	{
	cout << sum[i] << " ";
	}
	cout << endl;
    return 0;
}
