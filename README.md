# Controlador Basico  MIDI con Teensy 

Este proyecto esta pensado para hacer un conrolador MIDI de bajo costo, usando un Microcontrolador llamado Teensy, en este caso utilizaremos las versión 3.2, ademásusaremos una serie de potenciometros de 100k y un par de metros de cables o Jumpers.

Teensy utiliza la plataforma de arduino para ser programado, usando la libreria Teensyduino, que habilitará las boards de teensy en el ide de arduino y el Teensyloader que es una especie de dysplay del teensy.

Esto puede funcionar vara todas las plataformas, pero acá veremos como hacerlo para sistemos operativos GNU/Linux.

Lo primero es descargar el software requerido.


## Software 

Arduino (Versión 1.6) [https://www.arduino.cc/en/Main/OldSoftwareReleases#previous]

Necesitamos una versión previa a la 1.6.5 e aruino para que sea compatible con teensyduino.

Teensyduino Install [https://www.pjrc.com/teensy/td_download.html

Tener en cuenta si tienes arquitectura de 32 o 64 bits

Teensy Loader [https://www.pjrc.com/teensy/loader.html]

## Instalasión

### Arduino 

Después de haber descargado arduino, el resultado es un archivo comprimido .tar.xz,  vía  terminal accedemos a la carpeta de la descarga y seguimos las siguientes lineas de comando 

tar -xvf arduino-1.6.5-r5-linux64.tar.xz

cd arduino-1.6.5-r5/

Para abrirlo con 

./arduino

### Teensyduino

Cuando ya tengamos arduino instalado, procedemos a montar el Teensyduino, para empezar  debemos de agregar el archivo 49-teensy.rules en /etc/udev/rules.d/ 

el archivo 49-teensy.rules da permiso a los usuarios que son root para usar el dispositivo Teensy.

Vía terminal 

wget https://www.pjrc.com/teensy/49-teensy.rules

sudo cp 49-teensy.rules /etc/udev/rules.d/

Ahora accedemos a la carpeta donde está la descarga del Teensyduino install.linux...

Vía terminal 

chmod +x TeensyduinoInstall.linux64 

./TeensyduinoInstall.linux64 

![Paso 1](https://archive.org/download/teensyInstall/teensy1.png)  

Buscamos la carpeta donde está arduino en este caso en /home/noi/Descargas/arduino el boton de next se acivará

![Paso 2](https://archive.org/download/teensyInstall/teensy2.png)

![Paso 3](https://archive.org/download/teensyInstall/teensy3.png)

![Paso 4](https://archive.org/download/teensyInstall/teensy4.png)

![Paso 5](https://archive.org/download/teensyInstall/teensy5.png)

Después de esto al abrir arduino en Herramientas\Placa\Teensy3.2



Codigo 

## Hardware

Teensy 3.2 [https://www.pjrc.com/teensy/index.html]

4 Potenciometros de 100 k 

Cables 

Protoboard

Cable miniUSB A/B

## Protoboard

![Proto](https://github.com/Noisk8/Basic-MIDI-con-Teensy-/blob/master/MIDI-T_bb.png)


## Esquematico 

![Esquema](https://github.com/Noisk8/Basic-MIDI-con-Teensy-/blob/master/MIDI-T_esquem%C3%A1tico2.png)

