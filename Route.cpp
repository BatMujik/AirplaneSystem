//
// Created by Thomas on 20.07.2024.
//

#include "Route.h"
#include <string>
#include <stdexcept>
#include <iostream>

unsigned int Route::s_next_id = 1;

Route::Route(const std::string &source,const  std::string &destination, int available_seats) {
    if (source.empty()) {
        throw std::invalid_argument("Source cannot be empty.");
    }
    if (destination.empty()) {
        throw std::invalid_argument("Destination cannot be empty.");
    }
    if (available_seats < 0) {
        throw std::invalid_argument("Available seats cannot be negative.");
    }

    m_source = source;
    m_destination = destination;
    m_available_seats = available_seats;
    m_id = s_next_id++;
}

Route::~Route(){
    std::cout << "Destructor of Route by id: " << m_id << " has been called" << std::endl;
}

unsigned int Route::getId() const {
    return m_id;
}

std::string Route::getSource() const {
    return m_source;
}

std::string Route::getDestination() const {
    return m_destination;
}

int Route::getAvailableSeats() const {
    return m_available_seats;
}

std::ostream& operator<<(std::ostream& os, const Route& route) {
    os << "Route ID: " << route.m_id << ", Source: " << route.m_source
       << ", Destination: " << route.m_destination << ", Available Seats: " << route.m_available_seats;
    return os;
}