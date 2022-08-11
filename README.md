# Encabezado
<p align="center"><img src="https://res-5.cloudinary.com/crunchbase-production/image/upload/c_lpad,h_256,w_256,f_auto,q_auto:eco/v1455514364/pim02bzqvgz0hibsra41.png"width="200" height="200">
</img><br>
<i><b>Docente:</b></i> John Corredor, PhD.
<br>
<i><b>Asignatura:</b></i> Introducción HPC
<br>
<i><b>Estudiante:</b></i> Edna Sofía Orjuela Puentes
<br>
<i><b>Tema:</b></i> Primer taller en C++
<br>
<i><b>Fecha:</b></i>06/08/22
<br>
</p>

# Introducción

El presente taller tiene como objetivo el desarrollo de nueve ejercicios en lenguaje
c++, los cuales se encuentran contenidos en funciones que posteriormente serán llamados en
un menú, donde el usuario podrá elegir el programa que desea visualizar.

A continuación, se encontrará el enunciado del ejercicio, el algoritmo y su respectiva ejecución, así mismo, encontrará archivos adicionales, tales como, “lib.h”,”lib.c”,”main” y “Makefile” para poder llevar a cabo el proceso de compilación. 

# Desarrollo

## 2.1  Primer ejercicio

Este algoritmo inicializa dos variables con el valor de uno, luego por medio de una condición, se evalúa que cuando x (1) sea igual a y (5) se devuelve el valor de 0 y de lo contrario que devuelva el valor de -1.<br>


## 2.2  Segundo ejercicio
Este algoritmo consiste en inicializar dos variables con el valor de uno, luego por medio de una serie de condiciones anidadas, se evalúa que si el valor de x es igual a 1 y que el valor de y es igual a 0, entonces que x sea igual a 10, y en el caso de que no se cumpla alguna condición que devuelva el valor de -1 <br> 

## 2.3 Tercer ejercicio
En este ejercicio, debido a que la variable x se encuentra definida como entero, entonces tomará la variable a como el número 97 (que corresponde al valor en ascii) y empezará a contar de 10 en 10, obteniendo como resultado, 97,107,117


## 2.4 Cuarto ejercicio
Este algoritmo consiste en inicializar dos variables con el valor de cero, para luego, crear un bucle que permita que la variable x empiece en 6 y vaya disminuyendo de dos en dos, hasta llegar a 2, y dentro de este se encuentra otro for que aumenta la variable y hasta llegar a 1, para luego realizar la respectiva resta.<br>

## 2.5  Quinto ejercicio
Este algoritmo consiste en crear una función (fnx) que permita imprimir el valor del parámetro. En el main, se declara como entero las variables y se inicializa “a” con el número 1234, luego por medio del bucle aumentará el valor de i hasta llegar a 3 y a medida de que aumente, se llamará a la función fnx y se le pasara el valor de “a”  dividido entre 10.
<br> 

## 2.6  Sexto ejercicio 
Realizar un programa que calcule e imprima la suma de los múltiplos de 5
comprendidos entre dos valores a y b. El programa no permitirá introducir valores
negativos para a y b, y verificará que a es menor que b. Si a es mayor que b,
intercambiará estos valores.


## 2.7 Septimo ejercicio

Realizar un programa que permita evaluar la serie: Σ $\frac{1}{x+ay}$

## 2.8 Octavo ejercicio
Si quiere averiguar su número de Tarot, sume los números de su fecha de naci-
miento y a continuación redúzcalos a un único dígito; por ejemplo si su fecha de nacimiento fuera 17 de octubre de 1992, los cálculos a realizar serían:<br>
17 + 10 + 1992 = 2019 => 2 + 0 + 1 + 9 = 12 => 1 + 2 = 3<br>
lo que quiere decir que su número de Tarot es el 3.<br>

Realizar un programa que pida una fecha, de la forma:
día mes año donde día, mes y año son enteros, y dé como resultado el número de Tarot. El programa verificará si la fecha es correcta, esto es, los valores están dentro de los
rangos permitidos.
 

## 2.9 Noveno ejercicio
Realizar un programa que calcule el importe a pagar por un vehículo al circular
por una autopista. El vehículo puede ser una bicicleta, una moto, un coche o un
camión. Para definir el conjunto vehículos utilizaremos un tipo enumerado (vea en
el capítulo 2 los tipos enumerados). El importe se calculará según los siguientes
datos:<br>
• Un importe fijo de 100 unidades para las bicicletas.<br>
• Las motos y los coches pagarán 30 unidades por Km.<br>
• Los camiones pagarán 30 unidades por Km más 25 unidades por Tm.<br><br>


La presentación en pantalla de la solución, será de la forma siguiente:<br>

1 - Bicicleta<br>
2 - Moto<br>
3 - Coche<br>
4 - Camión<br>
5 - Salir<br>

**Ejemplo:**<br>
Seleccione la opción deseada: 4<br>
Kilómetros y toneladas? 100 50<br>
Importe = 4250<br>



# Guía para la ejecución del proyecto
Este proyecto cuenta con cinco archivos que corresponden a:<br> 

*  **taller_lib.cpp:** Este archivo al ser el módulo de funciones, contendrá el desarrollo de las distintas funciones a usar, pero no estará la función main.<br> 

*  **taller_lib.cpp:** Esta será la interfaz del prototipo de funciones disponibles en la biblioteca para que estén disponibles, en ella se incluirán los pragmas, instrucciones realizadas directamente al compilador, y además contendrá únicamente los métodos a llamar.<br> 

*  **taller_main.cpp:** Este archivo contendrá únicamente, el método main y las bibliotecas correspondientes, agregando #include "taller_lib.h", la cual permitirá enlazar posteriormente las clases.<br>

*  **taller_program.cpp:** Este archivo contiene el código completo.<br>

*  **Makefile:** contiene las instrucciones que se deben ejecutar, como crear el objeto (-c)  y crear el ejecutable enlazando el objeto (-o), todo en un solo archivo, que a la vez se encargue de borrar los archivos creados a medida que se actualicen. Los comandos, -ansi, -pendantic, permiten que el compilador implemente el lenguaje ANSI y el comando Wall, activa todas las advertencias.<br>
Por otra parte, se agrega “MATH FLAGS” para poder hacer uso de las funciones matemáticas, como “pow”.<br>


Para realizar la compilación y ejecución del proyecto simplemente deberá hacer uso del archivo "Makefile", por medio del comando **make taller_main**, luego de esto, usted podrá hacer uso del ejecutable **taller_main**, por medio del comando **./taller_main**.<br><br>
En caso tal que desee eliminar los archivos generados, para nuevamente realizar la compilación, deberá usar el comando **make clean**.<br>

Para mayor entendimiento del proceso a realizar, revisar la figura 1.
<p align="center"> <img src="https://github.com/edso2103/Taller_HPC/blob/main/figura1.png" width="800"/> </p> 

<p align="center"><i><b>Figura 1</i></b></p>



