#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 56601253
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, int p_4, unsigned long long p_19)
{
  short v_21;
  long long v_17;
  short v_15;
  signed char v_13;
  long v_11;
  char v_9;
  long long v_7;
  unsigned short v;
  unsigned short result;
  v_21 = (short)-14334;
  v_17 = (long long)p;
  v_13 = (signed char)1;
  v_11 = (long)p_4;
  v_9 = (char)p;
  v_7 = (long long)p_19;
  v = (unsigned short)p_4;
  v_15 = (short)(((long long)((int)v % ((int)p + 237)) % (long long)(
                  (int)v_21 + 409)) * - (~ (v_7 % (long long)((int)v_13 + 827))));
  v = (unsigned short)((unsigned long long)(~ v_11 | v_11) / (((unsigned long long)(
                                                               (long)(
                                                               159 * (int)v_13) + 
                                                               (long)v_15 % -8193429L) & ~ (
                                                               (unsigned long long)v_17 / (
                                                               p_19 + 737ULL))) + 512ULL));
  v_7 = (long long)p_4;
  result = (unsigned short)((long long)(26786 % (((int)(~ p) - (int)p / (
                                                               p_4 + 875)) + 570)) * (
                            ((long long)((int)p - (int)v) % ((-384766506LL & v_7) + 706LL)) * (long long)(
                            -99 * (int)v_9)));
  return result;
}


