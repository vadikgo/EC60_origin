# EC60

Open source universal 60% Electrostatic Capacitive PCB.

## Introduction

This project is a continuation of my development of open source EC boards.

The supported layout options are the following:

![Layout option](/Assets/Layout_option.png)

Mapping is purely for demonstration purposes, remapping of all keys is supported.
## Technical information

- Layout size: 60% (GH60 outline and mounting points, see pictures below)
- Compatible switches: EC switches (Topre and NIZ)
- Microcontroller: STM32F401
- Connector:
    * USB-C
    * JST connector for daughterboard
- Firmware compatibility: QMK (with VIA/VIAL support)
- Protection hardware (on all connection methods):
  * Fused
  * ESD protection

## Renders and Prototypes

### Render

Mainboard:

![PCB Front Render](/Assets/PCB_render_front.png)

![PCB Back Render](/Assets/PCB_render_back.png)

JIS Plate:
![Plate JIS Render](/Assets/Plate_render_jis.png)

HHKB Plate:
![Plate HHKB Render](/Assets/Plate_render_hhkb.png)

### Prototype

![PCB Front](/Assets/PCB_front.png)

![PCB Back](/Assets/PCB_back.png)

*NOTE*: the prototype PCB doesn't include a USB port and the JST connector is in a different position compared to the one in the render. This is because the above was a modified version of the PCB to be used in Vero. For all intents and purposes, the PCB is the same.

## Revisions and relative features

### Rev1

This revision implements all the main features of the PCB.

#### Connectivity

![Connectivity](/Assets/Connectivity.png)

Both onboard USB-C and JST connectors are supported. In both cases the protection features are preserved (fused and ESD).

## Copyright notice

This project is released under the MIT License. For the license, please refer to the LICENCE.md file.
