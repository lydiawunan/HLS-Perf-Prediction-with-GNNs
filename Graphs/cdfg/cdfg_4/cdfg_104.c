#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 984818559
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, unsigned short p_4[5][5],
                unsigned long p_6, unsigned long p_13,
                unsigned int p_15[2][4])
{
  unsigned long v_27;
  int v_25;
  double v_23;
  int v_21;
  unsigned short v_19;
  unsigned long long v_17;
  unsigned long long v_11;
  unsigned long v_9;
  signed char v;
  signed char result;
  v_27 = p_13;
  v_25 = (int)p_6;
  v_23 = (double)p;
  v_21 = -27529;
  v_19 = (unsigned short)23348;
  v_17 = 18446744073631376982ULL;
  v_11 = 23690ULL;
  v = (signed char)-49;
  if ((unsigned long long)(- v_25) == ~ (18446744073709497087ULL & v_17 * 51493ULL)) {
    result = (signed char)((long long)((-7150 - (int)v_19) / (- v_21 + 118)) - (
                           (long long)v_23 ^ 10339918LL));
    result = (signed char)(((int)result + 80) - (int)(- (- result)));
    v_11 = ((unsigned long long)((unsigned int)p / (p_15[0][2] + 931U)) % (
            v_11 * (unsigned long long)p_13 + 568ULL)) / (unsigned long long)(
           ((int)result * (int)p) * 26164 + 220);
  }
  else {
    v_25 = (int)(~ 18446744073709535176ULL);
    result = (signed char)(((unsigned long long)(- v_23) >> (((unsigned long long)v_27 | v_17) & 63ULL)) * (unsigned long long)(- (
                           (unsigned long)p_4[0][4] + 608107694UL)));
    v_11 = (unsigned long long)((unsigned long)(~ (! p_15[0][0])) * (unsigned long)(
                                (long)v_25 % 29047L));
  }
  while ((unsigned long)((int)result + ((int)p + (int)p_4[1][3])) * p_6 == (unsigned long)(
         ! ((int)result / -70) / 189)) {
    v_9 = v_11 + 18446744073709551553ULL;
    v_9 = ~ (- v_9) + (unsigned long)p_15[0][2];
    v_17 = 227ULL;
    result = (signed char)((unsigned long long)(((unsigned long)v + p_13) * (unsigned long)p_15[0][2]) & ! v_17);
  }
  while_0_break: ;
  return result;
}


