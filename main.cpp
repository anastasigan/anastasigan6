#include <iostream>
#include <cmath>

using namespace std;

void array21(); //Декларування функції типу void(задача Array21)
void input_arr(int arr[], int& n, const int N);
float avgnum(int arr[], int n);
void output(float avg);

void array97();//Декларування функції типу void(задача Array97)
void deletematches(int arr[], int n);


int main()
{
	int choice = 0; //Декларування змінної задля choice

	while (choice != 3) {
		
		cout.clear();
		cout << "Choose the TASK: "
			"\n1. Array#21"
			"\n2. Array#97"
			"\n3. exit" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			// array21
			array21();
			break;
		}
		case 2:
		{
			// array97
			array97();
			break;
		}
		case 3:
		{
			cout << "Program has ended";
			break;
		}
		default:
		{
			cout << "Variety with this number doesn't exist\n";
			break;
		}
		}
	}
}

void array21() {
	const int N = 50;
	int n = 0;
	int arr[N];
	input_arr(arr, n, N);
	float avg = avgnum(arr, n);
	output(avg);
}

void input_arr(int arr[], int& n, const int N)
{
	cout << "Amount of elements: ";
	cin >> n;
	if (n < N && n > 0) {
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
	}
	else {
		cout << "N entered wrong";
	}
}

float avgnum(int arr[], int n) {					// Перебор массива начиная от k до l, сложение каждого элемента массива в переменную l, конечный результат делится на размер массива и выводится
	int k, l, sum = 0;
	cout << "Enter K and L: ";
	cin >> k >> l;
	int arrsize = l - k;
	if (k > l) {
		cout << "Wrong K or L";
	}
	else {
		for (int i = k-1; i < l; i++) {
			sum += arr[i];
		}
	}
	float avg = sum*1.0/arrsize;
	return avg;
}

void output(float avg) {
	cout << "Average number is : " << avg << endl;
}

void array97() {
	const int N = 50;
	int n = 0;
	int arr[N];
	input_arr(arr, n, N);
	deletematches(arr, n);
}

void deletematches(int arr[], int n) {				//Перебирает весь массив, при обнаружении одинаковых значений arr[i-1] и arr[i] удаляет их оба.
	for (int i = 1; i < n; i++) {
		if (arr[i - 1] == arr[i]) {
			arr[i - 1] = 0;
			arr[i] = 0;
		}
	}
	cout << "New matrix is ";

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " << endl;
	}
}