/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef CTRL_BE3E4DBC_AECB_44D9_B32A_7170E9B82E69
#define CTRL_BE3E4DBC_AECB_44D9_B32A_7170E9B82E69

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Namespace
 */
namespace ctrl {
  struct TemperatureSensor;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
struct ctrl::TemperatureSensor : public virtual lang::Interface {
  /* **************************************************************************************
   * Method
   */

  /**
   * @brief Get the Celsius object
   *
   * @return float
   */
  virtual float getCelsius(void) abstract;
};

/* ****************************************************************************************
 * End of file
 */

#endif /* CTRL_BE3E4DBC_AECB_44D9_B32A_7170E9B82E69 */
