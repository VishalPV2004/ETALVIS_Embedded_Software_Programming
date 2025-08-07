void init_port()
{
   volatile char *port_dir;
   port_dir = 0x104;
   *port_dir = 0xff;
}

void output()
{
  volatile char *port_ddr;
  port_ddr = 0x105;
  *port_ddr = 0x01;
}
