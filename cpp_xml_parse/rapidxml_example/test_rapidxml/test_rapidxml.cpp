// test_rapidxml.cpp : Defines the entry point for the console application.
//
#include "my_example/test.h"
#include <windows.h>
#include <tchar.h>
/*
测试使用rapidxml
rapidxml是极好的一个xml解析库
不过，如果要让它直接支持unicode，需要做一些修改，所以还是用utf8读写xml，外部再转码

2012-12-14
cswuyg@gmail.com
*/


void test_func()
{
	CTest obj;
	obj.test_release_xml();
	obj.test_load_xml();
}


int _tmain(int argc, _TCHAR* argv[])
{
	test_func();
	system("pause");
	return 0;
}

