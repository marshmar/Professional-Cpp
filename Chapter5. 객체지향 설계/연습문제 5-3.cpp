/*
* 인사팀 애플리케이션에 세가지 클래스
* Employee: 직원 ID, 연봉, 입사일 등의 정보를 관리
* Person: 이름과 주소를 관리
* Manager: 팀원을 관리
* 
* Manager: Employee, Person의 방식으로 구성했을 떄 수정할 부분?
*/

/*
* Manager를 Employee와 Person의 다중 상속으로 상속받는 것은 적절할지도 모른다. 
* 그러나, Employee와 Person는 is-a관계로 Employee는 Person이고, Manager와 Employee도 마찬가지로 is-a관계로 
* Manager는 Employee이다. 따라서 다중 상속이 아닌 Person으로부터 상속받은 Employee를 상속받은 Manager의 관계가 되도록 하는 것이 옳다고 생각한다.
*/