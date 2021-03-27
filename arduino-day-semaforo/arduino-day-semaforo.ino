const int VERMELHO1 = 2;
const int AMARELO1 = 3;
const int VERDE1 = 4;

const int VERMELHO2 = 5;
const int AMARELO2 = 6;
const int VERDE2 = 7;

int intervaloLongo = 2000;
int intervaloCurto = 1000;

void setup()
{
  // uma única vez
  pinMode(VERMELHO1, OUTPUT);
  pinMode(AMARELO1, OUTPUT);
  pinMode(VERDE1, OUTPUT);
  pinMode(VERMELHO2, OUTPUT);
  pinMode(AMARELO2, OUTPUT);
  pinMode(VERDE2, OUTPUT);
}

void loop()
{
  // depois do setup, repetido até o final
  aberto1();
  aberto2();  
}

void aberto1()
{
  digitalWrite(VERMELHO1, LOW);
  digitalWrite(AMARELO1, LOW);
  digitalWrite(VERDE1, HIGH);
  digitalWrite(VERMELHO2, HIGH);
  digitalWrite(AMARELO2, LOW);
  digitalWrite(VERDE2, LOW);
  delay(intervaloLongo);
  
  digitalWrite(VERMELHO1, LOW);
  digitalWrite(AMARELO1, HIGH);
  digitalWrite(VERDE1, LOW);
  digitalWrite(VERMELHO2, HIGH);
  digitalWrite(AMARELO2, LOW);
  digitalWrite(VERDE2, LOW);
  delay(intervaloCurto);
}

void aberto2()
{
  digitalWrite(VERMELHO1, HIGH);
  digitalWrite(AMARELO1, LOW);
  digitalWrite(VERDE1, LOW);
  digitalWrite(VERMELHO2, LOW);
  digitalWrite(AMARELO2, LOW);
  digitalWrite(VERDE2, HIGH);
  delay(intervaloLongo);
  
  digitalWrite(VERMELHO1, HIGH);
  digitalWrite(AMARELO1, LOW);
  digitalWrite(VERDE1, LOW);
  digitalWrite(VERMELHO2, LOW);
  digitalWrite(AMARELO2, HIGH);
  digitalWrite(VERDE2, LOW);
  delay(intervaloCurto);
}
