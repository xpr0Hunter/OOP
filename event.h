#pragma once
#include "date.h"
#include "hall.h"
#include "ticket.h"
class Event
{
    public:
    std::string name;
    Date date;
    Hall hall;
    std::vector<Ticket> tickets;
    std::vector<std::string> notes;// date i ime
    public:
    Event();
    Event(const Date& _date,const Hall& _hall, const std::string& _name); // pitai dali trqbva da se pass-va taka
    bool operator < (Event const &other) const  
    { 
        if (date < other.date)
            return true;
        if (date > other.date)
            return false;
        return (hall.getHallN() < other.hall.getHallN());
    }
    void write(std::ostream& f);
    void read(std::istream& f);
};