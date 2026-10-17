#include <Wire.h>
#include <TDAxis12.h>
TwoWire i2c(2, I2C_FAST_MODE);
TDAxis12 gyro(&i2c, 0x10);
float angle_robot;

void setup() {
  i2c.begin();
}

void loop() {
  angle_robot = gyro.read();
}
