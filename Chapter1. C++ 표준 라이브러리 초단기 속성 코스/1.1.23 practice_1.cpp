import <iostream>;
import airline_ticket;

using namespace std;
int main()
{
	AirlineTicket myTicket;
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	double cost{ myTicket.calculatePriceInDolloars() };
	cout << format("This ticket will cost ${}", cost) << endl;

	return 0;
}