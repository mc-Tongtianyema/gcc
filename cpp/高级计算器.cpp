#include <iostream>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

// 定义函数用于基本的算术运算
double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	if (b == 0) {
		cout << "错误！除数不能为零。" << endl;
		return 0;
	} else {
		return a / b;
	}
}

// 定义函数用于更高级的运算
double power(double base, double exponent) {
	return pow(base, exponent);
}

double sqrt(double a) {
	if (a < 0) {
		cout << "错误！不能对负数求平方根。" << endl;
		return 0;
	} else {
		return sqrt(a);
	}
}

double sinFunc(double a) {
	return sin(a);
}

double cosFunc(double a) {
	return cos(a);
}

double tanFunc(double a) {
	return tan(a);
}

double logFunc(double a) {
	if (a <= 0) {
		cout << "错误！对数函数的输入必须大于零。" << endl;
		return 0;
	} else {
		return log(a);
	}
}

double expFunc(double a) {
	return exp(a);
}

// 记忆功能
double memoryStore() {
	static double memory = 0;
	return memory;
}

void memoryClear() {
	static double memory = 0;
	memory = 0;
}

double memoryAdd(double value) {
	static double memory = 0;
	memory += value;
	return memory;
}

double memorySubtract(double value) {
	static double memory = 0;
	memory -= value;
	return memory;
}

// 历史记录功能
stack<double> history;

void addToHistory(double value) {
	history.push(value);
}

double getLastFromHistory() {
	if (!history.empty()) {
		return history.top();
	} else {
		cout << "历史记录为空。" << endl;
		return 0;
	}
}

// 用户自定义函数
vector<double> userDefinedFunctions;

void addUserDefinedFunction(double value) {
	userDefinedFunctions.push_back(value);
}

double getUserDefinedFunction(int index) {
	if (index >= 0 && index < userDefinedFunctions.size()) {
		return userDefinedFunctions[index];
	} else {
		cout << "无效的索引。" << endl;
		return 0;
	}
}

int main() {
	int choice;
	double num1, num2, result;
	char operation;
	double memoryValue = 0;
	
	cout << "选择运算：" << endl;
	cout << "1. 加法" << endl;
	cout << "2. 减法" << endl;
	cout << "3. 乘法" << endl;
	cout << "4. 除法" << endl;
	cout << "5. 幂运算" << endl;
	cout << "6. 平方根" << endl;
	cout << "7. 正弦函数" << endl;
	cout << "8. 余弦函数" << endl;
	cout << "9. 正切函数" << endl;
	cout << "10. 对数函数" << endl;
	cout << "11. 指数函数" << endl;
	cout << "12. 记忆存储" << endl;
	cout << "13. 记忆清除" << endl;
	cout << "14. 记忆加法" << endl;
	cout << "15. 记忆减法" << endl;
	cout << "16. 历史记录" << endl;
	cout << "17. 用户自定义函数" << endl;
	cout << "输入你的选择(1/2/3/4/5/6/7/8/9/10/11/12/13/14/15/16/17): ";
	cin >> choice;
	
	switch (choice) {
	case 1:
		cout << "输入第一个数字: ";
		cin >> num1;
		cout << "输入第二个数字: ";
		cin >> num2;
		result = add(num1, num2);
		cout << num1 << " + " << num2 << " = " << result << endl;
		break;
	case 2:
		cout << "输入第一个数字: ";
		cin >> num1;
		cout << "输入第二个数字: ";
		cin >> num2;
		result = subtract(num1, num2);
		cout << num1 << " - " << num2 << " = " << result << endl;
		break;
	case 3:
		cout << "输入第一个数字: ";
		cin >> num1;
		cout << "输入第二个数字: ";
		cin >> num2;
		result = multiply(num1, num2);
		cout << num1 << " * " << num2 << " = " << result << endl;
		break;
	case 4:
		cout << "输入第一个数字: ";
		cin >> num1;
		cout << "输入第二个数字: ";
		cin >> num2;
		result = divide(num1, num2);
		cout << num1 << " / " << num2 << " = " << result << endl;
		break;
	case 5:
		cout << "输入基数: ";
		cin >> num1;
		cout << "输入指数: ";
		cin >> num2;
		result = power(num1, num2);
		cout << num1 << " ^ " << num2 << " = " << result << endl;
		break;
	case 6:
		cout << "输入数字: ";
		cin >> num1;
		result = sqrt(num1);
		cout << "sqrt(" << num1 << ") = " << result << endl;
		break;
	case 7:
		cout << "输入角度(弧度): ";
		cin >> num1;
		result = sinFunc(num1);
		cout << "sin(" << num1 << ") = " << result << endl;
		break;
	case 8:
		cout << "输入角度(弧度): ";
		cin >> num1;
		result = cosFunc(num1);
		cout << "cos(" << num1 << ") = " << result << endl;
		break;
	case 9:
		cout << "输入角度(弧度): ";
		cin >> num1;
		result = tanFunc(num1);
		cout << "tan(" << num1 << ") = " << result << endl;
		break;
	case 10:
		cout << "输入数字: ";
		cin >> num1;
		result = logFunc(num1);
		cout << "log(" << num1 << ") = " << result << endl;
		break;
	case 11:
		cout << "输入数字: ";
		cin >> num1;
		result = expFunc(num1);
		cout << "exp(" << num1 << ") = " << result << endl;
		break;
	case 12:
		cout << "记忆存储: " << memoryStore() << endl;
		break;
	case 13:
		memoryClear();
		cout << "记忆已清除。" << endl;
		break;
	case 14:
		cout << "记忆加法: " << memoryAdd(num1) << endl;
		break;
	case 15:
		cout << "记忆减法: " << memorySubtract(num1) << endl;
		break;
	case 16:
		cout << "历史记录: " << getLastFromHistory() << endl;
		break;
	case 17:
		cout << "输入用户自定义函数的值: ";
		cin >> num1;
		addUserDefinedFunction(num1);
		cout << "用户自定义函数已添加。" << endl;
		break;
	default:
		cout << "无效的输入" << endl;
	}
	
	return 0;
}
