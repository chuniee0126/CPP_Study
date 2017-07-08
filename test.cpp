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

using namespace std;

namespace Test {
    int g_nData = 100;

    namespace DEV{
        int g_nData = 200;
        namespace WIN {
            int g_nData = 300;
        } /*WIN */
    } /*DEV*/
} /*Test*/

int main(int argc, char const *argv[]) {

    cout << Test::g_nData << endl;
    cout << Test::DEV::g_nData << endl;
    cout << Test::DEV::WIN::g_nData << endl;

    return 0;
}
