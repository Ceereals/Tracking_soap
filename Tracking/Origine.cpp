#include "soapTransitTimePortBindingProxy.h"
#include "TransitTimePortBinding.nsmap"
using namespace std;
int main() {
	TransitTimePortBindingProxy transitTimeCalculator;
	ns1__AVTTransitTimeRequest a;
	a.DestinationCity = "COOKEVILLE";
	a.DestinationState = "TN";
	a.DestinationZip = "38502";
	a.OriginCity = "COOKEVILLE";
	a.OriginState = "TN";
	a.OriginZip = "38502";
	ns1__getTransitTimeResponse r;
	ns1__getTransitTime b;
	b.arg0 = &a;
	ns1__getTransitTime *g = &b;
	if (transitTimeCalculator.getTransitTime(g, r) == SOAP_OK) {
		cout << "From: " << *r.return_->OrigCity << endl;
		cout << "To: " << *r.return_->DestCity << endl;
		cout << "Estimated Day/s: " << *r.return_->EstimatedDays << endl;
		cout << "Estimated Delivery Date: " << *r.return_->EstimatedDeliveryDate << endl;

	}
	system("pause");
} 