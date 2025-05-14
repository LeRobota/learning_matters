![img](/doc_img/LM25.jpg "imggen")

# Learning Matters 25
This project is derived from the **Learning Matters** project created by designer-researchers **Claire Eliot & Marion Voillot**.  
This updated version was made possible thanks to funding from the **Fréquence Écoles** association.

- 🌐 Original project website: [https://www.premierscris.org/learning-matters](https://www.premierscris.org/learning-matters)  
- 🌐 Fréquence Écoles website: [https://www.frequence-ecoles.org](https://www.frequence-ecoles.org)

---

## Update Goals

This update aims to remain as faithful as possible to the original project while improving specific aspects related to:

- ✅ Wireless charging replaced with a USB-C charger for better reliability and safety  
- ✅ DIY connectors replaced with pogo pins for greater stability  
- ✅ Redesigned connectors to avoid short circuits when plugged in incorrectly  
- ✅ 3D-printed module design for easier fabrication and increased durability  
- ✅ Simplified fabrication process  
- ✅ Simplified assembly  
- ✅ Fewer materials and tools required  
- ✅ Possibility to create new modules from the same base  
- ✅ Possibility to produce "sensors" without sewing skills

---

## Educational Approach

Learning Matters emphasizes active learning in response to digital technology by engaging children's senses and fine motor skills.
While basic interaction modules are provided, the part touched by the child can easily be replaced with any tactile material or shape by simply swapping the material in contact with the body.

---

## Materials

### Fabrics and Components

| Item | Link |
|------|------|
| **Red neoprene**| [Link](https://etissus.com/fr/tissu-ouate-rembourrage-/11510-tissu-scuba-neoprene-rouge.html) |
| **EVA foam** | [Link](https://etissus.com/fr/mousse-caoutchouc-eva/2761-tissu-mousse-caoutchouc-bleu.html) |
| **Grey PLA** | [Link](https://www.3djake.fr/extrudr/pla-nx-2-gris) |
| **Conductive tape** | [Link](https://www.amazon.fr/dp/B0CQX3Y7LH) |
| **Pogo pins** | [Link](https://www.amazon.fr/dp/B09STS5YZX) |
| **Trinket M0** | [Link](https://www.gotronic.fr/art-module-trinket-m0-ada3500-27170.htm) |
| **LiPo charger** | [Link](https://www.gotronic.fr/art-chargeur-lipo-amigo-pro-pim612-38175.htm) |
| **LiPo battery** | [Link](https://www.gotronic.fr/art-accu-lipo-3-7-vcc-400-mah-pr502535-5812.htm) |
| **High-brightness 3mm LED** | [Link](https://www.gotronic.fr/art-led-3-mm-l3fwc1-35813.htm) |
| **Threaded inserts (M2)** | [Link](https://www.amazon.fr/dp/B088QJG676) |
| **M2 screws** | [Link](https://www.amazon.fr/gp/product/B01B1OD9UQ) |
| **Washers** | [Link](https://www.gotronic.fr/art-10-rondelles-plates-2mm-6561.htm) |
| **JST cable** | [Link](https://www.gotronic.fr/art-cordon-jst-ph-femelle-2-cts-jst2100-22583.htm) |
| **3mm green PMMA plexiglass** | [Link](https://plexiglasssurmesure.fr/produit/plaque-plexiglass-vert-opale-3mm/) |
| **3mm frosted PMMA plexiglass** | [Link](https://plexiglasssurmesure.fr/produit/plaque-plexiglass-givre-blanc-opale-3mm/) |

---

![img](/doc_img/LM_circuit.png "LM_circuit.png")

---

## 🛠️ HOW TO

A full video tutorial is available here (in french) : https://youtu.be/ugfx-SLmRy8

## 01 - Build the Battery Module

![img](/doc_img/imgtuto01.jpg "img01")

#### 🧰 Required Components

- 3D-printed battery module  
- Laser-cut module cover  
- M2 threaded inserts  
- M2 screws + washers  
- LiPo battery  
- Wires  
- JST cable  
- Female pogo pin connector



#### 🔧 Assembly Instructions

1. **Solder the cables**  
   - Solder 3 wires to the female connector:  
     - Ground in the **center**  
     - Positive wires on the **sides**

![img](/doc_img/imgtuto02.jpg "img02")


2. **Prepare the connections**  
   - Strip the two positive wires  
   - Tie them together and solder to the **positive JST wire**  
   - Add heat shrink tubing for insulation

![img](/doc_img/imgtuto03.jpg "img03")
![img](/doc_img/imgtuto04.jpg "img04")


3. **Mount the connector**  
   - Insert the connector into its slot  
   - Use a small drop of **cyanoacrylate glue** to hold it in place  
   - ⚠️ Be careful **not to apply glue on metal contacts**

![img](/doc_img/imgtuto05.jpg "img05")


4. **Insert threaded inserts**  
   - Use a soldering iron to insert **M2 brass inserts** into their housings

![img](/doc_img/imgtuto06.jpg "img06")


5. **Final assembly**  
   - Screw the charger module in place  
   - Plug the battery into the "**bat**" port  
   - Plug the pogo pin JST cable into the "**device**" port

![img](/doc_img/imgtuto07.jpg "img07")



---


## 02 - Build the LED Module

![img](/doc_img/imgtuto08.jpg "img08")


#### 🧰 Required Components

- 3mm LED  
- Wires  
- Male pogo pin connector  
- 3D-printed LED module  
- PMMA plexiglass cover  
- M2 threaded inserts  
- M2 washers  
- M2 screws


#### 🔧 Assembly Instructions

1. **Solder the cables to the pogo pin connector**  
   - As in the previous step, solder 3 wires to the pogo pin connector:  
     - Ground in the **center**  
     - Positive wires on the **sides**
   
![img](/doc_img/imgtuto09.jpg "img09")


2. **Prepare the LED connections**  
   - Twist the two positive wires together  
   - Solder them to the **positive pin** of the LED  
   - Solder the ground wire to the **negative pin** of the LED
   
![img](/doc_img/imgtuto10.jpg "img10")


3. **Mount the pogo pin connector**  
   - Insert the connector into its slot as before  
   - Secure with **cyanoacrylate glue** if needed  
   - ⚠️ Avoid getting glue on the metal contacts

![img](/doc_img/imgtuto11.jpg "img11")


4. **Mount the LED**  
   - Insert the LED pins into their dedicated slots  
   - Secure the LED with **hot glue**
   
![img](/doc_img/imgtuto12.jpg "img12")


5. **Final assembly**  
   - Insert the M2 threaded inserts with a soldering iron  
   - Screw the PMMA plexiglass cover in place using M2 screws and washers

![img](/doc_img/imgtuto13.jpg "img13")


## 03 - Build the Sensor Module

![img](/doc_img/imgtuto15.jpg "img14")

#### 🧰 Required Components

- 3D-printed sensor module  
- Wires  
- Male and female pogo pin connectors  
- Capacitive touch sensor  
- Adafruit Trinket M0  
- Laser-cut plexiglass cover  
- Conductive adhesive  
- Laser-cut conductive fabric

---

#### 🔧 Assembly Instructions

1. **Install Arduino IDE**  
   - Download and install the Arduino IDE:  
     [https://www.arduino.cc/en/software/#ide](https://www.arduino.cc/en/software/#ide)

2. **Set up the Trinket M0 board**  
   - Follow the Adafruit instructions:  
     [https://learn.adafruit.com/adafruit-trinket-m0-circuitpython-arduino/arduino-ide-setup](https://learn.adafruit.com/adafruit-trinket-m0-circuitpython-arduino/arduino-ide-setup)
   - In the Arduino IDE, go to **Tools > Board Manager**, install **Adafruit SAMD Boards**, and select **Trinket M0**.

3. **Connect the Trinket M0**  
   - Plug in your Trinket M0  
   - If the onboard LED is not green, double-click the button on the board  
   - Wait a few seconds until the LED turns green

4. **Upload the Arduino code**  
   - In the Arduino IDE, go to **Tools > Port** and select the port labeled **Trinket M0**  
   - Download the project code from GitHub and click **Upload** to flash it to the board  
   - Once uploaded, unplug the board

5. **Solder the capacitive sensor wires**  
   - Solder 3 wires to the capacitive sensor:  
     - **Red** to **VCC**  
     - **Black** to **GND**  
     - Another color to **I/O** or **SIG** (depending on the label)
    
 ![img](/doc_img/imgtuto16.jpg "img16") 


6. **Add sensing wire**  
   - Solder a separate wire to the metallic pad of the capacitive sensor

![img](/doc_img/imgtuto17.jpg "img17")


7. **Prepare pogo pin connectors**  
   - Solder the **male and female pogo pin connectors** as shown in previous steps

![img](/doc_img/imgtuto18.jpg "img18")

  
8. **Solder male connector to the Trinket** 
   - Solder one **positive connector wire of the male pogo pin connector** to the **positive wire** of the capacitive sensor  
   - Solder the other **male connector wire** directly to the **BAT pin** on the Trinket M0

![img](/doc_img/imgtuto19.jpg "img19")
![img](/doc_img/imgtuto20.jpg "img20")

8. **Connect the female pogo pin**  
   - Solder the 2 positives wires to a single wire and connect it to **Pin 1** of the Trinket M0

![img](/doc_img/imgtuto21.jpg "img21")
![img](/doc_img/imgtuto22.jpg "img22")


9. **Connect data and ground**  
   - Solder the **I/O (or SIG) wire** from the sensor to **Pin 3** of the Trinket M0  
   - Gather all **ground wires** together and solder them to the **GND pin** of the Trinket M0

![img](/doc_img/imgtuto23.jpg "img23")
![img](/doc_img/imgtuto24.jpg "img24")


10. **Final assembly**  
    - Insert the **M2 threaded inserts** and mount the pogo pin connectors  
    - Screw the Trinket M0 and the capacitive sensor into their dedicated slots  
    - Strip a long section of the sensing wire  
    - Thread it through the hole in the **laser-cut plexiglass cover**  
    - Cut a strip of **conductive adhesive** and stick it over the exposed wire to make contact with the **conductive fabric**

![img](/doc_img/imgtuto25.jpg "img25")
![img](/doc_img/imgtuto26.jpg "img26")
![img](/doc_img/imgtuto27.jpg "img27")



11. **Install the fabric**  
    - Place the pre-cut conductive fabric over the adhesive and secure it with screws
   
![img](/doc_img/imgtuto28.jpg "img28")



🎉 You're done! Great job!

