#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1009144919
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, int p_11, signed char p_13[5], signed char p_15)
{
  int v_17;
  unsigned char v_9;
  unsigned short v_6;
  unsigned long v_4;
  signed char v;
  int result;
  v_17 = (int)p;
  v_6 = (unsigned short)p_15;
  result = (int)p_13[0];
  v_4 = (unsigned long)((long long)((484802941U % (unsigned int)((int)(- p_13[1]) + 944)) % (unsigned int)(
                                    0 / (((int)p_15 + 29545) + 500) + 81)) / (
                        (((long long)result / -61144LL) % 231LL) * (long long)(! (
                        v_17 - (int)5055146929.68)) + 436LL));
  v_9 = (unsigned char)(p_11 << ((unsigned int)((p_11 ^ (int)p) | ! p_11) * 747145287U & 31U));
  v = (signed char)((unsigned long)v_9 * (12765UL & ((unsigned long)(
                                                     (int)v_9 * (int)((unsigned char)-1.70173829659e+38)) - (
                                                     v_4 | (unsigned long)p))));
  result = (int)((unsigned long)(- ((int)v * (int)((signed char)4512017378.83))) / (
                 ! v_4 % (unsigned long)(((int)v_6 + (int)v_6) + 184) + 116UL) ^ (unsigned long)p);
  return result;
}


