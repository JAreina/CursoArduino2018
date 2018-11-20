# Archivo: led_boton.py

import pyfirmata

placa = pyfirmata.Arduino('CMO3')

print('Firmata version: %d.%d' % placa.get_firmata_version())
print('pyFirmata version:', pyfirmata.__version__)

pyfirmata.util.Iterator(placa).start()

entrada = placa.get_pin('d:8:i')
entrada.enable_reporting()
salida = placa.get_pin('d:12:o')

try:
    encendido = False
    while True:
        if entrada.read():
            encendido = not encendido
            salida.write(encendido)
            placa.pass_time(0.2)

finally:
    salida.write(False)
    placa.exit()