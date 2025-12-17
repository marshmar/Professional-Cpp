module airline_ticket;

AirlineTicket::AirlineTicket()
	: m_passengerName {"Unknown Passenger" }
	, m_numberOfMiles { 0 }
	, m_hasEliteSuperRewardsStatus { false }
{ }

AirlineTicket::~AirlineTicket()
{

}

double AirlineTicket::calculatePriceInDolloars()
{
	if (hasEliteSuperRewardsStatus())
	{
		// 우수 등급(Elite Super Rewards) 회원에게는 무료 티켓을 제공한다.
		return 0;
	}
	// 티켓 가격은 비행 거리에 0.1을 곱한 값이다.
	// 실제로 항공사에서 적용하는 공식은 이보다 복잡하다.
	return getNumberOfMiles() * 0.1;
}

std::string AirlineTicket::getPassengerName() { return m_passengerName; }
void AirlineTicket::setPassengerName(const std::string& name) { m_passengerName = name; }

