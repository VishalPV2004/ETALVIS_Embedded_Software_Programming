void setup() {
  volatile char* dir_c = 0x27;
  *dir_c = 0xff;
}

void loop() {
  
  volatile char *data_c = 0x28;
  *data_c = 0xC0;
}
