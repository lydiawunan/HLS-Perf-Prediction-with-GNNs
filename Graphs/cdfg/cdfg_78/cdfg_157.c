#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 440148158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, int p_7, signed char p_9, unsigned long p_15,
         unsigned char p_17)
{
  unsigned int v_21;
  char v_19;
  unsigned char v_13;
  long v_11;
  float v_5;
  float v;
  char result;
  v_21 = (unsigned int)p_17;
  v_19 = (char)-69;
  v_13 = (unsigned char)p_15;
  v_11 = 60970L;
  v = -1.15848174748e+38f;
  result = (char)p;
  while ((5069ULL | (unsigned long long)((int)result + (int)p_17) * 15803ULL) <= (unsigned long long)(! (
         (25 % ((int)v_19 + 980)) * (int)(! p_17)))) {
    v_5 = v_21 * 56549U;
    v_21 = (unsigned int)(v_5 - (float)((unsigned long)(! p_9) - ((unsigned long)p_17 + p)));
    v = (float)(! (v_11 + (long)p_17) % (long)((int)(~ v_13) + 38));
    v_19 = - (~ (~ v_19));
  }
  while_0_break: ;
  while ((unsigned long)result != ! p) {
    v_5 = (float)(- (~ v_11) << (-586547218 * ((int)v_13 - 9) & 31));
    v = (float)(17253ULL * ((unsigned long long)(- v) | 18446744073709541817ULL * (unsigned long long)p_9));
    result = (char)((unsigned long)((int)v_5 % (p_7 + 898) + (int)((float)p_9 * v)) % (
                    (p | 42622UL) + 1021UL));
  }
  while_0_break_0: ;
  return result;
}


