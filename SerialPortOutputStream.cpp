/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */

/* ****************************************************************************************
 * Include
 */
#include "./SerialPortOutputStream.h"

//-----------------------------------------------------------------------------------------
#include "mframe.h"

/* ****************************************************************************************
 * Macro
 */

/* ****************************************************************************************
 * Using
 */
using mframe::ctrl::SerialPortOutputStream;

//-----------------------------------------------------------------------------------------

/* ****************************************************************************************
 * Variable <Static>
 */

/* ****************************************************************************************
 * Construct Method
 */

//-----------------------------------------------------------------------------------------
SerialPortOutputStream::SerialPortOutputStream(mframe::hal::usart::USART& base) : mBase(base) {
  this->mBase.setEventTransfer(this);
  return;
}

//-----------------------------------------------------------------------------------------
SerialPortOutputStream::~SerialPortOutputStream(void) {
  this->mBase.beginTransfer(false);
  this->mBase.setEventTransfer(nullptr);
  this->abortWrite();
  return;
}

/* ****************************************************************************************
 * Operator Method
 */

/* ****************************************************************************************
 * Public Method <Static>
 */

/* ****************************************************************************************
 * Public Method <Override> - mframe::hal::usart::EventTransfer
 */

//-----------------------------------------------------------------------------------------
bool SerialPortOutputStream::onUartTransfer(uint8_t& data) {
  if (this->mReadBuffer == nullptr)
    return false;

  int result = this->mReadBuffer->pollByte(reinterpret_cast<char&>(data));

  if (result >= 0) {
    ++this->mResult;
    return true;

  } else {
    this->execute();
    return false;
  }
}

/* ****************************************************************************************
 * Public Method
 */

/* ****************************************************************************************
 * Protected Method <Static>
 */

/* ****************************************************************************************
 * Protected Method <Override>
 */

//-----------------------------------------------------------------------------------------
void SerialPortOutputStream::onWriteEvent(void) {
  this->mBase.beginTransfer(true);
  return;
}

/* ****************************************************************************************
 * Protected Method
 */

/* ****************************************************************************************
 * Private Method
 */

/* ****************************************************************************************
 * End of file
 */
