/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_F3E849F4_8586_4E91_A6EA_D93B8BD6D448
#define MFRAME_F3E849F4_8586_4E91_A6EA_D93B8BD6D448

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../hal/usart/USART.h"
#include "./../io/OutputStream.h"

/* ****************************************************************************************
 * Namespace
 */
namespace mframe::ctrl {
  class SerialPortOutputStream;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
class mframe::ctrl::SerialPortOutputStream : public mframe::io::OutputStream,
                                             public mframe::hal::usart::EventTransfer {
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
  mframe::hal::usart::USART& mBase;

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
   * @brief Construct a new Serial Port Output Stream object
   *
   * @param base
   */
  SerialPortOutputStream(mframe::hal::usart::USART& base);

  /**
   * @brief Destroy the Serial Port Output Stream object
   *
   */
  virtual ~SerialPortOutputStream(void) override;

  /* **************************************************************************************
   * Operator Method
   */

  /* **************************************************************************************
   * Public Method <Static>
   */

  /* **************************************************************************************
   * Public Method <Override> - mframe::hal::usart::EventTransfer
   */
 public:
  virtual bool onUartTransfer(uint8_t& data) override;

  /* **************************************************************************************
   * Public Method
   */

  /* **************************************************************************************
   * Protected Method <Static>
   */

  /* **************************************************************************************
   * Protected Method <Override>
   */
 protected:
  virtual void onWriteEvent(void) override;

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

#endif /* MFRAME_F3E849F4_8586_4E91_A6EA_D93B8BD6D448 */
