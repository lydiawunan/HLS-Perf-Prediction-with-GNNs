#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1025467450
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p[5][5][2], unsigned long p_7, unsigned long long p_9,
          unsigned long p_21, unsigned char p_23[3])
{
  long v_27;
  signed char v_25;
  long long v_19;
  unsigned short v_17;
  double v_15;
  short v_13;
  unsigned int v_11;
  long v_5;
  unsigned short v;
  float result;
  v_27 = 35274L;
  v_25 = (signed char)111;
  v_19 = (long long)p[4][2][1];
  v_15 = (double)p_21;
  v_13 = (short)p[0][0][0];
  v_11 = (unsigned int)p[0][0][0];
  result = 269.386016846f;
  if (! v_11 < (unsigned int)v_13) {
    v_5 = (long)v_25;
    v_25 = (signed char)(((unsigned long long)p_7 - p_9) % (unsigned long long)(
                         p_21 * p_7 + 519UL) + (unsigned long long)(- v_19 / (
                                                                    (long long)p[1][2][0] % (
                                                                    v_19 + 51LL) + 859LL)));
    v_13 = (short)result;
  }
  else {
    v_15 = (double)p[3][3][0];
    v_5 = (long)(! ((353972587UL + (unsigned long)v_27) ^ (unsigned long)(
                    (int)p_23[1] & (int)((unsigned char)488.82635441))));
    v_13 = (short)p_21;
  }
  if ((unsigned long long)((long long)((unsigned long)((int)v_25 * -36) + p_7) / (
                           (long long)((long)v_25 - v_5) * 17LL + 420LL)) < 
      p_9 * (unsigned long long)((p_7 * (unsigned long)p_23[1]) * (unsigned long)-2300071640.65)) {
    v_11 = (unsigned int)((int)v_13 + (int)((short)v_15) / ((int)v_13 + 270));
    v = (unsigned short)(- ((unsigned long long)p_7 / (p_9 + 143ULL)) % (unsigned long long)(
                         - (~ v_11) + 225U));
    result = (float)(((int)(- p[4][3][0]) << ((long)v / (v_5 + 775L) & 7L)) + 34);
  }
  else {
    v_17 = (unsigned short)(~ -204314408LL);
    v_19 = (long long)(- p_21);
    result = (float)((18446744073709551609ULL + (38216ULL & (unsigned long long)v_17)) / (unsigned long long)(
                     (v_19 << 11L) + 752LL));
  }
  return result;
}


