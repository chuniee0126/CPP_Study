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
  int a = 10;
  int b(a);
  // this auto structure is defined in C++11 so if you want to use this code with g++, you need involve this comment "-std=c++11"
  auto c(b);

  std::cout << a + b + c << std::endl;

  return 0;
}
