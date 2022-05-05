#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class person {
	int year, month, day;
	string name;
public:
	person();
	void setdate(string name, int year, int month, int day);
	string getname() { return this->name; }
	const int getYear()const { return this->year; }
	const int getmonth()const { return this->month; }
	const int getday()const { return this->day; }
};
person::person()
{
	name = "";
	year = 0, month = 0, day = 0;
}
void person::setdate(string name, int year, int month, int day)
{
	this->day = day;
	this->name = name;
	this->month = month;
	this->year = year;
}

bool compare(const person& p1, const person& p2)
{
	if (p1.getYear() < p2.getYear())
		return 1;
	else if (p1.getYear() > p2.getYear())
		return 0;
	else
	{
		if (p1.getmonth() < p2.getmonth())
			return 1;
		else if (p1.getmonth() > p2.getmonth())
			return 0;
		else
		{
			if (p1.getday() < p2.getday())
				return 1;
			else
				return 0;
		}
	}
}
int main()
{
	int n;
	cin >> n;

	vector<person> P;
	for (int i = 0; i < n; i++)
	{
		person p;
		string name;
		int year, month, day;
		cin >> name >> day >> month >> year;
		p.setdate(name, year, month, day);
		P.push_back(p);
	}

	sort(P.begin(), P.end(), compare);
	cout << P[n - 1].getname() << "\n";
	cout << P[0].getname();


	return 0;
}
