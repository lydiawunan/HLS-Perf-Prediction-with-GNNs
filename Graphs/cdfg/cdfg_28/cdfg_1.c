#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 822960075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p[1][3], signed char p_4[2], long p_6, unsigned short p_9,
          unsigned int p_17)
{
  short v_19;
  double v_15;
  unsigned char v_13;
  long v_11;
  unsigned long long v;
  short result;
  v_19 = (short)p_9;
  v_15 = (double)p_6;
  v_11 = p[0][1];
  v = 18446744073709531635ULL;
  result = (short)29512;
  while ((unsigned long long)(9143L - - p_6) % ((unsigned long long)result * - v + 432ULL) <= (unsigned long long)p_9) {
    v_13 = (unsigned char)((unsigned long)(v_11 % -584712193L) % (unsigned long)(
                           (p_17 + 4002208182U) + 697U) + (unsigned long)(
                           (int)(~ p_9) % ((int)v_19 % ((int)result + 68) + 312)));
    v = (unsigned long long)(- ((long)v_13 % 859119560L) % (long)(! (
                                                                  (int)((short)v_15) / (
                                                                  (int)result + 73)) + 795));
    result = (short)p_9;
  }
  while_0_break: ;
  result = (short)((long)1.52276756133e+35f % (36881823L % (long)((int)result + 85) + 450L) - 
                   (p[0][0] * (long)p_4[1]) / 27754L);
  return result;
}


