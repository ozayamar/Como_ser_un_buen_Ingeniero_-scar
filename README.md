# Como_ser_un_buen_Ingeniero_-scar
Una breve introducción a algoritmos, estructuras de datos 
Para comenzar a abordar los diferentes temas referidos a algoritmos y estructuras de datos y aprovechar las potencialidades que el lenguaje de programación presenta para su implementación es imprescindible establecer las bases conceptuales mínimas, necesarias para comprender el resto de los capítulos de esta asignatura.

Algoritmo ¿Qué es eso?
El nombre algoritmo (del latín algorithmus) proviene del matemático persa del siglo IX Abu Abda- llah Muḥammad ibn Mūsā al-Khowârizmî, conocido como al-Juarismi. Podemos encontrar muchas definiciones en distintas fuentes de bibliografías dependiendo del enfoque de cada autor:

Informalmente, un algoritmo es cualquier procedimiento computacional bien definido que toma algún valor, o conjunto de valores, como entrada y produce algún valor, o conjunto de valores, como salida. (Cormen at. al., 2009: 5)
Un algoritmo es una secuencia de pasos computacionales que transforma la entrada en la salida. (Cormen at. al., 2009: 5)
Podemos ver un algoritmo como una herramienta para resolver un problema computa- cional bien especificado. La declaración del problema especifica en términos generales la relación de entrada/salida deseada. El algoritmo describe un procedimiento computacional específico para lograr esa relación de entrada/salida. (Cormen at. al., 2009: 5)
 Un conjunto de reglas para efectuar algún cálculo bien sea a mano o en una máquina. (Brassard y Bratley, 1997: 2)
 Un conjunto de instrucciones sencillas, claramente especificado, que se debe seguir para resolver un problema. (Weiss, 1995: 17)
Según el Diccionario de la lengua española (DLE) es un “Conjunto ordenado y finito de operaciones que permite hallar la solución de un problema”; o un “Método y notación en las distintas formas del cálculo”.
 Una secuencia de instrucciones que representan un modelo de solución para determinado tipo de problemas. (Joyanes, 2003: 4)
 Un conjunto o grupo de instrucciones que realizadas en orden conducen a obtener la solu- ción de un problema. (Joyanes, 1990: 7)
De forma general, se puede definir un algoritmo como una secuencia de instrucciones o pasos que al ejecutarlos recibe datos de entrada, de manera directa o indirecta y los transforma en una salida. También se lo puede definir con un conjunto de instrucciones ordenadas de manera lógica tal que al ser ejecutadas por una computadora o persona dan solución a un determinado problema para el cual fue diseñado.

Los algoritmos son independientes de los distintos lenguajes de programación en los que se desee implementarlos. Para cada problema se puede escribir un algoritmo, que luego puede codificarse y ejecutarse en diferentes lenguajes de programación. El algoritmo es la infraestructura de la solu- ción a un problema, que luego puede ser implementada en cualquier lenguaje de programación.

Es importante destacar que los algoritmos deben cumplir determinadas características para ser considerados como tales. En primer lugar, un algoritmo debe ser preciso, es decir debe definirse de manera rigurosa, sin dar lugar a ambigüedades en las instrucciones que lo forman. Este también debe ser definido, esto implica que si se ejecuta dos veces el mismo algoritmo con la misma entrada

–salvo sean algoritmos aleatorios– se debe obtener el mismo resultado de salida. Además, tiene que ser finito. Esto quiere decir que debe terminar de ejecutarse en algún momento. Pueden tener cero o más elementos de entrada y a su vez debe producir un resultado, los datos de salida serán los resultados de efectuar las instrucciones que lo forman sobre la entrada. Finalmente se concluye que un algoritmo debe ser suficiente para resolver el problema para el cual fue diseñado.

Frente a dos algoritmos que lleven cabo un mismo objetivo, es decir que resuelvan el mismo problema

–ocurre bastante a menudo–, siempre será preferible el más corto. Esto no es una tarea trivial, dado que se debe tener en cuenta el análisis del algoritmo para la optimización de los tiempos de ejecución y recursos que consume, como se verá más adelante en profundidad y detalle en el capítulo III.

Además, los algoritmos pueden clasificarse en algoritmos cualitativos y cuantitativos. En el caso de los primeros, refieren a los que en sus pasos o instrucciones que lo forman no están involucradas o intervienen cálculos numéricos. Por ejemplo, las instrucciones para desarrollar una actividad física o encontrar un tesoro, tomar mate, buscar una palabra en el diccionario, etc. Mientras que los segundos son aquellos algoritmos en los que dentro de los pasos o instrucciones involucran cálculos numéricos. Por ejemplo, solución de una ecuación de segundo grado, conteo de elementos que cumplen una determinada condición, cálculo de un promedio, etc.

¿Programa y algoritmo es lo mismo? Es importante destacar que no es lo mismo un programa que un algoritmo. Un programa es una serie de instrucciones ordenadas, codificadas en un lenguaje de programación que expresa uno o varios algoritmos y que puede ser ejecutado en una computadora. Por lo general un programa contempla un conjunto de instrucciones encargadas de controlar el flu- jo de ejecución del programa –a través de una interfaz que puede ser de consola o gráfica– y hacer las llamadas a los distintos algoritmos que lo forman.

Algoritmia, una manera de estudiar los algoritmos
A su vez, el término algoritmia está relacionado de manera directa con los algoritmos, o podríamos decir que deriva del mismo. Existen varias definiciones para este término:

Ciencia que nos permite evaluar el efecto de diferentes factores externos (como los nú- meros implicados, la forma en que se presenta el problema, o la velocidad y capacidad de almacenamiento de nuestro equipo) sobre los algoritmos disponibles, de tal modo que sea posible seleccionar el que mejor se ajuste a nuestras circunstancias particulares. (Brassard y Bratley, 1997: 3)

El estudio de los algoritmos. (Brassard y Bratley, 1997: 3)

Según DEL es “Ciencia del cálculo aritmético y algebraico, teoría de los números”.

Se puede definir entonces la algoritmia como la ciencia que estudia a través de determinadas técnicas y herramientas cuál es el mejor algoritmo dentro de un conjunto de algoritmos diseñados para resolver un mismo problema, de acuerdo a un determinado criterio, necesidades y características del problema.

¿Para qué necesitamos las estructuras de datos?
Las estructuras de datos son las principales herramientas o recursos que tienen los programadores para el desarrollo de sus algoritmos. Es difícil pensar en un algoritmo o conjunto de estos que no tenga como macroestructura de soporte una estructura de datos. Entre las definiciones más conoci- das de estructuras de datos podemos mencionar:

Una estructura de datos es una forma de almacenar y organizar datos para facilitar el acceso y las modificaciones. Ninguna estructura de datos funciona bien para todos los propósitos, por lo que es importante conocer las fortalezas y limitaciones de cada una de ellas. (Cormen at. al., 2009: 9)

Una estructura de datos es una colección de datos (normalmente de tipo simple) que se carac- terizan por su organización y las operaciones que se definen en ellos. (Quetglás at. al., 1995: 171)

En otras palabras, una estructura de datos es una colección de datos simples o compuestos –como los registros– con un sentido u orden concreto para quien lo está utilizando, sobre la cual se definen un conjunto de operaciones que por lo general describen el comportamiento de la estructura.

La estructura de datos más simple que disponemos es una variable. Con esta podemos realizar las siguientes operaciones: obtener y modificar su valor de manera directa utilizando su identificador. Por su parte, un registro define un conjunto de atributos o campos a los que podemos acceder me- diante su identificador y luego utilizar el operador punto seguido del nombre del campo para acce- der a su valor: “registro.altura”, “registro.peso”.

Existen numerosos tipos de estructuras de datos, generalmente construidas sobre otras más sim- ples. Por ejemplo, vector, matriz, pila, cola, lista, árboles, montículo, grafos, archivo, etc. Estas son lineales o no lineales –también llamadas ramificadas– las mismas pueden ser estáticas o dinámicas. Por lo general, al trabajar sobre estas estructuras de datos se suelen contemplar algunas actividades mínimas como insertar, eliminar y buscar un dato en la misma. A lo largo de los capítulos de esta asignatura se describen en profundidad varias de las estructuras de datos clásicas.

 Pensamiento algorítmico ¿De qué se trata?

Quizás, uno de los aspectos más importantes de esta obra es su intención de crear y fortalecer el pensamiento algorítmico del alumno. Por esta razón, en cada guía de ejercicios se encontrarán al- gunos problemas sencillos para aplicar los conceptos abordados en el capítulo y luego otros más avanzados e integradores, donde se deberá atacar los problemas con un enfoque algorítmico para poder obtener una solución. Para comenzar a introducir al alumno en esta mecánica práctica se pue- de plantear un primer ejercicio: “resuelva el problema de mover el caballo de ajedrez sobre el tecla- do de un teléfono”.

Suponga que tiene a su disposición dicha ficha del ajedrez, y que se puede mover en ciertas formas particulares como se observa en la figura 1. Ahora, desea saber cuántos movimientos válidos pue- den realizarse partiendo con el caballo desde todos los números del teclado realizando un movi- miento desde cada número.

El Caballo

Figura 1. Problema de los movimientos de caballo de ajedrez

Si se parte del 1 se puede ir al 6 y al 8 (dos movimientos); si se sale del 2 se puede llegar al 7 y al 9 (dos movimientos más); iniciando desde el 3 se puede arribar al 4 y al 8 (se suman nuevamente dos); si se arranca desde el 4 las posibilidades son 3, 9 y 0 (ahora se acumulan tres movimientos); pero si la po- sición inicial es el 5 no se puede mover la ficha a ningún lugar dado que no hay movimientos válidos

–sin embargo aún restan varias posibilidades más para seguir probando–; desde el 6 se pueden alcan- zar el 1, 7 y 0 (nuevamente se agregan tres más); por su parte desde el 7 se puede mover la ficha hasta el 2 y el 6 (la cantidad se incrementa en dos); si se toma el 8 como inicio se pueden alcanzar el 1 y el 3 (se adicionan dos movimientos); si se posiciona la ficha en el 9 las opciones para moverse son 2 y 4 (nue- vamente se tienen dos movimientos); y por último si se sale desde el 0 los movimientos válidos son 4 y 6 (se suman los últimos dos). En total se pueden realizar veinte movimientos válidos con esta ficha.

Ahora, diseñe un algoritmo que permita calcular cuántos posibles movimientos válidos puede rea- lizar la ficha del caballo, recibiendo como entrada la cantidad de movimientos a realizar desde el inicio, partiendo de todos los números. Por ejemplo, como mostramos anteriormente si la cantidad de movimientos es uno, la cantidad de movimientos válidos son veinte. Pero si la cantidad de mo- vimientos son dos y se sale desde el 1 se puede ir hasta el 6 y el 8 (un movimiento), a continuación, a partir del 6 hasta el 1, 7 y 0 (dos movimientos de la ficha), luego se sigue desde el 8 hasta el 1 y 3 (para alcanzar los dos movimientos de la ficha). En resumen, se tienen cinco posibles movimientos válidos partiendo desde el 1 (1-6-1, 1-6-7, 1-6-0, 1-8-1 y 1-8-3) a estos se deben sumar todos los movi- mientos que resulten de partir de los demás número. En total la cantidad de posibles movimientos válidos para dos movimientos son 46. Una vez desarrollado el algoritmo complete la siguiente tabla.

Cantidad de movimientos

Posibilidades válidas

1

20

2

46

3

104

5


8


10


15


18


21


23


32



Que la fuerza te acompañe!
