#pragma once
#include <iostream>
#include <iomanip>
struct Date
{
    int day;
    int month;
    int year;
    Date(int _year,int _month,int _day);
    Date();
    Date(const Date &other);
    void displayDate()const;
    int getDay()const;
    int getMonth()const;
    int getYear()const;
    void write(std::ostream& file);
    void read(std::istream& file);

};
bool operator==(const Date &first, const Date &second); // sravnenie na dati
std::ostream& operator << (std::ostream& stream, const Date& date);
bool operator < (const Date& str, const Date& str2);
bool operator > (const Date& str, const Date& str2);