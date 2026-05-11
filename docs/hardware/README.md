
# Hardware

<div align="center">
<a href="https://github.com/UNIT-Electronics-MX/unit_devlab_i2c_qwiic_converter_module/blob/main/hardware/unit_sch_v_1_0_0_ue0106_i2c_qwiic_converter_module.pdf"><img src="resources/Schematics_icon.jpg?raw=false" width="200px"><br/>Schematic</a>
</div>

## Pinout

<div align="center">
    <a href="#"><img src="#" width="500px"><br/>Pinout</a>
    <br/>
    <br/>
    <br/>
    

| Pin Label | Function    | Notes                             |
|-----------|-------------|-----------------------------------|
| VCC       | Power Supply| 3.3V or 5V                       |
| GND       | Ground      | Common ground for all components  |

</div>

## Dimensions

<div align="center">
<a href="./resources/unit_dimensions_v_1_0_0_ue0106_i2c_qwiic_converter_module.png" width="500px"><br/> Dimensions</a>
</div>

## Topology

<div align="center">

<div align="center">
<a href="./resources/unit_topology_v_1_0_0_ue0106_i2c_qwiic_converter_module.png"><img src="#" width="500px"><br/> Topology</a>
<br/>
<br/>
<br/>

## Topology Description

| Ref. | Description |
|---|---|
| U1 | Boost converter circuit based on TPS61023 for LV power rail generation |
| U4 | Buck converter circuit based on TPS54302DDCT for HV power rail generation |
| Q1, Q4, Q5 | Bidirectional I²C level shifter circuits based on 2N7002KDW MOSFETs |
| Q2, Q3 | Power switching MOSFET stage for voltage rail selection/control |
| J1, J2 | Qwiic/STEMMA QT connectors (JST 1.0 mm pitch) for I²C interface |
| J5, J6 | Castellated 1x10 pin headers (2.54 mm pitch) for external module integration |
| J7, J8 | 1x6 pin headers/connectors for HV/LV mode configuration and external interfacing |
| JP1 | LV Mode solder jumper selector |
| JP2 | HV Mode solder jumper selector |

</div>


> **Note:** The module also includes a Qwiic/STEMMA QT connector carrying the same four signals (VCC, GND, SDA, SCL) for effortless daisy-chaining.

---

## Functional Description

The **DevLab Qwiic I²C Converter Module** is a bidirectional voltage level shifter designed for seamless communication between low-voltage and high-voltage I²C devices. The module enables safe interfacing between 3.3V and 5V systems using MOSFET-based bidirectional level translation.

The design integrates dedicated boost and buck power conversion stages to generate and regulate the required voltage rails for both LV and HV domains. Multiple Qwiic/STEMMA QT connectors and castellated interfaces simplify integration with embedded systems, development boards, sensors, and expansion modules.

The module supports:
- Bidirectional I²C level shifting
- Qwiic/STEMMA QT compatibility
- Castellated edge connections for embedded integration
- Configurable LV/HV operating modes
- 3.3V and 5V logic interoperability
- Daisy-chain I²C connectivity

Typical applications include:
- Sensor interfacing
- Mixed-voltage embedded systems
- Rapid prototyping
- Development board expansion
- Qwiic/STEMMA QT ecosystem integration

# References

- [TPS61023 Datasheet](https://www.ti.com/lit/ds/symlink/tps61023.pdf)
- [TPS54302 Datasheet](https://www.ti.com/lit/ds/symlink/tps54302.pdf)
- [2N7002KDW Datasheet](https://assets.nexperia.com/documents/data-sheet/2N7002KDW.pdf)
```
