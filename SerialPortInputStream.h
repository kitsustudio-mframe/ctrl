/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_DB068A0B_C322_4F94_95C6_77512B353910
#define MFRAME_DB068A0B_C322_4F94_95C6_77512B353910

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../hal/usart/USART.h"
#include "./../io/InputStream.h"

/* ****************************************************************************************
 * Namespace
 */
namespace mframe::ctrl {
  class SerialPortInputStream;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
class mframe::ctrl::SerialPortInputStream : public mframe::io::InputStream,
                                            public mframe::hal::usart::EventReceiver {
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
   * @brief Construct a new Serial Port Input Stream object
   *
   * @param base
   */
  SerialPortInputStream(mframe::hal::usart::USART& base);

  /**
   * @brief Destroy the Serial Port Input Stream object
   *
   */
  virtual ~SerialPortInputStream(void) override;

  /* **************************************************************************************
   * Operator Method
   */

  /* **************************************************************************************
   * Public Method <Static>
   */

  /* **************************************************************************************
   * Public Method <Override> - mframe::hal::usart::EventReceiver
   */
 public:
  virtual bool onUartReceiver(const uint8_t data) override;

  /* **************************************************************************************
   * Public Method
   */

  /* **************************************************************************************
   * Protected Method <Static>
   */

  /* **************************************************************************************
   * Protected Method <Override> - mframe::lang::InputStream
   */
 protected:
  virtual void onReadEvent(void) override;

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

#endif /* MFRAME_DB068A0B_C322_4F94_95C6_77512B353910 */
