/**
 * Copyright (c) 2020 ZxyKira
 * All rights reserved.
 *
 * SPDX-License-Identifier: MIT
 */
#ifndef MFRAME_6C0D897F_A9B6_4BE3_B3C0_796AF2C77F10
#define MFRAME_6C0D897F_A9B6_4BE3_B3C0_796AF2C77F10

/* ****************************************************************************************
 * Include
 */

//-----------------------------------------------------------------------------------------
#include "./../ctrl/SerialPortInputStream.h"
#include "./../ctrl/SerialPortOutputStream.h"
#include "./../io/package-info.h"

/* ****************************************************************************************
 * Namespace
 */
namespace mframe::ctrl {
  class SerialPort;
}

/* ****************************************************************************************
 * Class/Interface/Struct/Enum
 */
class mframe::ctrl::SerialPort : public mframe::lang::Object,
                                 public mframe::io::Closeable {
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
  mframe::ctrl::SerialPortInputStream mSerialPortInputStream;
  mframe::ctrl::SerialPortOutputStream mSerialPortOutputStream;

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
  SerialPort(mframe::hal::usart::USART& base);

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
   * Public Method <Override> - mframe::lang::Closeable
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
   * @return mframe::lang::OutputStream&
   */
  virtual mframe::io::OutputStream& getOutputStream(void);

  /**
   * @brief Get the Input Stream object
   *
   * @return mframe::lang::InputStream&
   */
  virtual mframe::io::InputStream& getInputStream(void);

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

#endif /* MFRAME_6C0D897F_A9B6_4BE3_B3C0_796AF2C77F10 */
