/**************************
** 程序描述:模拟计算器 
** 日 期:2025/11/19
** 作业题目:实验一任务二 
** 输入：一个算式 ，等号“=”表示结束输入
** 输出：运算结果或“错误的运算符:%c” 
** result：运算结果，op：运算符， num：后续读入的数字  
***************************/
#include<stdio.h>

int main(){ 
	//变量初始化 
	int result = 0;
	int num = 0;
	char op;
	
	//读入第一个数字 
	scanf("%d", &result);
	
	//读到等号之前 
	while(op != '='){
		
		//读入运算符，判断其是否为错误的运算符 
		scanf("%c", &op);
		if(op != '+' && op != '-' && op != '*' && op != '/'){
			break;
		}
		
		//读入下一个数字 
		num = 0;
		scanf("%d", &num);
		
		//进行计算 
		switch(op){
			case'+':
				result += num;
				break;
			case'-':
				result -= num;
				break;
			case'*':
				result *= num;
				break;
			case'/':
				result /= num;
				break;
		}
	}
	
	//输出运算结果或错误提示 
	if(op == '='){
		printf("%d", result);
	}else{
		printf("错误的运算符:%c", op);
	}	
	
	return 0;
}
