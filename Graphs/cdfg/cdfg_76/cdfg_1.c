#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1038529471
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned long p_7, char p_11,
                signed char p_15, float p_19)
{
  long v_25;
  unsigned long long v_23;
  short v_21;
  long v_17;
  unsigned int v_13;
  char v_9;
  unsigned long long v_4;
  unsigned short v;
  signed char result;
  v_25 = (long)p_19;
  v_23 = 18446744073312492361ULL;
  v_21 = (short)23072;
  v_17 = 60589L;
  v_13 = 551389304U;
  v_9 = (char)87;
  result = (signed char)-97;
  while ((unsigned long long)((unsigned long)v_21 % (- (p_7 % 3460969605UL) + 323UL)) >= v_23) {
    v_9 = (double)v_25 * -2.71006749564e+38;
    v_25 = (long)((int)v_21 / ((int)p_11 + 390) + -973117519);
    v_17 = (long)(((p_7 + (unsigned long)v_21) * 4294936912UL) * (unsigned long)(
                  (int)(- p_15) ^ 23336));
    v_21 = (short)-12;
  }
  while_0_break: ;
  if (~ ((unsigned long)((long)p_11 / 64383L) - (unsigned long)((unsigned int)result + v_13)) >= (unsigned long)(
      (long)(! (~ p_15)) + (v_17 % ((long)p_19 + 965L) ^ (long)(p_19 * (float)p)))) {
    v = (unsigned short)v_9;
    v_4 = p + (unsigned long long)(p_7 * (unsigned long)v) * (18446744073709551606ULL - p);
    result = (signed char)(~ (! ((unsigned long long)v + v_4)));
  }
  else result = (signed char)-20.7671737671f;
  return result;
}


