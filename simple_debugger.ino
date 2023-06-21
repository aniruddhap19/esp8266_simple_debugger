char gp_low[6]="gplow";
char help[5]="help";
char gp_high[7]="gphigh";
void GPIO_HIGH_MODE(int a){
switch (a)
{
case 0:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO0_U,0);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,1);
  break;
case 1:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_U0TXD_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,2);
  break;
case 2:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO2_U,0);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,4);
  break;
case 3:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_U0RXD_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,8);
  break;
case 4:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO4_U,0);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,16);
  break;
case 5:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO5_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,32);
  break;
case 6:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_CLK_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,64);
  break;
case 7:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA0_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,64);
  break;
case 8:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA1_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,128);
  break;
case 9:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA2_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,256);
  break;
case 10:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA2_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,512);
  break;
case 11:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_CMD_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,0x400);
  break;
case 12:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTDI_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,0x800);
  break;
case 13:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTCK_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,0x1000);
  break;
case 14:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTMS_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,0x2000);
  break;
case 15:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTDO_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TS_ADDRESS,0x4000);
  break;
default:
  Serial.println("invaild statement");
  break;
}
}

void GPIO_LOW_MODE(int a){
switch (a)
{
case 0:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO0_U,0);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,1);
  break;
case 1:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_U0TXD_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,2);
  break;
case 2:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO2_U,0);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,4);
  break;
case 3:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_U0RXD_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,8);
  break;
case 4:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO4_U,0);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,16);
  break;
case 5:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO5_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,32);
  break;
case 6:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_CLK_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,64);
  break;
case 7:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA0_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,64);
  break;
case 8:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA1_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,128);
  break;
case 9:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA2_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,256);
  break;
case 10:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_DATA2_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,512);
  break;
case 11:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_SD_CMD_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,0x400);
  break;
case 12:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTDI_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,0x800);
  break;
case 13:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTCK_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,0x1000);
  break;
case 14:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTMS_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,0x2000);
  break;
case 15:
  PIN_FUNC_SELECT(PERIPHS_IO_MUX_MTDO_U,3);
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC_ADDRESS,0x4000);
  break;
default:
  Serial.println("invaild statement");
  break;
}
}

void setup() {
  Serial.begin(9600);
  Serial.println("process start\n:>");
}

void HIGH_SET(){
  int x;
  Serial.println("GPIO PIN");
      while(Serial.available()==0){
        ;
        ;
      }
      x=Serial.parseInt();
      GPIO_HIGH_MODE(x);
      Serial.println("PIN SET HIGH");
}
void LOW_SET(){
  int x;
  Serial.println("GPIO PIN");
      while(Serial.available()==0){
        ;
        ;
      }
      x=Serial.parseInt();
      GPIO_LOW_MODE(x);
      Serial.println("PIN SET LOW");
}

void HELP(){
  Serial.println("gplow - setting gpio pin as low, enter the required gpio pin after entering command");
  Serial.println("gphigh - setting gpio pin as high, enter the required gpio pin after entering command");
}
void INVALID_CMD(){
  Serial.println("Invalid command\nrefer information from the cmd - help");
}

void loop() {
  int i,j,k;
  String str;
  while(Serial.available()==0){
    ;
    ;
    ;
  }
  str=Serial.readString();
  i=strcmp(str.c_str(),gp_high);
  if(i==0){HIGH_SET();}
  j=strcmp(str.c_str(),gp_low);
  if(j==0){LOW_SET();}
  k=strcmp(str.c_str(),help);
  if(k==0){HELP();}
  if((i!=0)&&(j!=0)&&(k!=0)){INVALID_CMD();}
}
