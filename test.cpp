/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  2017년 07월 04일 21시 35분 18초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int main(int argc, char* argv[]){
  std::string strData = "Test string";
  std::cout << "Sample string" << std::endl;
  std::cout << strData << std::endl;

  strData = "New string";
  std::cout << strData << std::endl;

  return 0;
}
