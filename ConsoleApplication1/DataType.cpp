#include <iostream>

using namespace std;

int main() {
	// 변수를 정의할 때 자료형을 미리 지정해야 한다.
	// 자료형은 바꿀 수 없다.

	// 내부적으로 메모리를 이미 갖고있다.
	int i; // 변수 정의
	i = 123; // 변수에 값 지정 (객체 레퍼런스 아님)

	// sizeof ex) int = 4byte 어떤 변수나 자료형의 크기를 알려준다.
	cout << i << " " << sizeof(i) << endl;

	cout << sizeof(int) << endl; // int 자료형의 size

	cout << 123 + 4 << " " << sizeof(123 + 4) << endl;


	// 부동소수점 자료형 float = 4byte double = 8byte
	float f = 123.456f; // f가 있으면 float
	double d = 123.456; // f 불필요

	cout << f << " " << sizeof(f) << endl;
	cout << d << " " << sizeof(d) << endl;

	// C++는 글자 하나와 문자열을 구분한다.
	char c = 'a';
	char str[] = "Hello , World!"; // 문자의 배열로 사용을 한다.

	cout << c << " " << sizeof(c) << endl; // a 1

	// 형변환
	i = 987.654; // double을 int에 강제로 저장

	cout << "int from double" << " " << i << endl; // 987 -- 버림이 된다.

	f = 567.89; // 이것도 형변환 f가 안붙어있으면 double이다.

	i += 100; // i = i + 100;
	i++; // i = i + 1;


	cout << i << endl;

	// 불리언
	bool is_good = true;
	is_good = false;

	cout << is_good << endl; // 0

	is_good = true;

	cout << is_good << endl; // 1

	// 영어로 출력하고 싶으면 (true false)
	cout << boolalpha << true << endl; // true
	cout << is_good << endl; // 그 후로는 안써도 적용
	cout << noboolalpha << true << endl; // 해제

	cout << boolalpha;
	cout << (true && true) << endl; // 1
	cout << (true || false) << endl; // 1

	cout << (1 > 3) << endl;
	cout << (3 == 3) << endl;
	cout << (i >= 3) << endl;
	cout << ('a' != 'c') << endl;
	cout << ('a' != 'a') << endl;

	// scope 영역

	i = 123;
	{
		int i = 345; // 더 좁은 영역의 다른 변수
		cout << i << endl; // 345 자기하고 같은 영역에서 찾고 더 넓은 영역으로 옮겨간다.
	}

	cout << i << endl; // 안쪽 영역은 이미 끝남 같은 영역 123 출력

	return 0;

}
