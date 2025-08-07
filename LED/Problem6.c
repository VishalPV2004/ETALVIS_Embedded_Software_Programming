void setup() {
  volatile char* dir_c = 0x24;
  *dir_c = 0xff;
}

void loop() {
  
  volatile char *data_c = 0x25;
  *data_c = 0xF0;
}
