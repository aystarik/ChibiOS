/*
    ChibiOS/RT - Copyright (C) 2006,2007,2008,2009,2010,
                 2011,2012 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    SPC560BCxx/spc560bc_registry.h
 * @brief   SPC560B/Cxx capabilities registry.
 *
 * @addtogroup HAL
 * @{
 */

#ifndef _SPC560BC_REGISTRY_H_
#define _SPC560BC_REGISTRY_H_

/*===========================================================================*/
/* Platform capabilities.                                                    */
/*===========================================================================*/

/**
 * @name    SPC560Pxx capabilities
 * @{
 */
/* LINFlex attributes.*/
#define SPC5_HAS_LINFLEX0                   TRUE
#define SPC5_LINFLEX0_PCTL                  48
#define SPC5_LINFLEX0_RXI_HANDLER           vector79
#define SPC5_LINFLEX0_TXI_HANDLER           vector80
#define SPC5_LINFLEX0_ERR_HANDLER           vector81
#define SPC5_LINFLEX0_RXI_NUMBER            79
#define SPC5_LINFLEX0_TXI_NUMBER            80
#define SPC5_LINFLEX0_ERR_NUMBER            81

#define SPC5_HAS_LINFLEX1                   TRUE
#define SPC5_LINFLEX1_PCTL                  49
#define SPC5_LINFLEX1_RXI_HANDLER           vector99
#define SPC5_LINFLEX1_TXI_HANDLER           vector100
#define SPC5_LINFLEX1_ERR_HANDLER           vector101
#define SPC5_LINFLEX1_RXI_NUMBER            99
#define SPC5_LINFLEX1_TXI_NUMBER            100
#define SPC5_LINFLEX1_ERR_NUMBER            101

#define SPC5_HAS_LINFLEX2                   TRUE
#define SPC5_LINFLEX2_PCTL                  50
#define SPC5_LINFLEX2_RXI_HANDLER           vector119
#define SPC5_LINFLEX2_TXI_HANDLER           vector120
#define SPC5_LINFLEX2_ERR_HANDLER           vector121
#define SPC5_LINFLEX2_RXI_NUMBER            119
#define SPC5_LINFLEX2_TXI_NUMBER            120
#define SPC5_LINFLEX2_ERR_NUMBER            121

#define SPC5_HAS_LINFLEX3                   TRUE
#define SPC5_LINFLEX3_PCTL                  51
#define SPC5_LINFLEX3_RXI_HANDLER           vector122
#define SPC5_LINFLEX3_TXI_HANDLER           vector123
#define SPC5_LINFLEX3_ERR_HANDLER           vector124
#define SPC5_LINFLEX3_RXI_NUMBER            122
#define SPC5_LINFLEX3_TXI_NUMBER            123
#define SPC5_LINFLEX3_ERR_NUMBER            124

/* SIU/SIUL attributes.*/
#define SPC5_HAS_SIU                        FALSE
#define SPC5_SIU_PCTL                       68
#define SPC5_SIU_SUPPORTS_PORTS             TRUE
#define SPC5_SIU_NUM_PORTS                  8
#define SPC5_SIU_NUM_PCRS                   123
#define SPC5_SIU_NUM_PADSELS                32
/** @} */

#endif /* _SPC560BC_REGISTRY_H_ */

/** @} */