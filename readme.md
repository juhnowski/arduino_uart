# Test UART
mega --- couner ----> uno

mega <--   OK   ----- uno

## Config
| UNO |  MEGA |LCD| Description  |
|-----|-------|---|--------------|
|0(RX)|14(TX3)|   | UART         |
|1(TX)|15(RX3)|   | UART         |
|     |GND    |GND| LCD-MEGA     |
|     |5V     |VCC| LCD-MEGA     |
|     |20(SDA)|SDA| LCD-MEGA     |
|     |21(SCL)|SCL| LCD-MEGA     |
| GND |       |GND| LCD-UNO      |
| 5V  |       |VCC| LCD-UNO      |
| A4  |       |SDA| LCD-UNO      |
| A5  |       |SCL| LCD-UNO      |
