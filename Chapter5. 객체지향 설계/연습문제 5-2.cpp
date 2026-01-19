/*
* 연습문제 5-1에서 설계한 자동차 모델을 토대로, 사람이 직접 운전할 수도 있고, 인공 지능에 의한 자율주행도 지원하도록 개선한 모델을 제시해보자
*/

/*
* 자동차와 자율 주행 자동차는 기본적인 속성은 같으나, 메서드에서 차이가 존재함.
* 그렇기에 has-a관계보다는 is-a관계로 설정하는 게 좋을 듯.
*/
class Tire;
class Engine;
class HeadLight;
class Wiper;

class Vehicle
{
private:
	Tire m_tire;
	Engine m_engine;
	HeadLight m_headLight;
	Wiper m_wiper;

	// 모델명, 연식, 주행 거리 등과 같은 나머지 속성
	
public:
	virtual void move();
};

class Tire
{
	// 타이어 크기, 종류, 이름과 같은 속성
};

class Engine
{
	// 엔진 크기, 종류, 이름, 몇기통인지등에 관한 속성
	// 몇기통인지는 따로 base class를 만들어도 될지도..
	// 엔진 켜기, 끄기, 동작에 관한 메서드 제공
};

class HeadLight
{
	// 전조등 크기, 종류, 이름, 거리 등과 같은 속성
	// 전조등 켜기, 끄기, 동작에 관한 메서드 제공
};

class Wiper
{
	// 와이퍼 크기, 종류, 이름 등과 같은 속성
	// 와이퍼 켜기, 끄기, 동작에 관한 메서드 제공
};

class AutonomousVehicle : Vehicle
{
public:
	void move() override
	{
		// 자율 주행 코드 작성
	}
};