#pragma once
#include <algorithm>
#include <fstream>
#include "hall.h"
#include "date.h"
#include "ticket.h"
#include "event.h"

class Program
{
    std::vector<Event> events; 
    std::vector<Hall> halls; 
    public:
    Program();
    std::string Extract(std::string &a,char b);
    void Extract(std::string& a,int b);
    std::string Extract2(std::string& a,int b);
    std::string Extract3(std::string a,int b);
    void eraseSubStr(std::string& mainStr, const std::string& strToErase);
    void Cut (std::string &a,char b);
    void Cut (std::string &a,int b);
    std::string replace(std::string something,char replacement, char replacer);
    void showBookingsNotes(std::vector<std::string> notes);
    bool checkDate(int year,int month,int day)const;
    bool  isDateValid(std::string date);
    void sort();
    void stringToDate(std::string date, Date &tmp);
    bool convertToDate(std::string date1,Date& date2);
    std::string Extract1(std::string a,char b);
    bool isHallvalid(int hallNumebr)const;
    bool isPlaceValid(int row1, int seat1, int hall1)const;
    int charToint(char a);
    int rowSeatToStr(std::string something);
    void main();
};