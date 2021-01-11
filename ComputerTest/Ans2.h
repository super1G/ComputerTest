#pragma once
#include<string>
#include<iostream>
class Ans2
{
	
public:
	std::string date = "人易科技:上 機 測 驗 - 演算法";
	std::string processing(std::string str);
};

//1.字元「:」改成全型
//2.去掉中文字間的空白(保留 - 號二側空白)
//3.列印出符號 : 到 - 之間的字元
