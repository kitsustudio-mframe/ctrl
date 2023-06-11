/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */

/* ****************************************************************************************
 * Include
 */
#include "./GeneralPin.h"

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Macro
 */

/* ****************************************************************************************
 * Using
 */
using mframe::ctrl::virt::GeneralPin;

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Variable <Static>
 */

/* ****************************************************************************************
 * Construct Method
 */

//-----------------------------------------------------------------------------------------
GeneralPin::GeneralPin(void) {
  this->mDir = 0;
  this->mValue = 0;
  this->mGeneralPinMode = mframe::hal::GeneralPinMode::PUSH_PULL;
  return;
}

//-----------------------------------------------------------------------------------------
GeneralPin::~GeneralPin(void) {
  this->mDir = 0;
  this->mValue = 0;
  this->mGeneralPinMode = mframe::hal::GeneralPinMode::PUSH_PULL;
  return;
}
/* ****************************************************************************************
 * Operator Method
 */

/* ****************************************************************************************
 * Public Method <Static>
 */

/* ****************************************************************************************
 * Public Method <Override>
 */

//-----------------------------------------------------------------------------------------
bool GeneralPin::getDir(void) {
  return this->mDir;
}

//-----------------------------------------------------------------------------------------
void GeneralPin::setDir(bool dir) {
  this->mDir = dir;
}

//-----------------------------------------------------------------------------------------
mframe::hal::GeneralPinMode GeneralPin::getPinMode(void) {
  return this->mGeneralPinMode;
}

//-----------------------------------------------------------------------------------------
mframe::hal::GeneralPinMode GeneralPin::setPinMode(mframe::hal::GeneralPinMode mode) {
  this->mGeneralPinMode = mode;
  return this->mGeneralPinMode;
}

//-----------------------------------------------------------------------------------------
void GeneralPin::setHigh(void) {
  this->setValue(true);
  return;
}

//-----------------------------------------------------------------------------------------
void GeneralPin::setInput(void) {
  this->setDir(false);
  return;
}

//-----------------------------------------------------------------------------------------
void GeneralPin::setLow(void) {
  this->setValue(false);
  return;
}

//-----------------------------------------------------------------------------------------
void GeneralPin::setOutput(void) {
  this->setDir(true);
  return;
}

//-----------------------------------------------------------------------------------------
void GeneralPin::setToggle(void) {
  if (this->getDir() == false)
    return;

  this->setValue(!this->getValue());
  return;
}

//-----------------------------------------------------------------------------------------
bool GeneralPin::getValue(void) {
  return this->mValue;
}

//-----------------------------------------------------------------------------------------
void GeneralPin::setValue(bool level) {
  if (this->getDir() == false)
    return;

  this->mValue = getValue();
  return;
}

/* ****************************************************************************************
 * Public Method
 */

/**
 * @brief Set the Input Value object
 *
 * @param level
 * @return true
 * @return false
 */
bool GeneralPin::setInputValue(bool level) {
  if (this->getDir() == true)
    return false;

  this->mValue = level;
  return true;
}
/* ****************************************************************************************
 * Protected Method <Static>
 */

/* ****************************************************************************************
 * Protected Method <Override>
 */

/* ****************************************************************************************
 * Protected Method
 */

/* ****************************************************************************************
 * Private Method
 */

/* ****************************************************************************************
 * End of file
 */
