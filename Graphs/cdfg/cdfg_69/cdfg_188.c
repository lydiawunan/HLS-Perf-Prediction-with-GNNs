#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 390186970
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, long p_4[3][5], unsigned int p_6[2][5],
                 unsigned short p_9, short p_19)
{
  int v_25;
  signed char v_23;
  short v_21;
  unsigned long v_17;
  unsigned short v_15;
  long v_13;
  unsigned long long v_11;
  int v;
  unsigned int result;
  v_23 = (signed char)53;
  v_21 = (short)-22816;
  v_17 = (unsigned long)p_9;
  v_15 = (unsigned short)p_19;
  while ((int)v_15 != p) {
    v_25 = (int)v_21 & -21;
    v_21 = (short)(! ((unsigned long)(- p_6[1][0]) * (unsigned long)p_4[2][2]));
    v_17 = (unsigned long)(v_25 % (- ((int)p_19 % (v_25 + 506)) + 61));
    v_15 = (unsigned short)((int)(~ v_23) * (int)((signed char)-1.95386455305e+38f) - - (
                            p + -36));
  }
  while_0_break: ;
  if (((v_17 + (unsigned long)p) >> (((int)p_19 & 18) & 31)) % (unsigned long)(
      (int)p_19 + 943) <= (unsigned long)p_4[2][3]) {
    v_11 = 18446744073709551591ULL;
    v = (int)((unsigned long long)(! ((int)((unsigned short)3325557452.81) * (int)p_9)) * (
              0ULL - v_11));
    result = (unsigned int)((unsigned long)((4294916042U << ((unsigned int)-1297994630.08 & 31U)) | (unsigned int)p) * (
                            (unsigned long)(! p_4[0][1]) / (unsigned long)(
                            (p_6[1][0] + (unsigned int)v) + 291U)));
  }
  else {
    v_13 = (long)(~ ((unsigned long)v_15 | v_17) * (unsigned long)p_6[0][4]);
    v = (int)(! 37203ULL);
    result = (unsigned int)(((long)(v & 210) + v_13 * -119L) * 26942L);
  }
  return result;
}


