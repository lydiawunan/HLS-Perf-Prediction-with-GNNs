#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 658109349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, signed char p_7, char p_11)
{
  unsigned short v_9;
  unsigned short v_5;
  char v;
  signed char result;
  v = (char)83;
  result = (signed char)5;
  v_5 = (unsigned short)-72.8730621338f;
  while ((unsigned int)(~ (((int)result * (int)((signed char)8685023232.f)) * (
                           (int)p << ((int)v & 15)))) >= (unsigned int)(
                                                         ((int)p - (int)((unsigned short)-317.907287598f)) ^ (int)p) * 3406249593U) {
    v_9 = (int)v_5 + 18;
    v_5 = (unsigned short)(! p_11);
    result = (signed char)(! ((long long)v_9 + 17527LL) * (long long)(! p_7));
    v = (char)((int)p % ((int)(- p) * (int)(- p_7) + 443));
  }
  while_0_break: ;
  return result;
}


