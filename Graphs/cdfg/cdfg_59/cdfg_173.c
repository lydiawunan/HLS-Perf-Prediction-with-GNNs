#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 758668126
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p[3][5][3], unsigned short p_5,
                       double p_7, long p_15[2][1][4], int p_17[1])
{
  signed char v_25;
  long long v_23;
  short v_21;
  long v_19;
  unsigned long v_13;
  unsigned long v_11;
  signed char v_9;
  signed char v;
  unsigned long long result;
  v_25 = (signed char)79;
  v_23 = (long long)p_7;
  v_21 = (short)-14504;
  v_19 = p_15[1][0][2];
  v_9 = (signed char)p_15[1][0][3];
  v = (signed char)66;
  result = (unsigned long long)p_5;
  if ((long)(- (((int)v_21 >> ((int)v_25 & 15)) - ! p_17[0])) >= p_15[1][0][1]) {
    v = (signed char)(! (v_19 * (long)v_21 + p_15[0][0][3]));
    v_13 = (unsigned long)p_15[0][0][0];
    v_11 = v_13;
  }
  else {
    v_13 = (unsigned long)(! (~ (- v_23)));
    result = (unsigned long long)((unsigned long)((long)p_17[0] % (v_19 + 478L)) % (
                                  ((unsigned long)v & 276022856UL) + 395UL) ^ 13247UL);
    v_11 = (unsigned long)(- ((double)p[0][2][2] / -3.22778559614e+38));
  }
  while ((unsigned long long)((int)v % (- (25109 / ((int)p[2][2][0] + 388)) + 527)) > 
         ! (26942263ULL * (unsigned long long)p_5) / (- ((unsigned long long)p_7 + 18446744072756304332ULL) + 649ULL)) {
    v = v_13 / ((v_11 | 4294911832UL) + 720UL);
    v_13 = (unsigned long)((((unsigned long long)p_17[0] - 18446744073709530688ULL) - 18446744073709519402ULL) % (unsigned long long)(
                           (int)v + 663));
    result = 6ULL;
    v = (signed char)(! (p_15[0][0][2] - (long)((int)v_9 % ((int)p_5 + 626))));
  }
  while_0_break: ;
  return result;
}


