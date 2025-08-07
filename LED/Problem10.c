void setup() {
  volatile char* dir_c = 0x2D;
  *dir_c = 0xff;
}

void loop() {
  
  volatile char *data_c = 0x2E;
  *data_c = 0x1E;
}
