#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 109939358
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, int p_7, long p_11, unsigned long p_15, unsigned long p_19)
{
  int v_27;
  short v_25;
  unsigned int v_23;
  unsigned char v_21;
  unsigned long long v_17;
  int v_13;
  unsigned long v_9;
  signed char v_5;
  unsigned int v;
  float result;
  v_27 = p;
  v_25 = (short)p_19;
  v_23 = 4294923740U;
  v_21 = (unsigned char)p_15;
  v_17 = (unsigned long long)p_7;
  v_13 = 430447367;
  v_5 = (signed char)p_11;
  if (((p_15 ^ (unsigned long)v_25) - 4294947505UL) + ((30513UL + p_15) - (unsigned long)(
                                                       v_27 - v_27)) <= (unsigned long)(- p)) {
    v_13 = (int)(- 2.60228721478e+37);
    v_9 = 4294950698UL;
    v_9 = (unsigned long)((unsigned long long)(- p_15 - v_9) / (~ v_17 + 334ULL));
  }
  else {
    v_9 = (unsigned long)((unsigned int)(! v_21) / (~ (15U * v_23) + 946U));
    v_9 = p_19 + v_9;
    v_5 = (signed char)(- (- (- -288510196LL)));
  }
  if (3891464879UL >= (unsigned long)(- (-20662 / (v_13 + 315))) * p_15) {
    result = (float)((unsigned long)(~ ((int)v_5 / (p_7 + 1012))) + - (
                     (unsigned long)p_7 * v_9));
    v = (unsigned int)(- (~ (p / -23938)));
    result = (float)(- (((unsigned int)result * v) * (v + 678774218U)));
  }
  else {
    result = (float)3636369593UL;
    result = (float)(p_11 - (long)result);
  }
  return result;
}


