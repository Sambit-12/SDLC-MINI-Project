/**
 * @file snakewatergun.h
 * @author Sambit Nayak (nayaksambit99@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
	
#ifndef _snakewatergun_h_
#define _snakewatergun_h_

/**
	* Snake Water Gun winner chosen accoring to the option selected.
	* @param[in] you is user input among S W G 
	* @param[in] comp is computer input which is displayed after user input is shown
	* @return 0 -1 1 according to draw loosing winning respectively
    * @note Function's name describes well about it's actual task
	*/

#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>

/// Function prototype declaration
int SWG(char you,char comp);

#endif /* _snakewatergun_h_ */