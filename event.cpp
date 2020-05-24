#include "event.h"
#include <cstring>
Event::Event()
{   
    name = "";
}
Event::Event(const Date& _date,const Hall& _hall,const std::string& _name) // tuk im slojih const i &
{
    date = _date;
    hall = _hall;
    name = _name;
}
void Event::write(std::ostream& f)
{
    int size;
    f.write(name.c_str(), name.length()+1);
    date.write(f);
    hall.write(f);
    size = tickets.size();
    f.write((char*)&size,sizeof(int));
    for(int i = 0; i <size;++i)
    {
        tickets[i].write(f);
    }
    size = notes.size();
    f.write((char*)&size,sizeof(int));
    for(int i = 0; i <size ;++i)
    {
        f.write(notes[i].c_str(), notes[i].length()+1);
    }
}
void Event::read(std::istream& f)
{
        int size;
        std::getline(f, name, '\0');
        date.read(f);
        hall.read(f);
        f.read((char*)&size, sizeof(int));
        Ticket ticket1;
        for(int i = 0; i <size;++i)
        {
            ticket1.read(f);
            tickets.push_back(ticket1);
        }
        f.read((char*)&size,sizeof(int));
        for(int i = 0; i <size ;++i)
        {
            std::string helper;
            std::getline(f, helper, '\0');
            notes.push_back(helper);
        }
}
    

