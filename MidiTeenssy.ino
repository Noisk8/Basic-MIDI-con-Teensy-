

void setup() {
}

void loop() {

  //El primer argumento es el número de controlador, que es 1 (es decir, modulación). 
  //Esto puede ser un valor entre 0 y 127.

  //El segundo argumento es el valor real del controlador  que es el dato que se lee desde el pot
  // La función analogRead (0) lee el pin 0 de la entrada analógica (la parte media de la pot)  
  // y da un valor entre 0 y 1023 dependiendo de la posición actual del pot

  //El tercer argumento es el número de canal MIDI, que se da en el ejemplo anterior como 1. 
  //Este puede ser un valor entre 1 y 16.

  
  usbMIDI.sendControlChange(1, analogRead(0) / 8, 1);
   delay(5);

   usbMIDI.sendControlChange(1, analogRead(1) / 8, 2);
   delay(5);

    usbMIDI.sendControlChange(1, analogRead(2) / 8, 3);
   delay(5);

    usbMIDI.sendControlChange(1, analogRead(3) / 8, 4);
   delay(5);
    
    usbMIDI.sendControlChange(1, analogRead(4) / 8, 5);
   delay(5);

    usbMIDI.sendControlChange(1, analogRead(5) / 8, 6);
   delay(5);

 usbMIDI.sendControlChange(1, analogRead(6) / 8, 7);
   delay(5);

    usbMIDI.sendControlChange(1, analogRead(7) / 8, 8);
   delay(5);
   
}

//Fuente >> http://little-scale.blogspot.com.co/2012/10/a-very-simple-diy-usb-midi-controller.html

// MIDI NUmero de controlador Guia >> http://www.indiana.edu/~emusic/cntrlnumb.html

