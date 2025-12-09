import <iostream>;
using namespace std;

/*
* [[nodiscard]]: 어떤 값을 리턴하는 함수에 지정, 함수가 호출될 때 리턴값에 아무런 작업을 하지 않으면 경고 메시지 호출
* [[maybe_unused]]: 사용하지 않았을 때 컴파일러가 경고 메시지를 출력하지 않도록 설정하는데 사용
* [[noreturn]]: 호출 지점으로 다시 돌아가지 않는다. 프로세스나 스레드 종료와 같이 뭔가가 끝나게 만들거나,
*				익셉션을 던지는 함수가 해당
* [[deprecated]]: 지원 중단 대상임을 지정하는 데 사용, 현재 사용할 수는 있지만 권장하지 않는 대상임을 표시
* [[likely]]와 [[unlikely]]: 컴파일러가 최적화 작업을 시행하는 데 도움을 줄 수 있지만,
*							 현재는 컴파일러 성능이 뛰어나기 때문에 필요한 경우가 드묾.
*/
[[nodiscard]] int func1()
{
	return 42;
}

[[nodiscard("Some explanation")]] int func2()
{
	return 42;
}

int func3(int param1, [[maybe_unused]] int param2)
{
	return 42;
}

[[noreturn]] void forceProgramTermination()
{
	std::exit(1);
}

bool isDongleAvaliable()
{
	bool isAvailable { false };
	// 라이선스 동글을 사용할 수 있는지 확인
	return isAvailable;
}

bool isFeatureLicensed(int featureId)
{
	if (!isDongleAvaliable())
	{
		// 사용가능한 라이선싱 동글이 없다면 프로그램을 중단한다.
		forceProgramTermination();
	}
	else {
		bool isLicensed{ featureId == 42 };
		// 동글이 있다면 주어진 기능에 대한 라이선스를 검사를 한다.
		return isLicensed;
	}
}

[[deprecated("Unsafe method, please use xyz")]] void func4()
{

};

int main()
{
	func1();
	func2();
	func3(5, 6);
	//func4();

	bool isLicensed{ isFeatureLicensed(42) };
	return 0;
}