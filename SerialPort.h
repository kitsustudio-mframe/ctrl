/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef CTRL_6C0D897F_A9B6_4BE3_B3C0_796AF2C77F10
#define CTRL_6C0D897F_A9B6_4BE3_B3C0_796AF2C77F10

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "hal/package-info.h"
#include "lang/package-info.h"

//-----------------------------------------------------------------------------------------
#include "./SerialPortInputStream.h"
#include "./SerialPortOutputStream.h"

/* ****************************************************************************************
 * Namespace
 */
namespace ctrl {
  class SerialPort;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
class ctrl::SerialPort : public lang::Object,
                         public lang::Closeable{
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
  hal::usart::USART& mBase;
  ctrl::SerialPortInputStream mSerialPortInputStream;
  ctrl::SerialPortOutputStream mSerialPortOutputStream;

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
   * @brief Construct a new Serial Port object
   *
   * @param base
   */
  SerialPort(hal::usart::USART& base);

  /**
   * @brief Destroy the Serial Port object
   *
   */
  virtual ~SerialPort(void) override;

  /* **************************************************************************************
   * Operator Method
   */

  /* **************************************************************************************
   * Public Method <Static>
   */

  /* **************************************************************************************
   * Public Method <Override> - lang::Closeable
   */
 public:
  virtual void close(void) override;

  virtual bool isOpen(void) override;

  /* **************************************************************************************
   * Public Method
   */
 public:
  /**
   * @brief 開啟通道
   * 
   * @return true 成功開啟通道
   * @return false 通道開啟失敗，可能已經開啟或是硬體錯誤。
   */
  virtual bool open(void);

  /**
   * @brief Set the Baudrate object
   *
   * @param baudrate
   * @return uint32_t
   */
  virtual uint32_t setBaudrate(uint32_t baudrate);

  /**
   * @brief Get the Baudrate object
   *
   * @return uint32_t
   */
  virtual uint32_t getBaudrate(void);

  /**
   * @brief Get the Output Stream object
   *
   * @return lang::OutputStream&
   */
  virtual lang::OutputStream& getOutputStream(void);

  /**
   * @brief Get the Input Stream object
   *
   * @return lang::InputStream&
   */
  virtual lang::InputStream& getInputStream(void);

  /* **************************************************************************************
   * Protected Method <Static>
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

#endif /* CTRL_6C0D897F_A9B6_4BE3_B3C0_796AF2C77F10 */
