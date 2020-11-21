#include "twostrings.h"
#include <iostream>
#include <string>

using namespace std;

void TwoStrings::setString1(string a) {
  m_string1 = a;
}
void TwoStrings::setString2(string b) {
  m_string2 = b;
}
string TwoStrings::getString1() {
  return m_string1;
}
string TwoStrings::getString2() {
  return m_string2;
}
string TwoStrings::getConnectedString() {
  return m_string1 + m_string2;
}
int TwoStrings::getConnectedLength() {
  return m_string1.length() + m_string2.length();
}
