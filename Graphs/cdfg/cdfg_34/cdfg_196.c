#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 643941521
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, signed char p_15, short p_19)
{
  unsigned char v_17;
  long long v_13;
  unsigned long v_11;
  unsigned char v_9;
  double v_7;
  long v_5;
  unsigned long v;
  char result;
  v_17 = (unsigned char)19;
  v_13 = (long long)p;
  v_11 = 42187UL;
  v_9 = (unsigned char)p_15;
  v_7 = 2084317298.73;
  v_5 = (long)p;
  v = 1064991245UL;
  result = (char)p_19;
  if ((long long)p_15 > v_13) {
    v_13 = (long long)((unsigned int)v_9 ^ (p * (unsigned int)p_19 >> 27L));
    v_7 = (double)((v_5 % (long)((int)v_9 + 314) + 194L / (v_5 + 111L)) & (long)(
                   (int)p_15 * (int)p_15));
    v = - ((unsigned long)(! p));
  }
  else {
    v_9 = (unsigned char)(-612298039L % (long)(((int)(! p_15) << ((int)p_19 * (int)v_17 & 7)) + 748));
    result = (char)-20;
    v_11 = v - 54614UL;
  }
  while ((long long)(14001UL % (! v + 611UL) + (unsigned long)((double)p + (
                                                               (double)v_5 - v_7))) != 
         ((long long)(- v_9) * ((long long)v_11 % (v_13 + 630LL))) / (long long)(
         (v - (unsigned long)p_15) + 556UL)) {
    v_5 = (unsigned int)v_17 - 40070U;
    v_7 = (double)(-119 % ((int)((signed char)((double)(15277LL * (long long)p) * - v_7)) + 468));
    v_17 = (unsigned char)((double)(~ (4176092957LL * v_13)) * - ((double)result - v_7));
    v = (unsigned long)p_15;
  }
  while_0_break: ;
  return result;
}


