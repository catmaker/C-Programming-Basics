#include <iostream>

using namespace std;

int main() {
	int a = 1;
	int b = 2;
	int c = 3;
	// ...

	// 같은 자료형의 데이터를 저장하기 위해 메모리를 미리 잡아놓은 배열
	int my_array[3] = { 1,2,3 }; // 초기화 할 때는 {} 안에 값 나열

	// 인덱싱 (zero-based)
	cout << my_array[0] << " " << my_array[1] << " " << my_array[2] << endl;

	// 인덱싱으로 하나 짜리 변수처럼 사용 가능

	my_array[1] = 5;
	
	cout << my_array[0] << " " << my_array[1] << " " << my_array[2] << endl;

	// cout << my_array[10000] << endl; // 방을 3개만 빌려줬는데 10000번째 찾으니까 못찾음

	// 문자열은 기본적으로 문자의 배열

	char name[75] = "Hello"; // 문자 ''와 문자열 "" 구분 마지막에 \0 이 숨어있다. Null character 

	cout << name << " " << sizeof(name) << endl;

	name[0] = 'A';
	name[1] = 'B';
	name[2] = 'C';

	cout << name << endl;

	name[2] = '\0'; // 뒤에는 다 날려버림 (앞에서부터 한글자씩 출력하다가 \0 를 만나면 멈추는 방식으로 되어있음.

	cout << name << endl;

	// 배열 크기를 지정해주지 않아도 알아서 []으로 선언해도 지정해준다.



	return 0;
}
