#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 590415293
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(signed char p, short p_5, short p_9)
{
  signed char v_13;
  long v_11;
  signed char v_7;
  signed char v;
  long long result;
  v_13 = (signed char)-53;
  v_11 = -52954L;
  v = (signed char)p_9;
  v_7 = (signed char)(- ((int)(! p_9) * (132 - (int)v_13)) + (int)(! p_9) / (
                                                             ~ ((int)p_9 & 43855) + 9));
  v_7 = (signed char)(! (~ (v_11 % (long)((int)v + 956))) / (long)(~ (~ (
                                                                   (int)v_7 + (int)p)) + 769));
  result = (long long)p_9;
  result = 0LL % (~ (result / (long long)((int)p + 683)) + 262LL) - (long long)p_5 / (
                                                                    ! (
                                                                    (long long)v_7 * result) + 689LL);
  return result;
}


