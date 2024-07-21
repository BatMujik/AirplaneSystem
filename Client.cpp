//
// Created by Thomas on 20.07.2024.
//

#include "Client.h"
#include "validations/user_validation.h"

#include <iostream>
#include <string>
#include <stdexcept>

unsigned int Client::s_client_next_id = 1;

Client::Client(const std::string &fullname, const std::string &gmail, double balance) {
    if (fullname.empty()) {
        throw std::invalid_argument("fullname cannot be empty.");
    }
    if (gmail.empty() || isValidEmail(gmail)) {
        throw std::invalid_argument("gmail is not valid.");
    }

    m_fullname = fullname;
    m_gmail = gmail;
    m_balance = balance;
    m_client_id = s_client_next_id++;
}

Client::~Client(){
    std::cout << "Destructor of Client by id: " << m_client_id << " has been called" << std::endl;
}

unsigned int Client::getId() const {
    return m_client_id;
}

std::string Client::getName() const {
    return m_fullname;
}

std::string Client::getEmail() const {
    return m_gmail;
}

double Client::getBalance() const {
    return m_balance;
}

std::ostream& operator<<(std::ostream& os, const Client& client) {
    os << "Client ID: " << client.m_client_id << ", Name: " << client.m_fullname << ", Email: " << client.m_gmail
    << ", Balance: " << client.m_balance ;
    return os;
}