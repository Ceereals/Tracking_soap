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
		cout << *r.return_->EstimatedDays << " day/s estimated" << endl;
		cout << *r.return_->EstimatedDeliveryDate << endl;

	}
	system("pause");
} 