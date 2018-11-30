/**************************************************************************//**
 * @file efm32tg11b_can_mir.h
 * @brief EFM32TG11B_CAN_MIR register and bit field definitions
 * @version 5.5.0
 ******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories, Inc. www.silabs.com</b>
 ******************************************************************************
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software.@n
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.@n
 * 3. This notice may not be removed or altered from any source distribution.
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Silicon Laboratories, Inc.
 * has no obligation to support this Software. Silicon Laboratories, Inc. is
 * providing the Software "AS IS", with no express or implied warranties of any
 * kind, including, but not limited to, any implied warranties of
 * merchantability or fitness for any particular purpose or warranties against
 * infringement of any proprietary rights of a third party.
 *
 * Silicon Laboratories, Inc. will not be liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this Software.
 *
 *****************************************************************************/

#if defined(__ICCARM__)
#pragma system_include       /* Treat file as system include file. */
#elif defined(__ARMCC_VERSION) && (__ARMCC_VERSION >= 6010050)
#pragma clang system_header  /* Treat file as system include file. */
#endif

/**************************************************************************//**
* @addtogroup Parts
* @{
******************************************************************************/
/**************************************************************************//**
 * @brief CAN_MIR CAN MIR Register
 * @ingroup EFM32TG11B_CAN
 *****************************************************************************/
typedef struct {
  __IOM uint32_t CMDMASK;      /**< Interface Command Mask Register  */
  __IOM uint32_t MASK;         /**< Interface Mask Register  */
  __IOM uint32_t ARB;          /**< Interface Arbitration Register  */
  __IOM uint32_t CTRL;         /**< Interface Message Control Register  */
  __IOM uint32_t DATAL;        /**< Interface Data a Register  */
  __IOM uint32_t DATAH;        /**< Interface Data B Register  */
  __IOM uint32_t CMDREQ;       /**< Interface Command Request Register  */
  uint32_t       RESERVED0[1]; /**< Reserved future */
} CAN_MIR_TypeDef;

/** @} End of group Parts */