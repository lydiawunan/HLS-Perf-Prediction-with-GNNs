#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 222195128
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p[1][4], unsigned long p_7, int p_9, short p_11,
          signed char p_17)
{
  unsigned long v_25;
  short v_23;
  long long v_21;
  int v_19;
  signed char v_15;
  unsigned int v_13;
  double v_5;
  int v;
  short result;
  v_21 = (long long)p_9;
  v_19 = 56025;
  v_15 = (signed char)65;
  v_13 = 4294917488U;
  v_5 = 534.690683134;
  result = (short)14796;
  while ((int)p[0][3] > (int)v_15) {
    v_23 = v_21 + (long long)(v_19 * -5878);
    v_25 = (unsigned long)(- v_23);
    v_19 = (int)(((unsigned long long)(v_25 % (unsigned long)(p_9 + 146)) + 18446744072830408719ULL) | (unsigned long long)v_5);
    v_15 = (signed char)((unsigned long)(~ v_23) + ! (- p_7));
  }
  while_0_break: ;
  if (v_13 == ((unsigned int)v_15 | - ((unsigned int)p_17 % (v_13 + 64U)))) {
    v_5 = (double)((unsigned long)(! ((int)((short)3.70411893355e+37) * (int)result)) - 
                   (unsigned long)((int)result + p_9) / (p_7 / 1023497528UL + 178UL));
    v = (int)((double)(~ ((int)p[0][1] + (int)p[0][1])) / (- (v_5 - (double)p_7) + 375.));
    result = (short)((float)((unsigned long long)((int)result + (int)p[0][0]) - (
                             (unsigned long long)v + 59496ULL)) / 5159568384.f);
  }
  else result = p_11;
  return result;
}


