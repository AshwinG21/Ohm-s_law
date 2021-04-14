# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Finding the colour code of resistance                         | B B R G    |100 OHMS     |100 OHMS        |Requirement based |
|  H_02       |Suppose we must use a 2.2 kilo ohm resistor for a project     | R R R G    |2200 OHMS    |22000 OHMS      |Scenario based    |
|  H_03       |Suppose a company asks for 2 kilo ohms resistors              | R R R G    |2200 OHMS    |2000 OHMS       |Boundary based    |

## Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Suppose we want to find the exact resistance through a device |V = 5V, I = 1mA|5 KILO OHMS|5 KILO OHMS    |Requirement based |
|  L_02       |--------------------------------------------------------------|  ------------|-------------|----------------|Scenario based    |
|  L_03       |--------------------------------------------------------------|  ------------|-------------|----------------|Boundary based    |
