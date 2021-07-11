# Design

## High Level Design 


| **Test ID** |                 **Description**                              |  **Exp IN**            | **Exp Out**                  | **Actual Out**                           |   
|-------------|--------------------------------------------------------------|------------------------|------------------------------|------------------------------------------| 
|  HL_01       |  User Should be able to choose Snake                         |Check the user Input    | Computer Input being Checked | Actual output displayed                 |
|  HL_02       |  User Should be able to choose Gun                           |Check the user Input    | Computer Input being Checked | Actual output displayed                 |
|  HL_03       |  User should be able to choose Water                         |Check the user Input    | Computer Input being Checked | Actual output displayed                 | 
|  HL_04       |  Points of each round                                        |Choice user-:           | Choice Computer-:            | Points of each Round                    | 
|  HL_03       |  Number of rounds want to play by user                       |Check the user Input    | Choices of User being asked  | Result win/lost/Draw                    | 

## Low Level Design 

| **Test ID** |                 **Description**                              | **Exp I/P-1 You**  | **Exp I/P-2 Computer** |**Actual-Output** |    
|-------------|--------------------------------------------------------------|--------------------|------------------------|------------------|
|  LL_01       | User will be able to choose Snake via pressing S             |    Snake (S)       |    Snake(S)            |  Game Draw      |
|  LL_02       | User will be able to choose  Gun  via pressing G             |    Gun   (G)       |    Gun  (G)            |  Game Draw      |
|  LL_03       | User will be able to choose Water via pressing G             |    Water (w)       |    Water(w)            |  Game Draw      |
|  LL_04       | User will be able to choose Snake via pressing S             |    Snake (S)       |    Gun  (G)            |  You Lost       |
|  LL_05       | User will be able to choose  Gun  via pressing G             |    Gun   (G)       |    Water(w)            |  You Lost       |
|  LL_06       | User will be able to choose Water via pressing W             |    Water (G)       |    Gun  (S)            |  You Win        |
|  LL_07       | User will be able to choose Snake via pressing S             |    Snake (S)       |    Water(W)            |  You Win        |
|  LL_08       | User will be able to choose  Gun  via pressing G             |    Gun   (G)       |    Snake(S)            |  You Win        |
|  LL_09       | User will be able to choose Water via pressing G             |    Water (W)       |    Snake(S)            |  You Lost       |
