#include <iostream>

using namespace std;

int main() {
	// cin은 데이터를 흘려넣어 보내는 스트림이고
	// 그 데이터를 해석하는 것은 자료형
	// 자료형에 따라서 알아서 처리해주기 때문에 scanf()보다 편리

	char user_input[100];

	// cin과 getline의 차이

	cout << "원하는 문장을 입력해주세요." << endl;
	cout << "입력: ";

	//cin >> user_input; // 사용자의 입력을 user_input 메모리에 할당한다. 공백이 있으면 그 뒤는 무시된다.
	
	cin.getline(user_input, sizeof(user_input)); // 빈 칸도 그냥 문자열로 줄바꿈을 만나면 끝난다. 문자 배열에만 저장이 가능하다.

	cout << "메아리: " << user_input << endl;
	
	int number = -1;
	int number2 = -1;


	cin >> number;

	cin >> number2;

	cout << number << " " << number2 << endl;
}
