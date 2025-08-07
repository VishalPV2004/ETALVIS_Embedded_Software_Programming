void setup() {
  volatile char* dir_h = 0x101;
  *dir_h = 0xff;
}

void loop() {
  volatile char* port_h = 0x102;
  *port_h = 0x03;
}
