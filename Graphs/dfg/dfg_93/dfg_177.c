#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 360972137
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned int p_5, short p_7, signed char p_9,
                  char p_13)
{
  unsigned short v_17;
  char v_15;
  unsigned short v_11;
  unsigned short v;
  unsigned char result;
  v_17 = (unsigned short)p_7;
  v_15 = (char)(-4373U);
  v = (unsigned short)(- ((unsigned long long)((unsigned long)(11083 | (int)v_17) / (
                                               (unsigned long)v_17 * 495300363UL + 814UL)) / 730978737ULL));
  v_11 = (unsigned short)((int)(~ p_13) * (25355 & ((int)(- v_15) ^ (
                                                    25272 << 5))));
  result = (unsigned char)(! (((unsigned long long)p + 58573ULL) + (unsigned long long)(
                              (unsigned int)v + p_5)) + (unsigned long long)(
                           (int)p_7 * - ((int)p_9 * (int)v_11)));
  return result;
}


