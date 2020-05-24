#pragma once
// Представленията се играят в няколко зали, всяка от които има номер, 
// брой редове и брой места на всеки ред. Залите са предварително зададени.
#include <iostream>
#include <vector>
class  Hall
{
    private:
    int hallN,rows,seats,freeSeats,ticketsBought;
    std::vector <std::vector<int> > board;
    public:
    Hall();
    Hall(const Hall &other);
    Hall(int _hallN,int _rows, int _seats);
    Hall(int hallN);
    int getHallN()const;
    int getRows()const;
    int getSeats()const;
    int getBoughtTickets()const;
    void setHallNumber(int number);
    void book(int rows,int seats);
    void unbook(int rows,int seats);
    void buy(int rows,int seats);
    void setBoard(std::vector <std::vector<int> > &Matrix,int rows,int seats);
    void showBoard()const;
    void showOccupiedSeats()const;
    void showFreeSeats()const;
    int seatStatus(int row, int seat)const;
    int GetFreeSeats()const;
    void write(std::ostream& file);
    void read(std::istream& file);

};