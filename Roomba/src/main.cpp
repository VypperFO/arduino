#include <Roomba.h>

Roomba roomba(3, 1, 5);

void setup()
{
  roomba.setup();
  roomba.resetbaud();
}

void loop()
{
  for (size_t i = 0; i < 1; i++)
  {
    roomba.goForward();
  }

  roomba.loop();
}
