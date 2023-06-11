/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_5D254320_94DB_4B27_879F_9BDACF1C3A0E
#define MFRAME_5D254320_94DB_4B27_879F_9BDACF1C3A0E

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../../hal/AnalogInputPin.h"
#include "./../../lang/Object.h"

/* ****************************************************************************************
 * Namespace
 */
namespace mframe::ctrl::virt {
  class AnalogInputPin;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
class mframe::ctrl::virt::AnalogInputPin : public mframe::lang::Object, public mframe::hal::AnalogInputPin {
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
  uint32_t mLevel;
  uint32_t mValue;

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
   * @brief Construct a new Virtual Analog Input Pin object
   *
   */
  AnalogInputPin(void);

  /**
   * @brief Destroy the Virtual Analog Input Pin object
   *
   */
  virtual ~AnalogInputPin(void) override;

  /* **************************************************************************************
   * Operator Method
   */

  /* **************************************************************************************
   * Public Method <Static>
   */

  /* **************************************************************************************
   * Public Method <Override> - mframe::hal::AnalogInputPin
   */
 public:
  /**
   * @brief
   *
   * @return uint32_t
   */
  virtual uint32_t convert(void) override;

  /**
   * @brief Get the adc convert level.
   *
   * @return uint32_t
   */
  virtual uint32_t getConvertLevel(void) override;

  /* **************************************************************************************
   * Public Method
   */
 public:
  /**
   * @brief Set the Value object
   *
   * @param value
   */
  virtual void setValue(uint32_t value);

  /**
   * @brief Set the Convert Level object
   *
   * @param level
   */
  virtual void setConvertLevel(uint32_t level);

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

#endif /* MFRAME_5D254320_94DB_4B27_879F_9BDACF1C3A0E */
