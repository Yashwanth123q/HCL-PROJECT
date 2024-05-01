#include<iostream>
#include<string.h>
using namespace std;

int payment;

int lpayment(char origin[30], char destination[30]){
	
if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"HYDERABAD")==0)&&(strcmp(destination,"CHENNAI")==0)||(strcmp(destination,"HYDERABAD")==0))
	return payment=5234;
else if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"KOLKATA")==0)&&(strcmp(destination,"CHENNAI")==0)||(strcmp(destination,"KOLKATA")==0))
	return payment=7500;
else if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"KARACHI")==0)||(strcmp(destination,"DELHI")==0))
	return payment=9000;
else if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"MUMBAI")==0)&&(strcmp(destination,"KARACHI")==0)||(strcmp(destination,"MUMBAI")==0))
	return payment=6500;
else if((strcmp(origin,"HYDERABAD")==0)||(strcmp(origin,"VIJAYAWADA")==0)&&(strcmp(destination,"HYDERABAD")==0)||(strcmp(destination,"VIJAYAWADA")==0))
	payment=2500;
else if((strcmp(origin,"HYDERABAD")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"HYDERABAD")==0)||(strcmp(destination,"DELHI")==0))
	return payment=6000;
else if((strcmp(origin,"MUMBAI")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"MUMBAI")==0)||(strcmp(destination,"DELHI")==0))
	return payment=8000;
else if((strcmp(origin,"MUMBAI")==0)||(strcmp(origin,"KOLKATA")==0)&&(strcmp(destination,"MUMBAI")==0)||(strcmp(destination,"KOLKATA")==0))
	return payment=8000;
else if((strcmp(origin,"MUMBAI")==0)||(strcmp(origin,"HYDERABAD")==0)&&(strcmp(destination,"MUMBAI")==0)||(strcmp(destination,"HYDERABAD")==0))
	return payment=5000;
}

int ipayment(char origin[30], char destination[30]){
	
if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"BERLIN")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"BERLIN")==0))
	        return payment=20000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"DUBAI")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"DUBAI")==0))
	        return payment=25000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"RIYADH")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"RIYADH")==0))
	        return payment=18000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"BEIJING")==0))
	        return payment=25000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"PARIS")==0))
	        return payment=10000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"CANBERRA")==0))
	        return payment=15000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"TOKYO")==0))
	        return payment=48095;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=65001;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=51231;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=45000;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"DUBAI")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"DUBAI")==0))
	        return payment=60000;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"RIYADH")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"RIYADH")==0))
	        return payment=45300;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"BEIJING")==0))
	        return payment=62527;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"PARIS")==0))
	        return payment=7890;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"CANBERRA")==0))
	        return payment=157902;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"TOKYO")==0))
	        return payment=66270;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=131334;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=36307;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=32996;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"RIYADH")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"RIYADH")==0))
	        return payment=16354;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"BEIJING")==0))
	        return payment=40225;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"PARIS")==0))
	        return payment=26104;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"CANBERRA")==0))
	        return payment=187259;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"TOKYO")==0))
	        return payment=67242;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=78149;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=52700;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=14939;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"BEIJING")==0))
	        return payment=92061;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"PARIS")==0))
	        return payment=51282;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"CANBERRA")==0))
	        return payment=156525;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"TOKYO")==0))
	        return payment=110079;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=86516;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=723;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=40312;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"PARIS")==0))
	        return payment=31748;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"CANBERRA")==0))
	        return payment=86516;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"TOKYO")==0))
	        return payment=32342;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=82127;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=46897;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=73810;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"CANBERRA")==0))
	        return payment=151674;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"TOKYO")==0))
	        return payment=39790;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=53712;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=35492;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=64964;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"TOKYO")==0))
	        return payment=91714;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=159865;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=113777;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=140229;
else if((strcmp(origin,"TOKYO")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"TOKYO")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return payment=74734;
else if((strcmp(origin,"TOKYO")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"TOKYO")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=30199;
else if((strcmp(origin,"TOKYO")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"TOKYO")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=124022;
else if((strcmp(origin,"WASHINGTON")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"WASHINGTON")==0)||(strcmp(destination,"DELHI")==0))
	        return payment=63761;
else if((strcmp(origin,"WASHINGTON")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"WASHINGTON")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=103989;
else if((strcmp(origin,"DELHI")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"DELHI")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return payment=36096;
}
