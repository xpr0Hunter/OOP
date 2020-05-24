#include "date.h"
Date::Date(int _year,int _month,int _day):year(_year),month(_month),day(_day){};
Date::Date()
{
    year = 0;
    month = 0;
    day = 0;
}
Date::Date(const Date &other)
{
    year = other.year;
    month = other.month;
    day = other.day;
}
void Date::displayDate()const
{
    std::cout <<year<<"-";
    if(month <10)
    {
        std::cout<< std::setfill ('0') << std::setw(2)<< month;
    } else {std::cout <<month;}
    if(day <10)
    {
        std::cout<<"-"<< std::setfill ('0') << std::setw(2)<< day;
    } else {std::cout <<"-"<<day;}
}
int Date::getDay()const
{
    return day;
}
int Date::getMonth()const
{
    return month;
}
int Date::getYear()const
{
    return year;
}
void Date::write(std::ostream& file)
{
    file.write((char*)&day, sizeof(day));
    file.write((char*)&month, sizeof(month));
    file.write((char*)&year, sizeof(year));
}
void Date::read(std::istream& file)
{
    file.read((char*)&day, sizeof(day));
    file.read((char*)&month, sizeof(month));
    file.read((char*)&year, sizeof(year));
}
bool operator==(const Date &first, const Date &second)
{
    if(first.year == second.year && first.month == second.month && first.day == second.day)
    {
        return true;
    }
    return false;
}
bool operator < (const Date& str, const Date& str2)
{
    if(str.year < str2.year)
    {
        return true;
    }else if (str.year>str2.year)
    {
        return false;
    }else
    {
        if(str.month<str2.month)
        {
            return true;
        }else if(str.month>str2.month)
        {
            return false;
        }else
        {
            if(str.day <str2.day)
            {
                return true;
            }else 
            {
                return false;
            }
        }   
    }
}
bool operator > (const Date& str, const Date& str2)
{
    if(str.year > str2.year)
    {
        return true;
    }else if (str.year < str2.year)
    {
        return false;
    }else
    {
        if(str.month > str2.month)
        {
            return true;
        }else if(str.month < str2.month)
        {
            return false;
        }else
        {
            if(str.day > str2.day)
            {
                return true;
            }else 
            {
                return false;
            }
        }
        
    }
    
}
std::ostream& operator << (std::ostream& stream, const Date& date)
{
    stream <<date.year<<"-"<<date.month<< "-"<<date.day;
    return stream;
}
