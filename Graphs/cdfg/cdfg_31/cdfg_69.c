#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 392391970
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long long p, long long p_9, int p_15, double p_17[4][5],
                short p_19)
{
  unsigned long v_29;
  unsigned int v_27;
  char v_25;
  unsigned int v_23;
  unsigned int v_21;
  long long v_13;
  int v_11;
  double v_7;
  signed char v_4;
  char v;
  signed char result;
  v_29 = 3934009209UL;
  v_27 = 4294934070U;
  v_25 = (char)21;
  v_23 = (unsigned int)p_15;
  v_13 = p;
  v_7 = (double)p_19;
  result = (signed char)p_19;
  if ((double)v_23 - p_17[0][4] != (double)(! ((int)(! p_19) + (int)result))) {
    v = (char)((- p_9 % (long long)((v_29 << ((int)p_19 & 31)) + 275UL)) * (
               52LL - (long long)result / 1008302673LL));
    v_11 = (int)(! v_13);
    v_27 = (unsigned int)((double)(! p_15 + (int)v) / (((double)(~ v_11) + v_7) + 956.));
  }
  else {
    v = (char)((long long)((long)(- v_7) + 278653452L) % (p_9 + 563LL));
    v_11 = (int)(- ((p_17[2][0] - (double)p_15) + 604955920.));
    v_23 = (unsigned int)v;
  }
  if ((long long)p_15 == p_9 * (long long)v_25 - -78625152LL * (long long)v_27) {
    v_7 = (double)v_11;
    v_4 = (signed char)(~ (p * (long long)v_7) / (p_9 % 242LL + 665LL));
    result = (signed char)(! (((int)v | (int)v) % ((int)v_4 + 837)));
  }
  else {
    v_21 = (unsigned int)p_17[1][0];
    v_13 = (long long)((unsigned long)((long)(59. * p_17[0][2]) | 300414497L) * (unsigned long)(
                       ((unsigned int)p_19 % (v_21 + 99U)) % (v_23 / (
                                                              (unsigned int)-3927084032.f + 270U) + 1012U)));
    result = (signed char)-115;
  }
  return result;
}


