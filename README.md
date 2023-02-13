Coteudo:


<a href="/src">Codigos Iniciantes</a>


Compiladores:

[Open Watcom v2 C/C++ ](https://github.com/open-watcom/open-watcom-v2/);

[Mingw](https://sourceforge.net/projects/mingw//)

---
Caso queira Usar no VSCode:

Extensão para VsCode: <b> C/C++ Extension Pack </b> , <b> Code Runner </b>
<br>
Compilador usado: MIngw

---

## Variaveis 

### Em C temos os seguintes tipos bsicos de variáveis:

| Var Type | bytes | Var Value |
|--- |--- |--- |
| char | 8 | -127 a 127 |
| int | 16 | -32.767 a 32.767 |
| float | 32 | Seis dígitos de precisão  |
| double | 64 | Dez dígitos de precisão |

<!-- 
### Temos algumas variações destes tipos, que são:

| Var Type | bytes | Var Value |
|--- |--- |--- |
| unsigned char | 8 |  0 a 255 |            
| signed char | 8 | -127 a 127 |                                            
| unsigned int |  16 | 0 a 65.535 |                      
| signed int |  16 | O mesmo que int |                                        
| short int |  16 | O mesmo que int |
| unsigned short int |  16 | 0 a 65.535 |
| signed short int | 16 | O mesmo que short int|
| long int | 32 | -2.147.483.647 a 2.147.483.647 |
| signed long int | 32 | o mesmo que long int |
| unsigned long int | 32 | 0 a 4.294.967.295 |
| long double | 80 | Dez dígitos de precisão |
-->

## Forma de declaração de variável:

~~~c
tipo nome_variavel;
~~~

Os atributos podem ser inicializado , <b> com </b> ou <b> sem </b> a <b> declaração do valor </b>. 

~~~c
#include <stdio.h>

int main(void){
    int evento = 5 ;
    char corrida = ’C’;
    float tempo = 27.25;
    printf("O tempo vitorioso na eliminatória %c",corrida);
    printf("\nda competi¸c~ao %d foi %f.", evento, tempo);
    return 1;
} 
~~~



<!-- Comentario 1
 
Lembre-se de que você deve declarar todas as variáveis locais no início
do bloco em que elas são definidas, antes de qualquer comando do programa.
or exemplo, a função seguinte está tecnicamente incorreta e não será compilada
a maioria dos compiladores.

~~~c
// Esta função está errada.
                         
void f(void)
{
int i;

i = 10;

int j; // esta linha irá provocar um erro!

j = 20
}
~~~
 -->

