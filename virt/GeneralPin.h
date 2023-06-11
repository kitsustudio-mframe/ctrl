/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_422910B3_C829_4F28_9F7E_4A928F53DA5A
#define MFRAME_422910B3_C829_4F28_9F7E_4A928F53DA5A

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../../hal/GeneralPin.h"
#include "./../../lang/Object.h"

/* ****************************************************************************************
 * Namespace
 */
namespace mframe::ctrl::virt {
  class GeneralPin;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
class mframe::ctrl::virt::GeneralPin : public mframe::lang::Object,
                                       public mframe::hal::GeneralPin {
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
  uint8_t mDir;
  uint8_t mValue;
  mframe::hal::GeneralPinMode mGeneralPinMode;

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
   * @brief Construct a new Virtual General Pin object
   *
   */
  GeneralPin(void);

  /**
   * @brief Destroy the Virtual General Pin object
   *
   */
  virtual ~GeneralPin(void) override;

  /* **************************************************************************************
   * Operator Method
   */

  /* **************************************************************************************
   * Public Method <Static>
   */

  /* **************************************************************************************
   * Public Method <Override>
   */
 public:
  /**
   * @brief Get io direction.
   *
   * @return true output
   * @return false input
   */
  virtual bool getDir(void) override;

  /**
   * @brief
   *
   * @param dir false = input, true = output.
   */
  virtual void setDir(bool dir) override;

  /**
   * @brief
   *
   * @return mframe::hal::GeneralPinMode
   */
  virtual mframe::hal::GeneralPinMode getPinMode(void) override;

  /**
   * @brief
   *
   * @param mode
   * @return true
   * @return false
   */
  virtual mframe::hal::GeneralPinMode setPinMode(mframe::hal::GeneralPinMode mode) override;

  /**
   * @brief Set the High object
   *
   */
  virtual void setHigh(void) override;

  /**
   * @brief Set the Input object
   *
   */
  virtual void setInput(void) override;

  /**
   * @brief Set the Low object
   *
   */
  virtual void setLow(void) override;

  /**
   * @brief Set the Output object
   *
   */
  virtual void setOutput(void) override;

  /**
   * @brief Set the Toggle object
   *
   */
  virtual void setToggle(void) override;

  /**
   * @brief
   *
   * @return true
   * @return false
   */
  virtual bool getValue(void) override;

  /**
   * @brief
   *
   * @param level
   */
  virtual void setValue(bool level) override;

  /* **************************************************************************************
   * Public Method
   */
 public:
  /**
   * @brief Set the Input Value object
   *
   * @param level
   * @return true
   * @return false
   */
  virtual bool setInputValue(bool level);

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

#endif /* MFRAME_422910B3_C829_4F28_9F7E_4A928F53DA5A */
