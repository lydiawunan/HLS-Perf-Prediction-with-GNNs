#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 658445141
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(char p, unsigned long long p_4, char p_7,
                unsigned short p_11, signed char p_17)
{
  float v_27;
  unsigned short v_25;
  unsigned short v_23;
  unsigned long v_21;
  unsigned short v_19;
  unsigned char v_15;
  int v_13;
  float v_9;
  long v;
  signed char result;
  v_27 = (float)p_17;
  v_25 = (unsigned short)p_7;
  v_23 = (unsigned short)57786;
  v_21 = (unsigned long)p_7;
  v_19 = (unsigned short)p;
  v_15 = (unsigned char)38;
  v_13 = (int)p_11;
  while (((unsigned long long)(- p) * 18446744073709509701ULL) * (unsigned long long)(
         (54969 - (int)v_23) % 50582) > (unsigned long long)p_7) {
    v_13 = (int)v_25 + 166;
    v_25 = (unsigned short)(- ((unsigned long long)1.98260127945e+38f | p_4) - (unsigned long long)v_27);
    v_21 = (unsigned long)v_15;
    v_23 = (unsigned short)(- -58064L);
  }
  while_0_break: ;
  if ((unsigned long)(~ v_19) + v_21 != (unsigned long)v_13) {
    v = (long)(- ((int)p_7 >> ((p_4 + 157ULL) & 7ULL)));
    result = (signed char)(18446744073709551535ULL % ((unsigned long long)p * (
                                                      p_4 * (unsigned long long)v) + 408ULL));
  }
  else {
    v_9 = (float)(((int)((unsigned char)((double)p_11 * 1982619245.17)) % (
                   (int)v_15 + 567)) / ((((int)p_11 + (int)p_17) + 15420) + 179));
    v = 0L;
    result = (signed char)((float)(~ ((unsigned long)v | 598623229UL)) / (
                           v_9 / ((float)((int)p_7 / 49911) + 352.f) + 841.f));
  }
  return result;
}


