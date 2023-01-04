#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int n;	//입력받을 정수의 개수
	int count = 0;	//나눠지는수가 몇개인지 알려주는 변수
	int num;	//입력받을 정수
	int r = 0;	//소수의 개수

	cin >> n;	//정수의 개수 입력

	for (int i = 0; i < n; i++)	//n번만큼 반복
	{
		cin >> num;	//소수인지 아닌지 확인할 정수 입력

		for (int j = 1; j <= num; j++)	//1부터 입력받은 정수까지 반복
		{
			if (num % j == 0)	//입력받은정수를 j로 나눴을때 나머지가0이면
			{
				count++;	//count 증가
			}
			
		}
		if (count == 2)	//count가 2이면 1과 자신으로 밖에 나눠지지 않음으로 소수
		{
			r++;	//결과값 1증가
		}
		count = 0;	//count 초기화
	}
	cout << r << endl;	//결과값 출력

}
