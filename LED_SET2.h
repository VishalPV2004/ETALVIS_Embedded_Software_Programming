void init_port()
{
   volatile char* dir_d;
   dir_d = 0x2A;
   *dir_d = 0xff;
}

void output()
{
  volatile char* data_d;
  data_d = 0x2B;
  *data_d = 0x80;
}
