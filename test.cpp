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
#include <iostream>

int main(int argc, char* argv[]){
  int nAge;
  std::cout << "나이를 입력하세요." << std::endl;
  std::cin >> nAge;

  std::string strName;
  std::cout << "이름을 입력하세요." << std::endl;
  std::cin >> strName;

  std::cout << "당신의 이름은 " << strName << "이며, 당신은 " << nAge << "살이다." << std::endl;

  return 0;
}
