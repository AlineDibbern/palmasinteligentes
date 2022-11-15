# Palmas Inteligentes
Projeto desenvolvido para a matéria de Objetos Inteligentes - Mackenzie

# Objetivo:
O presente projeto possui como objetivo demonstrar que através de simples palmas e por um interruptor digital podemos acender, ou apagar as luzes de um ambiente com auxílio de um controlador. 
   
# Materiais:
Para desenvolvimento do projeto, foram adquiridos:
1. Controlador: Foi adquirido um Arduino UNO R3 com as seguintes especificações do controlador: Microcontrolador: ATmega328, Tensão 5V, 7-12V de Tensão de entrada, 14 Pontos digitais, 6 Portas analógicas, 40mA de Corrente pinos I/O, 50mA de Corrente Pinos 3,3V e 16MHz de Velocidade do Clock.
 
 ![image](https://user-images.githubusercontent.com/111160296/202016192-d0807cd0-3cf5-4c9d-ab09-d6483356cb40.png) 

2. Cabo USB 2.0 – A/B: Foi adquirido um Cabo USB 2.0 – A/B com as seguintes especificações: 50 cm de comprimento, compatível com Arduino, computadores, impressoras, scanners entre outros aparelhos com entrada USB, Windows, Linux e Mac, e com até 11 Mbps de transferência de dados.

![image](https://user-images.githubusercontent.com/111160296/202017319-9834276d-b463-47c8-94df-3167b5b9c15d.png)

3. Modulo sensor de som KY-037: Foi adquirido um Modulo sensor de som KY-037 com as seguintes especificações: com 3.3-5V DC de tensão de operação (VCC), sensibilidade ajustada via potenciômetro, saída digital (DO)/analógica(AO), pinagem Terra (GND) e com LED indicador para saída digital

![image](https://user-images.githubusercontent.com/111160296/202017390-a4b263aa-58bb-4406-aaca-dd941e5f1d18.png)

4. Interruptor eletromecânico (modulo relé): Foi adquirido um Módulo Relé 2 Canais 5V com Optoacoplador com as seguintes especificações: 5VDC (VCC e GND) de Tensão de Operação, 5VCD (IN1 e IN2) de Tensão de sinal, 15~20mA de corrente típica de operação, contato do relé permite tensão de até 250VAC a 10A, 5~10ms de tempo de resposta e com LED de indicador de funcionamento.

![image](https://user-images.githubusercontent.com/111160296/202017433-ea2d9cd6-b75c-4dd2-af6b-c91640e7f028.png)

5. Protoboard 830 pontos: Foi adquirida uma Protoboard 830 pontos com as seguintes especificações: para terminais e condutores de 0,3 a 0,8 mm (20 a 29 AWG), resistência de isolamento de 100MΩ min, tensão máxima de 500v AC por minuto e com 830 furos.

![image](https://user-images.githubusercontent.com/111160296/202017487-5d2623d1-4ef9-4fb1-8469-547b5e83d4c8.png)

6. Jumper macho/fêmea: Foram adquiridas jumpers macho/fêmea de 10cm.

![image](https://user-images.githubusercontent.com/111160296/202017533-081d27f6-b97a-4051-bbbf-435186f6f86e.png)

7. Jumper macho/macho: Foram adquiridas jumpers macho/macho de 10cm.

![image](https://user-images.githubusercontent.com/111160296/202017587-6cfc3b1b-159c-452d-9082-a0da3f079239.png)

8. Adpatdor para ESP01: Foi adquirido um Adaptador USB para Módulo WiFi ESP8266 ESP-01 com as seguintes especificações: Conexão USB-Serial, Chip Controlador CH340G e tensão 6.3V.

Adpatdor para ESP01:
Foi adquirido um Adaptador USB para Módulo WiFi ESP8266 ESP-01 com as seguintes especificações: Conexão USB-Serial, Chip Controlador CH340G e tensão 6.3V.

9. Módulo Wifi:Foi adquirido um Módulo WiFi Serial ESP8266 ESP-01 com as seguintes especificações: Padrão 802.11 b/g/n, Wi-Fi Direct (P2P), contém Stack TCP/IP integrada, segurança WPA, WPA2, tensão 3.3V.

![image](https://user-images.githubusercontent.com/111160296/202017664-87e45c66-e594-4e4d-9cde-d25dfcd941d9.png) 
![image](https://user-images.githubusercontent.com/111160296/202017671-728da6fc-0646-436a-9e13-7606a3679069.png)

10. Plugue macho: Foram adquiridos 2 plugues macho de 2 pinos com as seguintes especificações: 10A até 250V.

![image](https://user-images.githubusercontent.com/111160296/202017731-d1b4f023-4362-4554-b15e-213583e84002.png)

11. Plugue fêmea: Foi adquirido 1 plugue fêmea de 2 pinos com as seguintes especificações: 10A até 250V.

![image](https://user-images.githubusercontent.com/111160296/202017762-2b3ac2cb-2a2d-4d6d-b71f-78e86f920e31.png)

12. Cabo flexível: Foi adquirido 8m de cabo flexível com as seguintes especificações: 750V de tensão, 2,5mm² de seção nominal, cor branco e 0,8mm de espessura. 

![image](https://user-images.githubusercontent.com/111160296/202017797-68c05387-e64c-4c19-9b16-8603187c02bd.png)

13. Soquete bocal de lâmpada - Pendente: Foi adquirido um soquete bocal estilo pendente bivolt na cor preta. 

![image](https://user-images.githubusercontent.com/111160296/202017831-2827b368-0df8-4fbc-a0d2-0d5f9df92191.png)

14. Lâmpada LED 110V: Foi adquirida uma lâmpada de LED Bulbo 110V, 9W da marca FOXLUX.

![image](https://user-images.githubusercontent.com/111160296/202017870-ccd34177-dab9-4c50-9448-93702c3c514e.png)

# Metodologia: 
Etapa 1 - Controlador, Protoboard, Módulo Sensor de Som, Módulo Wifi e Módulo Relé:
Inicialmente, os jumpers foram inseridos no controlador, protoboard, módulo sensor de som e no modulo relé de forma a realizar as funções solicitadas. 

Protoboard ligada ao controlador pela entrada “GND” e “5V”, sendo que o “GND” foi ligado no polo negativo e a entrada de “5V” foi ligada no polo positivo da protoboard, conforme figura abaixo:

![image](https://user-images.githubusercontent.com/111160296/202018063-7ba8b554-add2-418a-8037-da85716bab40.png)

Sensor de som conectado a protoboard, sendo que a entrada “G” do sensor foi ligada ao polo negativo e a entrada “+” do sensor foi ligada ao polo positivo da protoboard.

![image](https://user-images.githubusercontent.com/111160296/202018075-55b4c128-2586-4e44-9432-a3baf900782d.png)

Sensor de som conectado ao controlador, sendo que a entrada “DO” foi ligada à entrada “7” do controlador.

![image](https://user-images.githubusercontent.com/111160296/202018118-17eae7b2-d211-4394-ab8f-7689de1aaecc.png)

Módulo Relé conectado ao Protoboard e Controlador, sendo que a entrada “VCC” do modulo relé foi ligado ao polo positivo da protoboard, e a entrada “GND” do módulo relé foi ligada ao negativo da protoboard. Pela entrada “IN2” o módulo relé foi ligado ao controlador pela entrada ”4”.

![image](https://user-images.githubusercontent.com/111160296/202018147-38ba058f-35ef-441c-9397-52bbe02d887e.png)

Módulo Wifi conectado ao controlador, sendo que a entrada “GND” do módulo wifi foi ligada ao “GND” do controlador, a entrada “GPIO2” do módulo wifi foi ligado a entrada “A5” do controlador, a entrada “GPIO0” do módulo wifi foi ligada a entrada do “A4” do controlador, e as entradas “VCC” e “CH_PD” do módulo wifi foi ligada a entrada 3.3V do controlador.

![image](https://user-images.githubusercontent.com/111160296/202018183-c63ac283-d7e6-4f1d-9cfb-c19a38ebe244.png)

Na prática, o esquema eletrônico foi montado conforma figura abaixo:
![image](https://user-images.githubusercontent.com/111160296/202018274-7c2511cb-0cd4-444c-9e47-1d02c412b6e5.png)

Etapa 2 - Controlador e notebook:
Em seguida, o controlador foi ligado ao computador por meio do cabo USB, e por meio deste foi configurado para o objetivo deste projeto. Além da configuração, o computador fornece energia elétrica ao controlador.

![image](https://user-images.githubusercontent.com/111160296/202018235-99550858-4a20-4388-8945-3fbcfbff75aa.png)

Etapa 3 - Módulo Relé e Lâmpada:
O cabo flexível foi instalado no modulo de relé e nos plugues macho/fêmea, sendo que o plugue macho foi inserido na tomada 110V da casa.

![image](https://user-images.githubusercontent.com/111160296/202018356-1e5f69ea-6cf2-47aa-966c-372dacf12811.png)

Etapa 4 - Lâmpada e Soquete bocal: 
O cabo flexível foi instalado no bocal da lâmpada, onde a mesma foi inserida, e em um dos plugues machos.

![image](https://user-images.githubusercontent.com/111160296/202018386-4a72e462-6122-452c-a009-b861daa0b3c8.png)
![image](https://user-images.githubusercontent.com/111160296/202018391-0606a946-2004-419d-8de4-4f71101f49d4.png)

![image](https://user-images.githubusercontent.com/111160296/202018408-fddcc874-d38d-4879-b1a8-9e5ec837ef8d.png)
![image](https://user-images.githubusercontent.com/111160296/202018423-65edd7ea-cc14-4261-9745-ea4b07d62a98.png)
![image](https://user-images.githubusercontent.com/111160296/202018440-987e1c6f-01de-4922-854c-4c1f061bcb62.png)

# Configurando o Controlador:
Criando o interruptor digital na Internet:
No site/app da adafruit (ADAFRUIT, 2022), que utiliza o protocolo MQTT, foi desenvolvido o interruptor digital com os botões de ON (1) e OFF (9). Foi inserido a biblioteca da adafruit na biblioteca da IDE do Arduino que será utilizada para configurar o controlador, o Módulo de Wifi, o Módulo Relé e o interruptor digital. 

![image](https://user-images.githubusercontent.com/111160296/202017119-f3bf68ad-0db6-4dfd-951b-ec531534b192.png)
![image](https://user-images.githubusercontent.com/111160296/202017131-5e3ad179-b779-477c-93e9-97f1943e10a7.png)


Configurando o Módulo Wifi pela IDE (parte 1):
Para configurar o Modulo Wifi ESP8266 ESP-01 deverá ser utilizado um Adaptador USB para Módulo WiFi ESP8266 ESP-01 e a biblioteca A2 (BRINCANDO DOM IDEIAS, 2022). Após acoplar o ESP8266 ao adaptador, o mesmo deverá ser inserido na porta USB do computador em forma de gravação. Para compilação do Sketch Master e Config.h no próprio ESP8266 ESP-01 deverá ser selecionado “Ferramentas”  Placa  ESP8266  Generic ESP8266 Modulo, e “Ferramentas”  Porta  COM X, onde X é um número da porta definido pelo computador.

Codificação utilizada no Sketch Master:
// INCLUSÃO DE BIBLIOTECAS
#include <A2a.h>
#include "config.h"

// DEFINIÇÕES
#define endereco 0x08
#define pinLED1 3
#define pinLED2 4
#define pinosom 7

// INSTANCIANDO OBJETOS
AdafruitIO_Feed *displayLED = io.feed("displayLED");

A2a arduinoSlave;

// DECLARAÇÃO DE FUNÇÕES
void configuraMQTT();
void retornoDisplayLED(AdafruitIO_Data *data);

// DECLARAÇÃO DE VARIÁVEIS
bool comandoRecebido = false;

void setup() {
  
  Serial.begin(9600);
  while (! Serial);

  configuraMQTT();

  arduinoSlave.begin(0, 2);
  Serial.println("Atualizando valor do Display de LED");
  
  displayLED->get();
  io.run();
  
  Serial.println("Fim Setup");
}

void loop() {
  io.run();
}

// IMPLEMENTO DE FUNÇÕES
void configuraMQTT() {
  Serial.print("Conectando ao Adafruit IO");
  io.connect();

  displayLED->onMessage(retornoDisplayLED);
  
  while (io.status() < AIO_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  Serial.println();
  Serial.println(io.statusText());
}

void retornoDisplayLED(AdafruitIO_Data *data) {
  Serial.print("Controle Recebido <- ");  
  Serial.println(data->value());
  
  arduinoSlave.varWireWrite(endereco, 2, byte(data->toInt()));
}

Codificação utilizada no Sketch config.h:
/************************ Adafruit IO Config *******************************
/// visit io.adafruit.com if you need to create an account,
// or if you need your Adafruit IO key.
#define IO_USERNAME  "AlineDibbern"
#define IO_KEY       "aio_AYqN284WRlXuflUHr0NeSF4FYi5p"
/******************************* WIFI **************************************/
#define WIFI_SSID "Dibbern"
#define WIFI_PASS "nikita12"

#include "AdafruitIO_WiFi.h"

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS);
/****************************************************************************/


Configurando o Módulo Wifi (parte 2) e o Módulo Sensor de Som pela IDE:
Para configurar o controlador para que faça com que receba e envie comandos do Modulo Wifi ESP8266 ESP-01 e do Módulo Sensor de Som ao módulo relé, deverão ser acoplados os Módulos ao controlador, por meio dos jumpers, e o controlador ao notebook por meio da porta de USB. Para compilação do código deverá ser utilizado o Sketch Slave.ino, que possui a biblioteca “A2” (BRINCANDO DOM IDEIAS, 2022) e a codificação de comandos, e para ser compilado no controlador deverá ser selecionado “Ferramentas”  Arduino AVR Boards  Arduino UNO e “Ferramentas”  Porta  COM X, onde X é um número de porta definido pelo computador.

Codificação utilizada no Sketch Slave:
#include <A2a.h>
#define endereco 0x08

#define pinLED1 3
#define pinLED2 4
#define pinosom 7

A2a arduinoMaster;

byte displayLEDAnt;
bool rele;

void setup() {
  arduinoMaster.begin(endereco);
  arduinoMaster.onReceive(receberDados);
  arduinoMaster.onRequest(enviarDados);

  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode (pinosom, INPUT);
  
  rele=false;

  Serial.begin(9600);
}

void loop() {   
  byte displayLED = arduinoMaster.varWireRead(2);
  bool rele = digitalRead(pinosom);
  if ((displayLED != displayLEDAnt) ||(rele=!rele) ||((pinosom)==HIGH)) {
      digitalWrite(pinLED2, displayLED >= 2);
      displayLEDAnt = displayLED; 
  }
  digitalWrite(pinLED2,rele);
}

void receberDados() {
  arduinoMaster.receiveData(); 
}

void enviarDados() {
  arduinoMaster.sendData(); 
}


3. A descrição do hardware utilizado (plataformas de desenvolvimento, sensores, atuadores, impressão 3D de peças, medidas de peças e caixas etc.)

    3.1


4. A documentação das interfaces, protocolos e módulos de comunicação.

    4.1


5. O projeto deve possuir comunicação/controle via internet (TCP/IP) e uso do Protocolo MQTT.

    5.1

