#include <iostream>
using namespace std;

int antena, eyes;

int main() {
	cin >> antena >> eyes;
	if(antena >= 3 && eyes <= 4) cout<<"TroyMartian\n";
	if(antena <= 6 && eyes >= 2) cout<<"VladSaturnian\n";
	if(antena <= 2 && eyes <= 3) cout<<"GraemeMercurian\n";
	return 0;
}