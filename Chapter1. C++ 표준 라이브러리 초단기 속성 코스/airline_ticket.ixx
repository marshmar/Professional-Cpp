import <string>;

export module airline_ticket;
export class AirlineTicket
{
public:
	AirlineTicket();
	~AirlineTicket();
	
	double calculatePriceInDolloars();

	std::string getPassengerName();
	void setPassengerName(std::string name);

	int getNumberOfMiles();
	void setNumberOfMiles(int miles);

	bool hasEliteSuperRewardsStatus();
	void setHasEliteSuperRewardsStatus(bool status);

private:
	std::string m_passengerName;
	int m_numberOfMiles;
	bool m_hasEliteSuperRewardsStatus;
};