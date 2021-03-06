/**
*	@defgroup HAL
*	EcoBT main component
*
*/

/**	
 *	@ingroup HAL
 *	@defgroup SPI
 *	@{
 *	@file 	epl_hal_spi.h
 *	@brief 	create software spi to write or read
 *	
 *	@author	tongkunlai@gmail.com
 *	@date	2012.11.19
 *  @copyright Copyright 2013 EPLAB National Tsing Hua University. All rights reserved.\n
 *  The information contained herein is confidential property of NTHU. 
 *      The material may be used for a personal and non-commercial use only in connection with 
 *      a legitimate academic research purpose.  
 *      Any attempt to copy, modify, and distribute any portion of this source code or derivative thereof for commercial, 
 *      political, or propaganda purposes is strictly prohibited.  
 *      All other uses require explicit written permission from the authors and copyright holders. 
 *      This copyright statement must be retained in its entirety and displayed 
 *      in the copyright statement of derived source code or systems.
 */

#ifndef HAL_SPI_H
#define HAL_SPI_H
#include "hal_types.h"
#include <CC2540.h>

/** @brief	Write one byte to SPI interface
*
* Write one byte to SPI interface
*
*  @param [in]       write
*     Value to write
*/
void spiWriteByte(uint8 write);

/** @brief	Read one byte from SPI interface
*
* Read one byte from SPI interface
*
* @param [in]       read
*     Read out value
* @param [in]       write
*     Value to write
*/
void spiReadByte(uint8 *read, uint8 write);

/** @brief	Init SPI interface
*
* Init SPI interface
* 	@return none
*/
void spiInit();

#endif

/**
* @}
*/