import <string>;

export module airline_ticket;
export class AirlineTicket
{
public:
	AirlineTicket();
	~AirlineTicket();
	
	double calculatePriceInDolloars();

	std::string getPassengerName();
	void setPassengerName(const std::string& name);

	int getNumberOfMiles() const;
	void setNumberOfMiles(int miles);

	bool hasEliteSuperRewardsStatus() const;
	void setHasEliteSuperRewardsStatus(const bool status);

private:
	std::string m_passengerName;
	int m_numberOfMiles;
	bool m_hasEliteSuperRewardsStatus;
};