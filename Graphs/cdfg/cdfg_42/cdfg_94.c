#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 280929002
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(double p, signed char p_5[1], unsigned short p_7[1],
                       char p_11, short p_13)
{
  unsigned short v_31;
  unsigned long v_29;
  unsigned int v_27;
  char v_25;
  char v_23;
  unsigned char v_21;
  signed char v_19;
  unsigned long v_17;
  unsigned long long v_15;
  unsigned long long v_9;
  unsigned char v;
  unsigned long long result;
  v_31 = p_7[0];
  v_29 = (unsigned long)p_5[0];
  v_23 = (char)p;
  v_17 = (unsigned long)p_13;
  v_9 = 47846ULL;
  result = (unsigned long long)p_11;
  if (! (((int)v_31 - (int)p_13) ^ (int)(! p_13)) < (int)p) {
    v_21 = (unsigned char)(- (-48 & (int)(! v_23)));
    v_17 = (unsigned long)v_9;
    v_19 = (signed char)((unsigned long long)v_21 * ~ result + (unsigned long long)-6056173052.3);
  }
  else {
    v_25 = (char)v_29;
    v_27 = (unsigned int)(-7160 + (int)((short)p) % ((int)(~ p_13) + 753));
    v_19 = (signed char)((unsigned long)((long)(~ v_25) * 41509L) * (unsigned long)(
                         (unsigned int)(! p_11) % ((v_27 + (unsigned int)v_25) + 405U)));
  }
  if (! ((39 - (int)v_19) - (int)(- p)) == (int)(638.791931152 + (6155183689.92 - (double)(
                                                                  -13338 % (
                                                                  (int)p_7[0] + 171))))) {
    v = (unsigned char)(((int)p_5[0] + -81) % (((int)(~ p_7[0]) & -79) + 76));
    result = (unsigned long long)((int)v * (((int)((signed char)p) * (int)p_5[0]) / 86));
  }
  else {
    v_15 = (unsigned long long)v_17;
    v_9 = ! ((unsigned long long)((long)p_11 % -383584155L) + (unsigned long long)p_13 * v_15);
    result = v_9 - 18446744073148947623ULL;
  }
  return result;
}


