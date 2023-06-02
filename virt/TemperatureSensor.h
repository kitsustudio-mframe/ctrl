/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MCUF_9CBF1345_9D97_4C6C_A466_2EF635815DB4
#define MCUF_9CBF1345_9D97_4C6C_A466_2EF635815DB4

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "./../TemperatureSensor.h"

/* ****************************************************************************************
 * Namespace
 */
namespace ctrl::virt {
  class TemperatureSensor;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
class ctrl::virt::TemperatureSensor : public lang::Object,
                                      public ctrl::TemperatureSensor {
  /* **************************************************************************************
   * Variable <Public>
   */

  /* **************************************************************************************
   * Variable <Protected>
   */

  /* **************************************************************************************
   * Variable <Private>
   */
 private:
  float mValue;

  /* **************************************************************************************
   * Abstract method <Public>
   */

  /* **************************************************************************************
   * Abstract method <Protected>
   */

  /* **************************************************************************************
   * Construct Method
   */
 public:
  /**
   * @brief Construct a new Temperature Sensor Simulator object
   *
   */
  TemperatureSensor(void);

  /**
   * @brief Construct a new Temperature Sensor Simulator object
   *
   * @param value
   */
  TemperatureSensor(float value);

  /**
   * @brief Destroy the Temperature Sensor Simulator object
   *
   */
  virtual ~TemperatureSensor(void) override;

  /* **************************************************************************************
   * Operator Method
   */

  /* **************************************************************************************
   * Public Method <Static>
   */

  /* **************************************************************************************
   * Public Method <Override> - ctrl::TemperatureSensor
   */
 public:
  /**
   * @brief Get the Celsius object
   *
   * @return float
   */
  virtual float getCelsius(void) override;

  /* **************************************************************************************
   * Public Method
   */
 public:
  /**
   * @brief Get the Celsius object
   *
   * @return float
   */
  virtual float setCelsius(float value);

  /* **************************************************************************************
   * Protected Method <Static>
   */

  /* **************************************************************************************
   * Protected Method <Override>
   */

  /* **************************************************************************************
   * Protected Method
   */

  /* **************************************************************************************
   * Private Method <Static>
   */

  /* **************************************************************************************
   * Private Method <Override>
   */

  /* **************************************************************************************
   * Private Method
   */
};

/* ****************************************************************************************
 * End of file
 */

#endif /* MCUF_9CBF1345_9D97_4C6C_A466_2EF635815DB4 */
