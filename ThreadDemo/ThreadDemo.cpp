// ThreadDemo.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <thread>

using namespace std;

void thread_test()
{
	cout << "this is thread" << endl;
}

int main()
{
	thread t(thread_test);
	t.join();
	system("pause");
    return 0;
}

