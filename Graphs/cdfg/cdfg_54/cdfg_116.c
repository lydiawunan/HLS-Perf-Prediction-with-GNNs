#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 844672749
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p[4][4][2], unsigned int p_5, long p_9,
                unsigned short p_11, long long p_15)
{
  unsigned char v_23;
  double v_21;
  unsigned long v_19;
  char v_17;
  char v_13;
  unsigned char v_7;
  long v;
  signed char result;
  v_23 = (unsigned char)119;
  v_21 = (double)p_5;
  v_19 = (unsigned long)p_5;
  v_17 = (char)115;
  v_13 = (char)-36;
  v_7 = (unsigned char)63;
  v = 36L;
  result = (signed char)p[0][1][1];
  while ((long long)(177842606U & (unsigned int)p_11) / (((long long)v_7 / -2266LL) / (
                                                         (long long)-8.23031989167e+37f + 903LL) + 77LL) != (long long)(! (
         v_19 - ((unsigned long)v_21 + v_19)))) {
    v_13 = (int)v_23 % 63;
    v_17 = (char)0;
    v_19 = (unsigned long)(((long long)v_13 - p_15) - 213LL);
    v_7 = (unsigned char)(((long long)v_17 + p_15) / -63809LL | (long long)v_13);
  }
  while_0_break: ;
  while ((long long)v * (p[3][3][0] % (p[1][2][0] + 921LL) - -13119LL) < (long long)p_5) {
    result = (signed char)((4294923587LL % (p_15 + 667LL)) % ((p[3][3][1] + (long long)v_17) + 927LL) + 
                           (long long)(p_5 % (unsigned int)((int)v_17 + 980)) * (
                           p_15 & 7329LL));
    result = (signed char)((long long)result * ((long long)(-29194 + (int)p_11) + (
                                                (long long)v_13 - p_15)));
    v = (long)(! ((long long)(p_9 / (long)((int)v_7 + 611)) + -15899LL));
  }
  while_0_break_0: ;
  return result;
}


