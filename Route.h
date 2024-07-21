//
// Created by Thomas on 20.07.2024.
//

#ifndef AIRPLANESYSTEM_ROUTE_H
#define AIRPLANESYSTEM_ROUTE_H
#include <string>

class Route {
    private:
         std::string m_source;
         std::string m_destination;
         int m_available_seats;
         unsigned int m_id;
         static unsigned int s_next_id;
    public:
         Route(const std::string &source ,const std::string &destination , int available_seats);
        ~Route();

        unsigned int getId() const;
        std::string getSource() const;
        std::string getDestination() const;
        int getAvailableSeats() const;

        friend std::ostream& operator<<(std::ostream& os, const Route& route);
};
#endif //AIRPLANESYSTEM_ROUTE_H
