#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 642094870
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned char p, unsigned char p_13, unsigned short p_15,
              char p_17)
{
  char v_11;
  signed char v_9;
  unsigned char v_6;
  unsigned long v_4;
  int v;
  long long result;
  v_9 = (signed char)-9;
  v = -654161687;
  v_6 = (unsigned char)((int)((signed char)(36.f - 2.33357559972e+38f * (float)(
                                                   (int)p_15 % ((int)p_17 + 890)))) ^ 110);
  v_11 = (char)v_9;
  v_4 = (unsigned long)(! ((int)((float)p / 4830013952.f) * ((int)v_9 % (
                                                             (int)v_11 + 762))) % (
                        (int)p_13 + 919));
  result = ! (15378LL - (long long)(- v)) % (long long)(~ (4294913330UL ^ v_4) % (unsigned long)(
                                                        ~ ((int)v_6 / -81) + 370) + 322UL);
  return result;
}


