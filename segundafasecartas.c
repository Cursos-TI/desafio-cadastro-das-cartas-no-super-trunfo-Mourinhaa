#include <stdio.h>
int main(){

  /*Dividi os paises em ALpha e BEta e os estados númerados e catalogados por letras, com suas 
    respectivas cidades de ALpha: A01, A02, A03, A04... até H04
                           BEta: A001, A002, A003, A004... ATÉ H004*/
    
    
    //Dados casdastrais do país ALpha.
    
    //Dados cadastrais do estado ALpha1. (A)

    char cidade1 [4] = "A01";  //variável para o nome da primeira cidade ALpha.
    double populacao1 = 742.452;  //variável para a população da primeira cidade ALpha.
    double area1 = 532.506;  //variável para o tamanho da primeira cidade ALpha.
    float pib1;  //variável para o pib da primeira cidade ALpha.
    char turismo1 = '9';  //variável para os pontos turisticos da primeira cidade ALpha.
    
    char cidade2 [4] = "A02";  //variável para o nome da segunda cidade ALpha.
    double populacao2 = 323.543;  //variável para a população da segunda cidade ALpha.
    double area2 = 703.569;  //variável para o tamanho da segunda cidade ALpha.
    float pib2;  //variável para o pib da segunda cidade ALpha.
    char turismo2 = '3';  //variável para os pontos turisticos da segunda cidade ALpha.

    char cidade3 [4] = "A03";  //variável para o nome da terceira cidade ALpha.
    double populacao3 = 254.445;  //variável para a população da terceira cidade ALpha.
    double area3 = 913.445;  //variável para o tamanho da terceira cidade ALpha.
    float pib3;  //variável para o pib da terceira cidade ALpha.
    char turismo3 = '9';  //variável para os pontos turisticos da terceira cidade ALpha.

    char cidade4 [4] = "A04";  //variável para o nome da quarta cidade ALpha.
    double populacao4 = 743.603;  //variável para a população da quarta cidade ALpha.
    double area4 = 249.506;  //variável para o tamanho da quarta cidade ALpha.
    float pib4;  //variável para o pib da quarta cidade ALpha.
    char turismo4 = '0';  //variável para os pontos turisticos da quarta cidade ALpha.
    
    //Dados cadastrais do estado ALpha2. (B)

    char cidade5 [4] = "B01";  //variável para o nome da quinta cidade ALpha.
    double populacao5 = 935.012;  //variável para a população da quinta cidade ALpha.
    double area5 = 612.231;  //variável para o tamanho da quinta cidade ALpha.
    float pib5;  //variável para o pib da quinta cidade ALpha.
    char turismo5 = '2';  //variável para os pontos turisticos da quinta cidade ALpha.
    
    char cidade6 [4] = "B02";  //variável para o nome da sexta cidade ALpha.
    double populacao6 = 241.234;  //variável para a população da sexta cidade ALpha.
    double area6 = 631.123;  //variável para o tomanho da sexta cidade ALpha.
    float pib6;  //variável para o pib da sexta cidade de ALpha.
    char turismo6 = '6';  //variável para os pontos turisticos da sexta cidade ALpha.

    char cidade7 [4] = "B03";  //variável para o nome da setima cidade ALpha.
    double populacao7 = 254.673;  //variável para a população da setima cidade ALpha.
    double area7 = 589.143;  //variável para o tamanho da setima cidade ALpha.
    float pib7;  //variável para o pib da setima cidade ALpha.
    char turismo7 = '8';  //variável para os pontos turisticos da setima cidade ALpha.

    char cidade8 [4] = "B04";  //variável para o nome da oitava cidade ALpha.
    double populacao8 = 305.573;  //variável para a população da oitava cidade ALpha.
    double area8 = 550.143;  //variável para o tamanho da oitava cidade ALpha.
    float pib8;  //variável para o pib da oitava cidade ALpha.
    char turismo8 = '6';  //variável para os pontos turisticos da oitava cidade ALpha.

    //Dados cadastrais do estado ALpha3. (C)

    char cidade9 [4] = "C01";  //variável para o nome da nona cidade ALpha.
    double populacao9 = 255.135;  //variável para a população da nona cidade ALpha.
    double area9 = 612.231;  //variável para o tamanho da nona cidade ALpha.
    float pib9;  //variável para o pib da nona cidadade ALpha.
    char turismo9 = '2';  //variável para os pontos turisticos da nona cidade ALpha.
    
    char cidade10 [4] = "C02";  //variável para o nome da decima cidade ALpha.
    double populacao10 = 241.234;  //variável para a população da decima cidade ALpha.
    double area10 = 631.123;  //variável para o tamanho da decima cidade ALpha.
    float pib10;  //variável para o pib da decima cidade ALpha.
    char turismo10 = '6';  //variável para os pontos turisticos da decima cidade ALpha.

    char cidade11 [4] = "C03";  //variável para o nome da decima primeira cidade ALpha.
    double populacao11 = 254.901;  //variável para a população da decima primeira cidade ALpha.
    double area11 = 602.133;  //variável para o tamanho da decima primeira cidade ALpha.
    float pib11;  //variável para o pib da decima primeira cidade ALpha.
    char turismo11 = '8';  //variável para os pontos turisticos da decima primeira cidade ALpha.

    char cidade12 [4] = "C04";  //variável para o nome da decima segunda cidade ALpha.
    double populacao12 = 223.151;  //variável para a população da decima segunda cidade ALpha.
    double area12 = 612.156;  //variável para o tamanho da decima segunda cidade ALpha.
    float pib12;  //variável para o pib da decima segunda cidade ALpha.
    char turismo12 = '7';  //variável para os pontos turisticos da decima segunda cidade ALpha.

    //Dados cadastrais do estado ALpha4. (D)

    char cidade13 [4] = "D01";  //variável para o nome da decima terceira cidade ALpha.
    double populacao13 = 255.135;  //variável para a população da decima terceira cidade ALpha.
    double area13 = 612.231;  //variável para o tamanho da decima terceira cidade ALpha.
    float pib13;  //variável para o pib da decima terceira cidade ALpha.
    char turismo13 = '2';  //variável para os pontos turisticos da decima terceira cidade ALpha.
    
    char cidade14 [4] = "D02";  //variável para o nome da decima quarta cidade ALpha.
    double populacao14 = 241.234;  //variável para a população da decima quarta cidade ALpha.
    double area14 = 631.123;  //variável para o tamanho da decima quarta cidade ALpha.
    float pib14;  //variável para o pib da decima quarta cidade ALpha.
    char turismo14 = '6';  //variável para os pontos turisticos da decima quarta cidade ALpha.

    char cidade15 [4] = "D03";  //variável para o nome da decima quinta cidade ALpha.
    double populacao15 = 501.138;  //variável para a população da decima quinta cidade ALpha.
    double area15 = 608.243;  //variável para o tamanho da decima quinta cidade ALpha.
    float pib15;  //variável para o pib da decima quinta cidade ALpha.
    char turismo15 = '8';  //variável para os pontos turisticos da decima quinta cidade ALpha.

    char cidade16 [4] = "D04";  //variável para o nome da decima sexta cidade ALpha.
    double populacao16 = 270.248;  //variável para a população da decima sexta cidade ALpha.
    double area16 = 612.156;  //variável para o tamanho da decima sexta cidade ALpha.
    float pib16;  //variável para o pib da decima sexta cidade ALpha.
    char turismo16 = '8';  //variável para os pontos turisticos da decima sexta cidade ALpha.

    //Dados cadastrais do estado ALpha5. (E)

    char cidade17 [4] = "E01";  //variável para o nome da decima setima cidade ALpha.
    double populacao17 = 753.158;  //variável para a população da decima setima cidade ALpha.
    double area17 = 813.121;  //variável para o tamanho da decima setima cidade ALpha.
    float pib17;  //variável para o pib da decima setima cidade ALpha.
    char turismo17 = '9';  //variável para os pontos turisticos da decima setima cidade ALpha.
    
    char cidade18 [4] = "E02";  //variável para o nome da decima oitava cidade ALpha.
    double populacao18 = 90.121;  //variável para a população da decima oitava cidade ALpha.
    double area18 = 153.505;  //variável para o tamanho da decima oitava cidade ALpha.
    float pib18;  //variável para o pib da decima oitava cidade ALpha.
    char turismo18 = '6';  //variável para os pontos turisticos da decima oitava cidade ALpha.

    char cidade19 [4] = "E03";  //variável para o nome da decima nona cidade ALpha.
    double populacao19 = 354.445;  //variável para a população da decima nona cidade ALpha.
    double area19 = 913.456;  //variável para o tamanho da decima nona cidade ALpha.
    float pib19;  //variável para o pib da decima nona cidade ALpha.
    char turismo19 = '7';  //variável para os pontos turisticos da decima nona cidade ALpha.

    char cidade20 [4] = "E04";  //variável para o nome da vigesima cidade ALpha.
    double populacao20 = 843.603;  //variável para a população da vigesima cidade ALpha.
    double area20 = 249.506;  //variável para o tamanho da vigesima cidade ALpha.
    float pib20;  //variável para o pib da vigesima cidade ALpha.
    char turismo20 = '0';  //variável para os pontos turisticos da vigesima cidade ALpha.
    
    //Dados cadastrais do estado ALpha6. (F)

    char cidade21 [4] = "F01";  //variável para o nome da vigesima primeira cidade ALpha.
    double populacao21 = 939.012;  //variável para a população da decima vigesima primeira ALpha.
    double area21 = 682.231;  //variável para o tamanho da vigesima primeira cidade ALpha.
    float pib21;  //variável para o pib da vigesima primeira cidade ALpha.
    char turismo21 = '4';  //variável para os pontos turisticos da vigesima primeira cidade ALpha.
    
    char cidade22 [4] = "F02";  //variável para o nome da vigesima segunda cidade ALpha.
    double populacao22 = 281.294;  //variável para a população da vigesima segunda cidade ALpha.
    double area22 = 531.723;  //variável para o tomanho da vigesima segunda cidade ALpha.
    float pib22;  //variável para o pib da vigesima segunda cidade de ALpha.
    char turismo22 = '6';  //variável para os pontos turisticos da vigesima segunda cidade ALpha.

    char cidade23 [4] = "F03";  //variável para o nome da vigesima terceira cidade ALpha.
    double populacao23 = 254.933;  //variável para a população da vigesima terceira cidade ALpha.
    double area23 = 699.143;  //variável para o tamanho da vigesima terceira cidade ALpha.
    float pib23;  //variável para o pib da vigesima terceira cidade ALpha.
    char turismo23 = '8';  //variável para os pontos turisticos da vigesima terceira cidade ALpha.

    char cidade24 [4] = "F04";  //variável para o nome da vigesima quarta cidade ALpha.
    double populacao24 = 310.563;  //variável para a população da vigesima quarta cidade ALpha.
    double area24 = 630.179;  //variável para o tamanho da vigesima quarta cidade ALpha.
    float pib24;  //variável para o pib da vigesima quarta cidade ALpha.
    char turismo24 = '5';  //variável para os pontos turisticos da vigesima quarta cidade ALpha.

    //Dados cadastrais do estado ALpha7. (G)

    char cidade25 [4] = "G01";  //variável para o nome da vigesima quinta cidade ALpha.
    double populacao25 = 296.745;  //variável para a população da vigesima quinta cidade ALpha.
    double area25 = 689.221;  //variável para o tamanho da vigasima quinta cidade ALpha.
    float pib25;  //variável para o pib da vigesima quinta cidadade ALpha.
    char turismo25 = '3';  //variável para os pontos turisticos da vigesima quinta cidade ALpha.
    
    char cidade26 [4] = "G02";  //variável para o nome da vigesima sexta cidade ALpha.
    double populacao26 = 241.234;  //variável para a população da vigesima sexta cidade ALpha.
    double area26 = 631.123;  //variável para o tamanho da vigesima sexta cidade ALpha.
    float pib26;  //variável para o pib da vigesima sexta cidade ALpha.
    char turismo26 = '6';  //variável para os pontos turisticos da vigesima sexta cidade ALpha.

    char cidade27 [4] = "G03";  //variável para o nome da vigesima setima cidade ALpha.
    double populacao27 = 267.921;  //variável para a população da vigesima setima cidade ALpha.
    double area27 = 582.143;  //variável para o tamanho da vigesima setima cidade ALpha.
    float pib27;  //variável para o pib da vigesima setima cidade ALpha.
    char turismo27 = '7';  //variável para os pontos turisticos da vigesima setima cidade ALpha.

    char cidade28 [4] = "G04";  //variável para o nome da vigesima oitava da cidade de ALpha.
    double populacao28 = 201.681;  //variável para a população da vigesima oitava cidade de ALpha.
    double area28 = 612.156;  //variável para o tamanho da vigesima oitava cidade de ALpha.
    float pib28;  //variável para o pib da vigesima oitava cidade de ALpha.
    char turismo28 = '4';  //variável para os pontos turisticos da vigesima oitava cidade de ALpha.

    //Dados cadastrais do estado ALpha8. (H)

    char cidade29 [4] = "H01";  //variável para o nome da vigesima nona cidade ALpha.
    double populacao29 = 255.135;  //variável para a população da vigesima nona cidade ALpha.
    double area29 = 612.231;  //variável para o tamanho da vigesima nona cidade ALpha.
    float pib29;  //variável para o pib da vigesima nona cidade ALpha.
    char turismo29 = '2';  //variável para os pontos turisticos da vigesima nona cidade ALpha.
    
    char cidade30 [4] = "H02";  //variável para o nome da trigesima cidade ALpha.
    double populacao30 = 241.234;  //variável para a população da trigesima cidade ALpha.
    double area30 = 631.123;  //variável para o tamanho da trigesima cidade ALpha.
    float pib30 ;  //variável para o pib da trigesima cidade ALpha.
    char turismo30 = '6';  //variável para os pontos turisticos da trigesima cidade ALpha.

    char cidade31 [4] = "H03";  //variável para o nome da trigesima primeira cidade ALpha.
    double populacao31 = 560.788;  //variável para a população da dec trigesima primeira cidade ALpha.
    double area31 = 668.643;  //variável para o tamanho da trigesima primeira cidade ALpha.
    float pib31;  //variável para o pib da trigesima primeira cidade ALpha.
    char turismo31 = '7';  //variável para os pontos turisticos da trigesima primeira cidade ALpha.

    char cidade32 [4] = "H04";  //variável para o nome da trigesima segunda cidade ALpha.
    double populacao32 = 283.098;  //variável para a população da trigesima segunda cidade ALpha.
    double area32 = 604.676;  //variável para o tamanho da trigesima segunda cidade ALpha.
    float pib32;  //variável para o pib da trigesima segunda cidade ALpha.
    char turismo32 = '7';  //variável para os pontos turisticos da trigesima segunda cidade ALpha.
    
    //Dados cadastrais do país BEta.

    //Dados cadastrais do estado BEta1.

    char Cidade1 [4] = "A001";  //variável para o nome da primeira cidade BEta.
    double Populacao1 = 412.092;  //variável para a população da primeira cidade BEta.
    double Area1 = 232.543;  //variável para o tamanho da primeira cidade BEta.
    float Pib1;  //variável para o pib da primeira cidade BEta.
    char Turismo1 = '3';  //variável para os pontos turisticos da primeira cidade BEta.
    
    char Cidade2 [4] = "A002";  //variável para o nome da segunda cidade BEta.
    double Populacao2 = 631.673;  //variável para a população da segunda cidade BEta.
    double Area2 = 821.439;  //variável para o tamanho da segunda cidade BEta.
    float Pib2;  //variável para o pib da segunda cidade BEta.
    char Turismo2 = '7';  //variável para os pontos turisticos da segunda cidade BEta.

    char Cidade3 [4] = "A003";  //variável para o nome da terceira cidade BEta.
    double Populacao3 = 254.445;  //variável para a população da terceira cidade BEta.
    double Area3 = 913.445;  //variável para o tamanho da terceira cidade BEta.
    float Pib3;  //variável para o pib da terceira cidade BEta.
    char Turismo3 = '9';  //variável para os pontos turisticos da terceira cidade BEta.

    char Cidade4 [4] = "A004";  //variável para o nome da quarta cidade BEta.
    double Populacao4 = 501.393;  //variável para a população da quarta cidade BEta.
    double Area4 = 309.076;  //variável para o tamanho da quarta cidade BEta.
    float Pib4;  //variável para o pib da quarta cidade BEta.
    char Turismo4 = '7';  //variável para os pontos turisticos da quarta cidade BEta.
    
    //Dados cadastrais do estado BEta2. (B)

    char Cidade5 [4] = "B001";  //variável para o nome da quinta cidade BEta.
    double Populacao5 = 964.012;  //variável para a população da quinta cidade BEta.
    double Area5 = 904.121;  //variável para o tamanho da quinta cidade BEta.
    float Pib5;  //variável para o pib da quinta cidade BEta.
    char Turismo5 = '5';  //variável para os pontos turisticos da quinta cidade BEta.
    
    char Cidade6 [4] = "B002";  //variável para o nome da sexta cidade BEta.
    double Populacao6 = 90.258;  //variável para a população da sexta cidade BEta.
    double Area6 = 571.753;  //variável para o tomanho da sexta cidade BEta.
    float Pib6;  //variável para o pib da sexta cidade de BEta.
    char Turismo6 = '2';  //variável para os pontos turisticos da sexta cidade BEta.

    char Cidade7 [4] = "B003";  //variável para o nome da setima cidade BEta.
    double Populacao7 = 261.673;  //variável para a população da setima cidade BEta.
    double Area7 = 409.143;  //variável para o tamanho da setima cidade BEta.
    float Pib7;  //variável para o pib da setima cidade BEta.
    char Turismo7 = '9';  //variável para os pontos turisticos da setima cidade BEta.

    char Cidade8 [4] = "B004";  //variável para o nome da oitava cidade BEta.
    double Populacao8 = 402.589;  //variável para a população da oitava cidade BEta.
    double Area8 = 602.187;  //variável para o tamanho da oitava cidade BEta.
    float Pib8;  //variável para o pib da oitava cidade BEta.
    char Turismo8 = '5';  //variável para os pontos turisticos da oitava cidade BEta.

    //Dados cadastrais do estado BEta3. (C)

    char Cidade9 [4] = "C001";  //variável para o nome da nona cidade BEta.
    double Populacao9 = 293.295;  //variável para a população da nona cidade BEta.
    double Area9 = 420.209;  //variável para o tamanho da nona cidade BEta.
    float Pib9;  //variável para o pib da nona cidadade BEtA.
    char Turismo9 = '4';  //variável para os pontos turisticos da nona cidade BEta.
    
    char Cidade10 [4] = "C002";  //variável para o nome da decima cidade BEta.
    double Populacao10 = 241.234;  //variável para a população da decima cidade BEtA.
    double Area10 = 631.123;  //variável para o tamanho da decima cidade BEta.
    float Pib10;  //variável para o pib da decima cidade BEta.
    char Turismo10 = '6';  //variável para os pontos turisticos da decima cidade BEta.

    char Cidade11 [4] = "C003";  //variável para o nome da decima primeira cidade BEtA.
    double Populacao11 = 310.983;  //variável para a população da decima primeira cidade BEta.
    double Area11 = 502.311;  //variável para o tamanho da decima primeira cidade BEta.
    float Pib11;  //variável para o pib da decima primeira cidade BEta.
    char Turismo11 = '7';  //variável para os pontos turisticos da decima primeira cidade BEta.

    char Cidade12 [4] = "C004";  //variável para o nome da decima segunda cidade BEta.
    double Populacao12 = 263.061;  //variável para a população da decima segunda cidade BEta.
    double Area12 = 501.126;  //variável para o tamanho da decima segunda cidade BEta.
    float Pib12;  //variável para o pib da decima segunda cidade BEta.
    char Turismo12 = '6';  //variável para os pontos turisticos da decima segunda cidade BEta.

    //Dados cadastrais do estado BEta4. (D)

    char Cidade13 [4] = "D001";  //variável para o nome da decima terceira cidade BEta.
    double Populacao13 = 325.153;  //variável para a população da decima terceira cidade BEta.
    double Area13 = 722.221;  //variável para o tamanho da decima terceira cidade BEta.
    float Pib13;  //variável para o pib da decima terceira cidade BEta.
    char Turismo13 = '6';  //variável para os pontos turisticos da decima terceira cidade BEta.
    
    char Cidade14 [4] = "D002";  //variável para o nome da decima quarta cidade BEta.
    double Populacao14 = 212.233;  //variável para a população da decima quarta cidade BEta.
    double Area14 =641.243;  //variável para o tamanho da decima quarta cidade BEta.
    float Pib14;  //variável para o pib da decima quarta cidade BEta.
    char Turismo14 = '0';  //variável para os pontos turisticos da decima quarta cidade BEta.

    char Cidade15 [4] = "D003";  //variável para o nome da decima quinta cidade BEta.
    double Populacao15 = 421.648;  //variável para a população da decima quinta cidade BEta.
    double Area15 = 521.863;  //variável para o tamanho da decima quinta cidade BEta.
    float Pib15;  //variável para o pib da decima quinta cidade ALpha.
    char Turismo15 = '6';  //variável para os pontos turisticos da decima quinta cidade BEta.

    char Cidade16 [4] = "D004";  //variável para o nome da decima sexta cidade BEta.
    double Populacao16 = 302.254;  //variável para a população da decima sexta cidade BEta.
    double Area16 = 678.003;  //variável para o tamanho da decima sexta cidade BEta.
    float Pib16;  //variável para o pib da decima sexta cidade BEta.
    char Turismo16 = '7';  //variável para os pontos turisticos da decima sexta cidade BEta.

    //Dados cadastrais do estado BEta5. (E)

    char Cidade17 [4] = "E001";  //variável para o nome da decima setima cidade BEta.
    double Populacao17 = 642.228;  //variável para a população da decima setima cidade BEta.
    double Area17 = 734.021;  //variável para o tamanho da decima setima cidade BEta.
    float Pib17;  //variável para o pib da decima setima cidade BEta.
    char Turismo17 = '6';  //variável para os pontos turisticos da decima setima cidade BEta.
    
    char Cidade18 [4] = "E002";  //variável para o nome da decima oitava cidade BEta.
    double Populacao18 = 100.031;  //variável para a população da decima oitava cidade BEta.
    double Area18 = 243.065;  //variável para o tamanho da decima oitava cidade BEta.
    float Pib18;  //variável para o pib da decima oitava cidade BEta.
    char Turismo18 = '4';  //variável para os pontos turisticos da decima oitava cidade BEta.

    char Cidade19 [4] = "E003";  //variável para o nome da decima nona cidade BEta.
    double Populacao19 = 402.445;  //variável para a população da decima nona cidade BEta.
    double Area19 = 811.236;  //variável para o tamanho da decima nona cidade BEta.
    float Pib19;  //variável para o pib da decima nona cidade BEta.
    char Turismo19 = '6';  //variável para os pontos turisticos da decima nona cidade BEta.

    char Cidade20 [4] = "E004";  //variável para o nome da vigesima cidade BEta.
    double Populacao20 = 921.702;  //variável para a população da vigesima cidade BEta.
    double Area20 = 232.500;  //variável para o tamanho da vigesima cidade BEta.
    float Pib20;  //variável para o pib da vigesima cidade BEta.
    char Turismo20 = '2';  //variável para os pontos turisticos da vigesima cidade BEta.
    
    //Dados cadastrais do estado BEta6. (F)

    char Cidade21 [4] = "F001";  //variável para o nome da vigesima primeira cidade BEta.
    double Populacao21 = 999.122;  //variável para a população da decima vigesima primeira BEta.
    double Area21 = 682.231;  //variável para o tamanho da vigesima primeira cidade BEta.
    float Pib21;  //variável para o pib da vigesima primeira cidade BEta.
    char Turismo21 = '6';  //variável para os pontos turisticos da vigesima primeira cidade BEta.
    
    char Cidade22 [4] = "F002";  //variável para o nome da vigesima segunda cidade BEta.
    double Populacao22 = 390.564;  //variável para a população da vigesima segunda cidade BEta.
    double Area22 = 611.233;  //variável para o tomanho da vigesima segunda cidade BEta.
    float Pib22;  //variável para o pib da vigesima segunda cidade de BEta.
    char Turismo22 = '4';  //variável para os pontos turisticos da vigesima segunda cidade BEta.

    char Cidade23 [4] = "F003";  //variável para o nome da vigesima terceira cidade BEta.
    double Populacao23 = 132.803;  //variável para a população da vigesima terceira cidade BEta.
    double Area23 = 730.203;  //variável para o tamanho da vigesima terceira cidade BEta.
    float Pib23;  //variável para o pib da vigesima terceira cidade BEta.
    char Turismo23 = '9';  //variável para os pontos turisticos da vigesima terceira cidade BEta.

    char Cidade24 [4] = "F004";  //variável para o nome da vigesima quarta cidade BEta.
    double Populacao24 = 568.092;  //variável para a população da vigesima quarta cidade BEta.
    double Area24 = 700.145;  //variável para o tamanho da vigesima quarta cidade BEta.
    float Pib24;  //variável para o pib da vigesima quarta cidade BEta.
    char Turismo24 = '1';  //variável para os pontos turisticos da vigesima quarta cidade BEta.

    //Dados cadastrais do estado BEta7. (G)

    char Cidade25 [4] = "G001";  //variável para o nome da vigesima quinta cidade BEta.
    double Populacao25 = 306.753;  //variável para a população da vigesima quinta cidade BEta.
    double Area25 = 611.222;  //variável para o tamanho da vigasima quinta cidade BEta.
    float Pib25;  //variável para o pib da vigesima quinta cidadade BEta.
    char Turismo25 = '8';  //variável para os pontos turisticos da vigesima quinta cidade BEta.
    
    char Cidade26 [4] = "G002";  //variável para o nome da vigesima sexta cidade BEta.
    double Populacao26 = 235.984;  //variável para a população da vigesima sexta cidade BEta.
    double Area26 = 601.239;  //variável para o tamanho da vigesima sexta cidade BEta.
    float Pib26;  //variável para o pib da vigesima sexta cidade BEta.
    char Turismo26 = '8';  //variável para os pontos turisticos da vigesima sexta cidade BEta.

    char Cidade27 [4] = "G003";  //variável para o nome da vigesima setima cidade BEta.
    double Populacao27 = 307.861;  //variável para a população da vigesima setima cidade BEta.
    double Area27 = 401.121;  //variável para o tamanho da vigesima setima cidade BEta.
    float Pib27;  //variável para o pib da vigesima setima cidade BEta.
    char Turismo27 = '4';  //variável para os pontos turisticos da vigesima setima cidade BEta.

    char Cidade28 [4] = "G004";  //variável para o nome da vigesima oitava da cidade de BEta.
    double Populacao28 = 381.051;  //variável para a população da vigesima oitava cidade de BEta.
    double Area28 = 712.146;  //variável para o tamanho da vigesima oitava cidade de BEta.
    float Pib28;  //variável para o pib da vigesima oitava cidade de BEta.
    char Turismo28 = '6';  //variável para os pontos turisticos da vigesima oitava cidade de BEta.

    //Dados cadastrais do estado BEta8. (H)

    char Cidade29 [4] = "H001";  //variável para o nome da vigesima nona cidade BEta.
    double Populacao29 = 375.215;  //variável para a população da vigesima nona cidade BEta.
    double Area29 = 509.001;  //variável para o tamanho da vigesima nona cidade BEta.
    float Pib29;  //variável para o pib da vigesima nona cidade BEta.
    char Turismo29 = '1';  //variável para os pontos turisticos da vigesima nona cidade BEta.
    
    char Cidade30 [4] = "H002";  //variável para o nome da trigesima cidade BEta.
    double Populacao30 = 311.209;  //variável para a população da trigesima cidade BEta.
    double Area30 = 751.083;  //variável para o tamanho da trigesima cidade BEta.
    float Pib30;  //variável para o pib da trigesima cidade BEta.
    char Turismo30 = '5';  //variável para os pontos turisticos da trigesima cidade BEta.

    char Cidade31 [4] = "H003";  //variável para o nome da trigesima primeira cidade BEta.
    double Populacao31 = 490.778;  //variável para a população da dec trigesima primeira cidade BEta.
    double Area31 = 508.243;  //variável para o tamanho da trigesima primeira cidade BEta.
    float Pib31;  //variável para o pib da trigesima primeira cidade BEta.
    char Turismo31 = '6';  //variável para os pontos turisticos da trigesima primeira cidade BEta.

    char Cidade32 [4] = "H004";  //variável para o nome da trigesima segunda cidade BEta.
    double Populacao32 = 220.028;  //variável para a população da trigesima segunda cidade BEta.
    double Area32 = 634.956;  //variável para o tamanho da trigesima segunda cidade BEta.
    float Pib32;  //variável para o pib da trigesima segunda cidade BEta.
    char Turismo32 = '6';  //variável para os pontos turisticos da trigesima segunda cidade BEta.

    /*variaveis para cálculos*/
 
void entradacartas(){
    printf("Nome da primeira cidade de BEta: \n");
    scanf("%d", &Cidade1);
    printf("População: \n");
    scanf("%f", &Populacao1);
    printf("Área: \n");
    scanf("%f", &Area1);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib1);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %.3f \n", Populacao1);
    printf("Area: %.3f \n", Area1);
    printf("PIB: %2.f \n", Pib1);
    printf("Números de Pontos Turísticos: %c \n", Turismo1);

    printf("Nome da segunda cidade de BEta: \n");
    scanf("%s", &Cidade2);
    printf("População: \n");
    scanf("%f", &Populacao2);
    printf("Área: \n");
    scanf("%f", &Area2);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib2);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %.3f \n", Populacao2);
    printf("Area: %.3f \n", Area2);
    printf("PIB: %1.f \n", Pib2);
    printf("Números de Pontos Turísticos: %c \n", Turismo2);

    printf("Nome da terceira cidade de BEta: \n");
    scanf("%s", &Cidade3);
    printf("População: \n");
    scanf("%f", &Populacao3);
    printf("Área: \n");
    scanf("%f", &Area3);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib3);
    printf("Pontos Turisticos: \n");
    scanf("%s", &turismo3);
    printf("Cidade: %s \n", Cidade3);
    printf("População: %.3f \n", Populacao3);
    printf("Area: %.3f \n", Area3);
    printf("PIB: %1.f \n", Pib3);
    printf("Números de Pontos Turísticos: %c \n", Turismo3);

    printf("Nome da quarta cidade de BEta: \n");
    scanf("%s", &Cidade4);
    printf("População: \n");
    scanf("%f", &Populacao4);
    printf("Área: \n");
    scanf("%f", &Area4);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib4);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo4);
    printf("Cidade: %s \n", Cidade4);
    printf("População: %.3f \n", Populacao4);
    printf("Area: %.3f \n", Area4);
    printf("PIB: %2.f \n", Pib4);
    printf("Números de Pontos Turísticos: %c \n", Turismo4);

    printf("Nome da quinta cidade de BEta: \n");
    scanf("%s", &Cidade5);
    printf("População: \n");
    scanf("%f", &Populacao5);
    printf("Área: \n");
    scanf("%f", &Area5);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib5);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo5);
    printf("Cidade: %s \n", Cidade5);
    printf("População: %.3f \n", Populacao5);
    printf("Area: %.3f \n", Area5);
    printf("PIB: %2.f \n", Pib5);
    printf("Números de Pontos Turísticos: %c \n", Turismo5);

    printf("Nome da sexta cidade de BEta: \n");
    scanf("%s", &Cidade6);
    printf("População: \n");
    scanf("%f", &Populacao6);
    printf("Área: \n");
    scanf("%f", &Area6);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib6);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo6);
    printf("Cidade: %s \n", Cidade6);
    printf("População: %.3f \n", Populacao6);
    printf("Area: %.3f \n", Area6);
    printf("PIB: %2.f \n", Pib6);
    printf("Números de Pontos Turísticos: %c \n", Turismo6);

    printf("Nome da setima cidade de BEta: \n");
    scanf("%s", &Cidade7);
    printf("População: \n");
    scanf("%f", &Populacao7);
    printf("Área: \n");
    scanf("%f", &Area7);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib7);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo7);
    printf("Cidade: %s \n", Cidade7);
    printf("População: %.3f \n", Populacao7);
    printf("Area: %.3f \n", Area7);
    printf("PIB: %2.f \n", Pib7);
    printf("Números de Pontos Turísticos: %c \n", Turismo7);

    printf("Nome da oitava cidade de BEta: \n");
    scanf("%s", &Cidade8);
    printf("População: \n");
    scanf("%f", &Populacao8);
    printf("Área: \n");
    scanf("%f", &Area8);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib8);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo8);
    printf("Cidade: %s \n", Cidade8);
    printf("População: %.3f \n", Populacao8);
    printf("Area: %.3f \n", Area8);
    printf("PIB: %2.f \n", Pib8);
    printf("Números de Pontos Turísticos: %c \n", Turismo8);
    
    printf("Nome da nona cidade de BEta: \n");
    scanf("%s", &Cidade9);
    printf("População: \n");
    scanf("%f", &Populacao9);
    printf("Área: \n");
    scanf("%f", &Area9);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib9);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo9);
    printf("Cidade: %s \n", Cidade9);
    printf("População: %.3f \n", Populacao9);
    printf("Area: %.3f \n", Area9);
    printf("PIB: %2.f \n", Pib9);
    printf("Números de Pontos Turísticos: %c \n", Turismo9);

    printf("Nome da decima cidade de BEta: \n");
    scanf("%s", &Cidade10);
    printf("População: \n");
    scanf("%f", &Populacao10);
    printf("Área: \n");
    scanf("%f", &Area10);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib10);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo10);
    printf("Cidade: %s \n", Cidade10);
    printf("População: %.3f \n", Populacao10);
    printf("Area: %.3f \n", Area10);
    printf("PIB: %2.f \n", Pib10);
    printf("Números de Pontos Turísticos: %c \n", Turismo10);

    printf("Nome da decima primeira cidade de BEta: \n");
    scanf("%s", &Cidade11);
    printf("População: \n");
    scanf("%f", &Populacao11);
    printf("Área: \n");
    scanf("%f", &Area11);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib11);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo11);
    printf("Cidade: %s \n", Cidade11);
    printf("População: %.3f \n", Populacao11);
    printf("Area: %.3f \n", Area11);
    printf("PIB: %2.f \n", Pib11);
    printf("Números de Pontos Turísticos: %c \n", Turismo11);

    printf("Nome da decima segunda cidade de BEta: \n");
    scanf("%s", &Cidade12);
    printf("População: \n");
    scanf("%f", &Populacao12);
    printf("Área: \n");
    scanf("%f", &Area12);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib12);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo12);
    printf("Cidade: %s \n", Cidade12);
    printf("População: %.3f \n", Populacao12);
    printf("Area: %.3f \n", Area12);
    printf("PIB: %2.f \n", Pib12);
    printf("Números de Pontos Turísticos: %c \n", Turismo12);

    printf("Nome da decima terceira cidade de BEta: \n");
    scanf("%s", &Cidade13);
    printf("População: \n");
    scanf("%f", &Populacao13);
    printf("Área: \n");
    scanf("%f", &Area13);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib13);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo13);
    printf("Cidade: %s \n", Cidade13);
    printf("População: %.3f \n", Populacao13);
    printf("Area: %.3f \n", Area13);
    printf("PIB: %2.f \n", Pib13);
    printf("Números de Pontos Turísticos: %c \n", Turismo13);

    printf("Nome da decima quarta cidade de BEta: \n");
    scanf("%s", &Cidade14);
    printf("População: \n");
    scanf("%f", &Populacao14);
    printf("Área: \n");
    scanf("%f", &Area14);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib14);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo14);
    printf("Cidade: %s \n", Cidade14);
    printf("População: %.3f \n", Populacao14);
    printf("Area: %.3f \n", Area14);
    printf("PIB: %2.f \n", Pib14);
    printf("Números de Pontos Turísticos: %c \n", Turismo14);

    printf("Nome da decima quinta cidade de BEta: \n");
    scanf("%s", &Cidade15);
    printf("População: \n");
    scanf("%f", &Populacao15);
    printf("Área: \n");
    scanf("%f", &Area15);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib15);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo15);
    printf("Cidade: %s \n", Cidade15);
    printf("População: %.3f \n", Populacao15);
    printf("Area: %.3f \n", Area15);
    printf("PIB: %2.f \n", Pib15);
    printf("Números de Pontos Turísticos: %c \n", Turismo15);

    printf("Nome da decima sexta cidade de BEta: \n");
    scanf("%s", &Cidade16);
    printf("População: \n");
    scanf("%f", &Populacao16);
    printf("Área: \n");
    scanf("%f", &Area16);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib16);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo16);
    printf("Cidade: %s \n", Cidade16);
    printf("População: %.3f \n", Populacao16);
    printf("Area: %.3f \n", Area16);
    printf("PIB: %2.f \n", Pib16);
    printf("Números de Pontos Turísticos: %c \n", Turismo16);

    printf("Nome da decima setima cidade de BEta: \n");
    scanf("%s", &Cidade17);
    printf("População: \n");
    scanf("%f", &Populacao17);
    printf("Área: \n");
    scanf("%f", &Area17);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib17);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo17);
    printf("Cidade: %s \n", Cidade17);
    printf("População: %.3f \n", Populacao17);
    printf("Area: %.3f \n", Area17);
    printf("PIB: %2.f \n", Pib17);
    printf("Números de Pontos Turísticos: %c \n", Turismo17);

    printf("Nome da decima oitava cidade de BEta: \n");
    scanf("%s", &Cidade18);
    printf("População: \n");
    scanf("%f", &Populacao18);
    printf("Área: \n");
    scanf("%f", &Area18);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib18);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo18);
    printf("Cidade: %s \n", Cidade18);
    printf("População: %.3f \n", Populacao18);
    printf("Area: %.3f \n", Area18);
    printf("PIB: %1.f \n", Pib18);
    printf("Números de Pontos Turísticos: %c \n", Turismo18);

    printf("Nome da decima nona cidade de BEta: \n");
    scanf("%s", &Cidade19);
    printf("População: \n");
    scanf("%f", &Populacao19);
    printf("Área: \n");
    scanf("%f", &Area19);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib19);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo19);
    printf("Cidade: %s \n", Cidade3);
    printf("População: %.3f \n", Populacao19);
    printf("Area: %.3f \n", Area19);
    printf("PIB: %1.f \n", Pib19);
    printf("Números de Pontos Turísticos: %c \n", Turismo19);

    printf("Nome da vigesima cidade de ALpha: \n");
    scanf("%s", &Cidade20);
    printf("População: \n");
    scanf("%f", &Populacao20);
    printf("Área: \n");
    scanf("%f", &Area20);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib20);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo20);
    printf("Cidade: %s \n", Cidade20);
    printf("População: %.3f \n", Populacao20);
    printf("Area: %.3f \n", Area20);
    printf("PIB: %2.f \n", Pib20);
    printf("Números de Pontos Turísticos: %c \n", Turismo20);

    printf("Nome da vigesima primeira cidade de BEta: \n");
    scanf("%s", &Cidade21);
    printf("População: \n");
    scanf("%f", &Populacao21);
    printf("Área: \n");
    scanf("%f", &Area21);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib21);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo21);
    printf("Cidade: %s \n", Cidade21);
    printf("População: %.3f \n", Populacao21);
    printf("Area: %.3f \n", Area21);
    printf("PIB: %2.f \n", Pib21);
    printf("Números de Pontos Turísticos: %c \n", Turismo21);

    printf("Nome da vigesima segunda cidade de BEta: \n");
    scanf("%s", &Cidade22);
    printf("População: \n");
    scanf("%f", &Populacao22);
    printf("Área: \n");
    scanf("%f", &Area22);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib22);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo22);
    printf("Cidade: %s \n", Cidade22);
    printf("População: %.3f \n", Populacao22);
    printf("Area: %.3f \n", Area22);
    printf("PIB: %2.f \n", Pib22);
    printf("Números de Pontos Turísticos: %c \n", Turismo22);

    printf("Nome da vigesima terceira cidade de BEta: \n");
    scanf("%s", &Cidade23);
    printf("População: \n");
    scanf("%f", Populacao23);
    printf("Área: \n");
    scanf("%f", &Area23);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib23);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo23);
    printf("Cidade: %s \n", Cidade23);
    printf("População: %.3f \n", Populacao23);
    printf("Area: %.3f \n", Area23);
    printf("PIB: %2.f \n", Pib23);
    printf("Números de Pontos Turísticos: %c \n", Turismo23);

    printf("Nome da vigesima quarta cidade de BEta: \n");
    scanf("%s", &Cidade24);
    printf("População: \n");
    scanf("%f", &Populacao24);
    printf("Área: \n");
    scanf("%f", &Area24);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib24);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo24);
    printf("Cidade: %s \n", Cidade24);
    printf("População: %.3f \n", Populacao24);
    printf("Area: %.3f \n", Area24);
    printf("PIB: %2.f \n", Pib24);
    printf("Números de Pontos Turísticos: %c \n", Turismo24);
    
    printf("Nome da vigesima quinta cidade de BEta: \n");
    scanf("%s", &Cidade25);
    printf("População: \n");
    scanf("%f", &Populacao25);
    printf("Área: \n");
    scanf("%f", &Area25);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib25);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo25);
    printf("Cidade: %s \n", Cidade25);
    printf("População: %.3f \n", Populacao25);
    printf("Area: %.3f \n", Area25);
    printf("PIB: %2.f \n", Pib25);
    printf("Números de Pontos Turísticos: %c \n", Turismo25);

    printf("Nome da vigesima sexta cidade de BEta: \n");
    scanf("%s", &Cidade26);
    printf("População: \n");
    scanf("%f", &Populacao26);
    printf("Área: \n");
    scanf("%f", &Area26);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib26);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo26);
    printf("Cidade: %s \n", Cidade26);
    printf("População: %.3f \n", Populacao26);
    printf("Area: %.3f \n", Area26);
    printf("PIB: %2.f \n", Pib26);
    printf("Números de Pontos Turísticos: %c \n", Turismo26);

    printf("Nome da vigesima setima cidade de BEta: \n");
    scanf("%s", &Cidade27);
    printf("População: \n");
    scanf("%f", &Populacao27);
    printf("Área: \n");
    scanf("%f", &Area27);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib27);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo27);
    printf("Cidade: %s \n", Cidade27);
    printf("População: %.3f \n", Populacao27);
    printf("Area: %.3f \n", Area27);
    printf("PIB: %2.f \n", Pib27);
    printf("Números de Pontos Turísticos: %c \n", Turismo27);

    printf("Nome da vigesima oitava cidade de ALpha: \n");
    scanf("%s", &Cidade28);
    printf("População: \n");
    scanf("%f", &Populacao28);
    printf("Área: \n");
    scanf("%f", &Area28);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib28);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo28);
    printf("Cidade: %s \n", Cidade28);
    printf("População: %.3f \n", Populacao28);
    printf("Area: %.3f \n", Area28);
    printf("PIB: %2.f \n", Pib28);
    printf("Números de Pontos Turísticos: %c \n", Turismo28);

    printf("Nome da vigesima nona cidade de BEta: \n");
    scanf("%s", &Cidade29);
    printf("População: \n");
    scanf("%f", &Populacao29);
    printf("Área: \n");
    scanf("%f", &Area29);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib29);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo29);
    printf("Cidade: %s \n", Cidade29);
    printf("População: %.3f \n", Populacao29);
    printf("Area: %.3f \n", Area29);
    printf("PIB: %2.f \n", Pib29);
    printf("Números de Pontos Turísticos: %c \n", Turismo29);

    printf("Nome da trigesima cidade de BEta: \n");
    scanf("%s", &Cidade30);
    printf("População: \n");
    scanf("%f", &Populacao30);
    printf("Área: \n");
    scanf("%f", &Area30);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib30);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo30);
    printf("Cidade: %s \n", Cidade14);
    printf("População: %.3f \n", Populacao30);
    printf("Area: %.3f \n", Area30);
    printf("PIB: %2.f \n", Pib30);
    printf("Números de Pontos Turísticos: %c \n", Turismo30);

    printf("Nome da trigesima primeira cidade de BEta: \n");
    scanf("%s", &Cidade31);
    printf("População: \n");
    scanf("%f", &Populacao31);
    printf("Área: \n");
    scanf("%f", &Area31);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib31);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo31);
    printf("Cidade: %s \n", Cidade31);
    printf("População: %.3f \n", Populacao31);
    printf("Area: %.3f \n", Area31);
    printf("PIB: %2.f \n", Pib31);
    printf("Números de Pontos Turísticos: %c \n", Turismo31);

    printf("Nome da trigesima segunda cidade de BEta: \n");
    scanf("%s", &Cidade32);
    printf("População: \n");
    scanf("%f", &Populacao32);
    printf("Área: \n");
    scanf("%f", &Area32);
    printf("PIB da cidade: \n" );
    scanf("%f", &Pib32);
    printf("Pontos Turisticos: \n");
    scanf("%s", &Turismo32);
    printf("Cidade: %s \n", Cidade32);
    printf("População: %.3f \n", Populacao32);
    printf("Area: %.3f \n", Area32);
    printf("PIB: %2.f \n", Pib32);
    printf("Números de Pontos Turísticos: %c \n", Turismo32);
};
