#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 995413476
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(short p, long p_7[2][3], signed char p_15, int p_17, long p_19)
{
  short v_13;
  char v_11;
  float v_9;
  unsigned short v_4;
  unsigned long v;
  long long result;
  v_13 = (short)29399;
  v_11 = (char)p_7[1][1];
  v_9 = (float)((long long)((1028180685 * p_17) * (int)((double)p_19 * 1.86517765884e+38)) % 1562340780LL - 20279LL);
  v = (unsigned long)((unsigned int)(- (823692810 * (int)(~ p_15))));
  v_4 = (unsigned short)(((int)v_13 - (int)p) * (int)(~ p_15) - 158);
  result = (long long)(((v - (unsigned long)v_4) % (unsigned long)((int)p + 502)) / 4294967282UL + (unsigned long)(
                       (1217L - (p_7[0][1] + (long)v_9)) + (long)((int)((char)-2.78432660897e+38) % (
                                                                  (int)(~ v_11) + 85))));
  return result;
}


