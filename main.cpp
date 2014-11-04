#include "NRF24L01/v1/NRF24L01.hpp"
#include "NRF24L01/v1/driver/Raspberry.hpp"

#include "RF24Network.h"

#include <iostream>

int main(int, char**)
{
  // Instanciate the Raspberry Hardware using the "standard" ports
  typedef NRF24L01::driver::Raspberry<> NRF_HW;
  typedef NRF24L01::NRF24L01<NRF_HW>    NRF;

  NRF_HW nrf_hw;
  NRF    nrf(nrf_hw);

  nrf.init();
  std::cout << "Device initialized" << std::endl;

  RF24Network<NRF> network(nrf);
  network.begin(1, 0);
  while (1)
  {
    network.update();


  }
}
