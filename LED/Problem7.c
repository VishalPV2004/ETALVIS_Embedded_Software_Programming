void setup() {
  volatile char* dir_c = 0x30;
  *dir_c = 0xff;
}

void loop() {
  
  volatile char *data_c = 0x31;
  *data_c = 0xFF;
}
