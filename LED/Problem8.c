void setup() {
  volatile char* dir_c = 0x107;
  *dir_c = 0xff;
}

void loop() {
  
  volatile char *data_c = 0x108;
  *data_c = 0x55;
}
