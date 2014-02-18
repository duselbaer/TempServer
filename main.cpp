#include "NRF24L01/v1/NRF24L01.hpp"
#include "NRF24L01/v1/driver/Raspberry.hpp"

#include <iostream>

int main(int, char**)
{
  // Instanciate the Raspberry Hardware using the "standard" ports
  typedef NRF24L01::driver::Raspberry<> NRF_HW;
  typedef NRF24L01::NRF24L01<NRF_HW>    NRF;

  NRF_HW nrf_hw;
  NRF    nrf(nrf_hw);

  nrf.init();

  std::cout << "Server started" << "\n";
}
