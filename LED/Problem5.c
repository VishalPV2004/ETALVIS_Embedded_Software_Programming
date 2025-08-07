void setup() {
  volatile char* dir_c = 0x21;
  *dir_c = 0xff;
}

void loop() {
  
  volatile char *data_c = 0x22;
  *data_c = 0x0F;
}
