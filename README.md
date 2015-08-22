# iot_sensor_node
The energia pin define for the MSP430 Sensor Node

# To install
  * Dowload this repository as a zip
  * Unzip file and rename to "iot_sensor_node"
  * Locate the Folder where the Energia applicaiton is installed
  * Copy this folder into the following directory: /Contents/Resources/Java/hardware/msp430/variants/
  * Open the boards.txt file located at: /Contents/Resources/Java/hardware/msp430/ in a text editor
  * Append the following text at the end of the file
 
```
  ##############################################################
  lpmsp430g2553rhb1.name=IoT Sensor Node w/ msp430g2553 (1MHz)
  lpmsp430g2553rhb1.upload.protocol=rf2500
  lpmsp430g2553rhb1.upload.maximum_size=16384
  lpmsp430g2553rhb1.build.mcu=msp430g2553
  lpmsp430g2553rhb1.build.f_cpu=1000000L
  lpmsp430g2553rhb1.build.core=msp430
  lpmsp430g2553rhb1.build.variant=iot_sensor_node
  lpmsp430g2553rhb1.upload.maximum_ram_size=512
  
  ##############################################################
  lpmsp430g2553rhb.name=IoT Sensor Node w/ msp430g2553 (16MHz)
  lpmsp430g2553rhb.upload.protocol=rf2500
  lpmsp430g2553rhb.upload.maximum_size=16384
  lpmsp430g2553rhb.build.mcu=msp430g2553
  lpmsp430g2553rhb.build.f_cpu=16000000L
  lpmsp430g2553rhb.build.core=msp430
  lpmsp430g2553rhb.build.variant=iot_sensor_node
  lpmsp430g2553rhb.upload.maximum_ram_size=512 
 ```
  * Quit Energia and Relaunch
 
