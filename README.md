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

HHKB 6U Plate:
![Plate HHKB Render](/Assets/Plate_render_hhkb_6u.png)

HHKB 7U Plate:
![Plate HHKB Render](/Assets/Plate_render_hhkb_7u.png)

### Prototype

#### Rev 1
![PCB Front](/Assets/PCB_front.png)

![PCB Back](/Assets/PCB_back.png)

#### Rev 1.1
![PCB 1.1](/Assets/PCB_1_1.png)

*NOTE*: the prototype PCB for Rev1 doesn't include a USB port and the JST connector is in a different position compared to the one in the render. This is because the above was a modified version of the PCB to be used in Vero. For all intents and purposes, the PCB is the same.

## Revisions and relative features

### Rev 1

This revision implements all the main features of the PCB.

### Rev 1.1

This revision implements some changes:

- Changed the USB-C port to a different part that is more readily available
- reassigning of some GPIO port functions to avoid problems during compilation and boot sequence.
- connection of one of the mounting holes to the GND plane.
- some minor changes in silkscreen

#### Connectivity

![Connectivity](/Assets/Connectivity.png)

Both onboard USB-C and JST connectors are supported. In both cases the protection features are preserved (fused and ESD).

## PCB order procedure

In order to have me highers compatibility possible with PCB manufacturers, I decided to design the board around the [JLC7628 Stackup](https://cart.jlcpcb.com/impedance#:~:text=4%2DLayer%20Impedance%20Control%20Stackup) from JLCPCB.

The rational behind this is that the JCPCB stackup is relatively cheap and if the board worked with the stackup, it would be easier to get the board to work with pretty much any other many that offer an equivalent stackup and higher prices.

The plates can be instead be made out of standard 2 layer stackup or with metal, like the Realforce plates.

### Production files

The production can be found in the [Production folder](/Production).

In there you'll find the main PCB files and the JIS and HHKB plates.

As usual the `*.zip` files are the gerber files, `BOM-*.csv` are the BOM (Bill Of Material) files and `POS-*.csv` are the POS/CPL (Footprint POSition/Component Placement List) files.

## Mainboard

As mentioned above, the mainboard is designed around the JLCPCB stackup. The mainboard is a 4 layer board.

Here are the options to select when ordering the mainboard:

- PCB thickness: 1.6mm or 1.2mm
- Impedance: NO
- Layer stackup:
  - L1(Top layer): `EC60-F_Cu.gbr`
  - L2(Inner layer1): `EC60-In1_Cu.gbr`
  - L3(Inner layer2): `EC60-In2_Cu.gbr`
  - L4(Bottom layer): `EC60-B_Cu.gbr`
- PCB Color: whatever you like
- Surface Finish: whatever you like
- Material Type: `FR-4 TG155`

All the other options can be left as default.

#### Assembly options

Here follows the options to be used for assembly:
- Assembly Side: Bottom
- Tooling holes: `Added by JLCPCB`
- Confirm Parts Placement: `yes`

**NOTES ABOUT THE OPTIONS**

- Once you upload the gerber files wait for the system to automatically recognize the board outline and layers. It will take a while, be patient.

- `PCB thickness` has been tested on both 1.6mm and 1.2mm so it's your call on which one to use.

- For `Material Type` I strongly suggest to use `FR-4 TG155`, using the standard `FR4-Standard TG130-140` material might result in the board delamination and generally is not advised on 4 layer boards.

## Plates

The plates are designed to be 2 layer boards. All the default options can be left as default, the only thing to change is the `PCB thickness` option, which should be set to `1.2mm`.

## Copyright notice

This project is released under the MIT License. For the license, please refer to the LICENSE.md file.
