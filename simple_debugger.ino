#define GPIO_IN 0x60000318
#define GPIO_ENABLE_W1TC 0x60000314 
char gp_low[6]="gplow";
char help[5]="help";
char gp_high[7]="gphigh";
char gp_read[7]="gpread";
void GPIO_HIGH_MODE(){
int x;
sta:
  Serial.println("GPIO PIN");
      while(Serial.available()==0){
        ;
        ;
      }
      x=Serial.parseInt();
switch (x)
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
  goto sta;
}
Serial.println("PIN SET HIGH");
}

void GPIO_LOW_MODE(){
int x;
star:
  Serial.println("GPIO PIN");
      while(Serial.available()==0){
        ;
        ;
      }
      x=Serial.parseInt();
switch (x)
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
  goto star;
}
Serial.println("PIN SET LOW");
}

int GPIO_READ(){
  GPIO_REG_WRITE(GPIO_ENABLE_W1TC,0xffff);
  int i,level,l;
  ret:
  Serial.println("(1)Input at this instant\n(2)Exit");
  while(Serial.available()==0){
    ;
    ;
  }
  l=Serial.parseInt();
  if(l==1){
    x:
    Serial.println("(1)Specific pin\n(2)All pins");
    while(Serial.available()==0){
    ;
    ;
  }
  l=Serial.parseInt();
  if(l==1){
    z:
    Serial.println("PIN:");
    while(Serial.available()==0){
    ;
    ;
  }
  i=Serial.parseInt();
  if(i<16){
  level=GPIO_REG_READ(GPIO_IN);
  decToBinary(level,i,1);}
  else{
    Serial.println("invalid cmd");
    goto z;
  }
  }
  else if (l==2)
  {
    level=GPIO_REG_READ(GPIO_IN);
    decToBinary(level,0,0);
  }
  else{
    Serial.println("invalid cmd");
    goto x;
  }
  }
  else if(l==2){
    return 0;
  }
  else{
   Serial.println("invalid cmd");
   goto ret; 
  }
  return 0;
}


void decToBinary(int n,int x,int boo)
{
    int binaryNum[16];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    if(boo==0){
    for (int j = i - 1; j >= 0; j--){
        Serial.print(binaryNum[j]);}
        Serial.println("\nfirst digit MSB/GPIO 16");}
    if(boo==1){
      Serial.print(binaryNum[x]);
    }
}

void setup() {
  Serial.begin(9600);
  Serial.println("process start\n:>");
}

void HELP(){
  Serial.println("gplow - setting gpio pin as low, enter the required gpio pin after entering command");
  Serial.println("gphigh - setting gpio pin as high, enter the required gpio pin after entering command");
  Serial.println("gpread - reads from gpio pin, enter the pin number to read after entering cmd");
}
void INVALID_CMD(){
  Serial.println("Invalid command\nrefer information from the cmd - help");
}


void loop() {
  int i;
  String str;
  while(Serial.available()==0){
    ;;;
  }
  str=Serial.readString();
  i=strcmp(str.c_str(),gp_high);
  if(i==0){GPIO_HIGH_MODE();
  goto skip;}
  i=strcmp(str.c_str(),gp_low);
  if(i==0){GPIO_LOW_MODE();
  goto skip;}
  i=strcmp(str.c_str(),help);
  if(i==0){HELP();
  goto skip;}
  i=strcmp(str.c_str(),gp_read);
  if(i==0){GPIO_READ();
  goto skip;}
  if(i!=0){INVALID_CMD();}
  skip:
  ;
}
