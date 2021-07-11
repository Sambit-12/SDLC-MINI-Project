# TEST PLAN:

## Table no: High level test plan

| **Test ID** |                 **Description**                              |  **Exp IN**            | **Exp Out**                  | **Actual Out**                           |   
|-------------|--------------------------------------------------------------|------------------------|------------------------------|------------------------------------------| 
|  H_01       |  User Should be able to choose Snake water gun as "S" "W" "G"|Check the user Input    | Computer Input being Checked | Actual output displayed                  |
|  H_02       |  How Many number of times the user wants to play             |Check the user Input    | It will ask you the choices  | Your total points will be displayed      |
|  H_03       |  Each choices you make will be given a score with respect to computer choice |User score will be given| Computer score will be given | Points of each round can be                                                                                                                               negative or positive in each round is being evaluated|


## Table no: Low level test plan    

| **Test ID** |                 **Description**                              | **Exp I/P-1 You**  | **Exp I/P-2 Computer** |**Actual-Output**|    
|-------------|--------------------------------------------------------------|--------------------|------------------------|-----------------|
|  L_01       | User will be able to choose Snake via pressing S             |    Snake (S)       |    Snake(S)            |  Game Draw      |
|  L_02       | User will be able to choose  Gun  via pressing G             |    Gun   (G)       |    Gun  (G)            |  Game Draw      |
|  L_03       | User will be able to choose Water via pressing G             |    Water (w)       |    Water(w)            |  Game Draw      |
|  L_04       | User will be able to choose Snake via pressing S             |    Snake (S)       |    Gun  (G)            |  You Lost       |
|  L_05       | User will be able to choose  Gun  via pressing G             |    Gun   (G)       |    Water(w)            |  You Lost       |
|  L_06       | User will be able to choose Water via pressing W             |    Water (G)       |    Gun  (S)            |  You Win        |
|  L_07       | User will be able to choose Snake via pressing S             |    Snake (S)       |    Water(W)            |  You Win        |
|  L_08       | User will be able to choose  Gun  via pressing G             |    Gun   (G)       |    Snake(S)            |  You Win        |
|  L_09       | User will be able to choose Water via pressing G             |    Water (W)       |    Snake(S)            |  You Lost       |
