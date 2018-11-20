// Listar las redes WiFi y conectar a una de ella
// sustituir SSID y PASSWORD por los parametros de la red
AT+CWLAP
AT+CWJAP=SSID,PASSWORD
 
 
// Establecer conexión como cliente
AT+CWJAP=SSID,PASSWORD
AT+CIPMUX=1
AT+CIPSTART=4,"TCP","google.com",80
 
// Establecer una conexión como servidor
realizar un servidor
AT+CWJAP=SSID,PASSWORD
AT+CIPMUX=1
AT+CIPSERVER=1,80