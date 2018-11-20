
//**** GENERAL ****
// Acknowlege, se recive "ok"
AT

// Reset, reinicia el módudo. 
// Se recive una cadena de texto que depende del modelo y fabricante y, al final, "READY"
AT+RST



//**** CONFIGURACION ****
// Obtener la velocidad de transmision
AT+CIOBAUD?

// Cambiar la velocidad de transmision (en el ejemplo a 9600)
// Velocidades validas 9600, 19200, 38400, 74880, 115200, 230400, 460800 y 921600
AT+CIOBAUD=9600
AT+IPR=9600

// Obtener el modo de funcionamiento
// 1 Station
// 2 SoftAp
// 3 Station + SoftAp
AT+CWMODE?

// Cambia el modo de funcionamiento a 1, 2 o 3
// Lo normal es AT+CWMODE=3, por que es el más versátil
// Tras el cambio es necesario AT+RST
AT+CWMODE=mode

//**** UNISER A UNA RED WIFI ****
// List Access Point
// Muestra una lista de las redes wifi disponibles
AT+CWLAP

// Join Access Point
// Unirse a una red wifi existente
AT+CWJAP=you ssid, password

// Check if connected successfully, or use AT+CWJAP=?, or use AT+CIFSR to find your ip address
AT+CWJAP?

// Obtener la IP del módulo
AT+CIFSR



//**** CREAR UNA RED WIFI ****

// Crear una red wifi
AT+CWSAP="ssid","password",3,0

// Listar los dispositivos conectados a la red generada
AT+CWLIF


//**** TCP SERVER ****
// Configura un servidor TCP en el puerto 80 (1 significa activado)
AT+CIPSERVER=1,80


//**** TCP CLIENT ****
// Activar multiples conexiones
AT+CIPMUX=1

// Conectar con el servidor remoto 192.168.1.100 en el puerto 80
AT+CIPSTART=4,"TCP","192,168.1.100",80

// Configurar el modo de transmisión
AT+CIPMODE=1

// Enviar data por el canal 4 (en el ejemplo 5 bytes)
AT+CIPSEND=4,5
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
51
52
53
54
55
56
57
58
59
60
61
62
63
64
65
66
67
68
69
70
71
72
73
	
//**** GENERAL ****
// Acknowlege, se recive "ok"
AT
 
// Reset, reinicia el módudo. 
// Se recive una cadena de texto que depende del modelo y fabricante y, al final, "READY"
AT+RST
 
 
 
//**** CONFIGURACION ****
// Obtener la velocidad de transmision
AT+CIOBAUD?
 
// Cambiar la velocidad de transmision (en el ejemplo a 9600)
// Velocidades validas 9600, 19200, 38400, 74880, 115200, 230400, 460800 y 921600
AT+CIOBAUD=9600
AT+IPR=9600
 
// Obtener el modo de funcionamiento
// 1 Station
// 2 SoftAp
// 3 Station + SoftAp
AT+CWMODE?
 
// Cambia el modo de funcionamiento a 1, 2 o 3
// Lo normal es AT+CWMODE=3, por que es el más versátil
// Tras el cambio es necesario AT+RST
AT+CWMODE=mode
 
//**** UNISER A UNA RED WIFI ****
// List Access Point
// Muestra una lista de las redes wifi disponibles
AT+CWLAP
 
// Join Access Point
// Unirse a una red wifi existente
AT+CWJAP=you ssid, password
 
// Check if connected successfully, or use AT+CWJAP=?, or use AT+CIFSR to find your ip address
AT+CWJAP?
 
// Obtener la IP del módulo
AT+CIFSR
 
 
 
//**** CREAR UNA RED WIFI ****
 
// Crear una red wifi
AT+CWSAP="ssid","password",3,0
 
// Listar los dispositivos conectados a la red generada
AT+CWLIF
 
 
//**** TCP SERVER ****
// Configura un servidor TCP en el puerto 80 (1 significa activado)
AT+CIPSERVER=1,80
 
 
//**** TCP CLIENT ****
// Activar multiples conexiones
AT+CIPMUX=1
 
// Conectar con el servidor remoto 192.168.1.100 en el puerto 80
AT+CIPSTART=4,"TCP","192,168.1.100",80
 
// Configurar el modo de transmisión
AT+CIPMODE=1
 
// Enviar data por el canal 4 (en el ejemplo 5 bytes)
AT+CIPSEND=4,5