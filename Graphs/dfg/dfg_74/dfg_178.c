#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1000619247
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, short p_7, signed char p_9[5][1][5])
{
  short v_15;
  unsigned int v_13;
  unsigned short v_11;
  unsigned long long v_5;
  unsigned short v;
  unsigned char result;
  v_15 = (short)23929;
  v_13 = 15799U;
  v_11 = (unsigned short)35710;
  v = (unsigned short)p_9[2][0][2];
  v_11 = (unsigned short)((float)v_11 * 1306079104.f);
  v_5 = (unsigned long long)((long long)v_15 / -719550689LL);
  result = (unsigned char)((unsigned int)(! (-13 << ((int)(- v) & 7))) % (
                           (((unsigned int)(! v_11) & (unsigned int)p_7 / (
                                                      v_13 + 335U)) >> 4L) + 213U));
  result = (unsigned char)(((unsigned long long)((unsigned long)v / (
                                                 p + 927UL) + (unsigned long)v) & - (
                            (unsigned long long)result | v_5)) % (unsigned long long)(
                           ((int)p_7 ^ (int)(! p_9[1][0][3])) + 173));
  return result;
}


