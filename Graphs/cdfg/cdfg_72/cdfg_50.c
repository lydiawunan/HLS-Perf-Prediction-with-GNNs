#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 510371352
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned int p_7, char p_9, unsigned int p_11,
              signed char p_17)
{
  unsigned long v_27;
  float v_25;
  long v_23;
  signed char v_21;
  double v_19;
  char v_15;
  float v_13;
  unsigned char v_5;
  signed char v;
  long long result;
  v_27 = 4294943511UL;
  v_25 = (float)p_17;
  v_23 = 46619L;
  v_21 = (signed char)-87;
  v_19 = (double)p;
  v_15 = (char)54;
  result = (long long)p_9;
  while ((result + (long long)(v_19 - v_19)) / (long long)(-91 / (((int)v_21 ^ (int)v_21) + 165) + 250) <= (long long)p_9) {
    v_21 = v_23 | 25150L;
    v_15 = (char)(- (p_7 - p_11) + ! (744723179U + p_11));
    result = (long long)(~ v_27);
    v_19 = (double)((long long)(! ((int)((char)v_25) + (int)v_15)) * - (
                    p % 91LL));
  }
  while_0_break: ;
  if ((double)result != (double)v_15 - ((double)p_17 + v_19)) {
    v_5 = (unsigned char)(- (! p_11));
    v = (signed char)(~ ((unsigned int)v_5 * p_7 - (unsigned int)p_9));
    result = - (420501079LL ^ (long long)v) - p;
  }
  else {
    v_13 = (float)(~ (! (~ 36782L)));
    result = (long long)v_13;
  }
  return result;
}


