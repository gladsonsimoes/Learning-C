
Compilador:

[Open Watcom v2 C/C++ ](https://github.com/open-watcom/open-watcom-v2/);

---

| Tipo | Tamanho aproximado em bits | Faixa mínima |
|---|---|---|
| char | 8 | -127 a 127 |
| unsigned char | 8 |  0 a 255 |            
| signed char | 8 | -127 a 127 |
| int | 16 | -32.767 a 32.767 |                                             
| unsigned int |  16 | 0 a 65.535 |                      
| signed int |  16 | O mesmo que int |                                        
| short int |  16 | O mesmo que int |
| unsigned short int |  16 | 0 a 65.535 |
| signed short int | 16 | O mesmo que short int|
| long int | 32 | -2.147.483.647 a 2.147.483.647 |
| signed long int | 32 | o mesmo que long int |
| unsigned long int | 32 | 0 a 4.294.967.295 |
| float | 32 | Seis dígitos de precisão |
| double | 64 | Dez dígitos de precisão |
| long double | 80 | Dez dígitos de precisão |
    
                                          


Forma de declaração de variável:

~~~c
tipo lista_de_variáveis;
~~~

Aqui , tipo deve ser um tipo de dado válido em C mais quaisquer modificadores; e lista_de_variáveis pode consistir em um ou mais nomes de identificadores separados por vírgulas. Aqui estão algumas declarações:

~~~c
int i, j, l;
short int si;
unsigned int ui;
double balance, profit, loss;
~~~

Lembre-se de que, em C, o nome de uma variável não tem nenhuma relação com seu tipo.

