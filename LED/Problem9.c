void setup() {
  volatile char* dir_c = 0x10A;
  *dir_c = 0xff;
}

void loop() {
  
  volatile char *data_c = 0x10B;
  *data_c = 0xAA;
}
