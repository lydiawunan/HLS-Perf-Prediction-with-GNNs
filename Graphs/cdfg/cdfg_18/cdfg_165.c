#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 212856172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p, double p_11[3], unsigned long p_15)
{
  unsigned long long v_19;
  unsigned short v_17;
  unsigned char v_13;
  int v_9;
  unsigned char v_7;
  unsigned int v_5;
  unsigned char v;
  signed char result;
  v_19 = 18446744072641710523ULL;
  v_17 = (unsigned short)34549;
  v_13 = (unsigned char)p_11[2];
  v_9 = (int)p_11[2];
  v_7 = (unsigned char)p_11[0];
  v_5 = (unsigned int)p;
  v = (unsigned char)131;
  result = (signed char)50;
  while ((int)(- (- p_11[0])) + ~ (~ v_9) <= ! (- ((int)result / ((int)result + 907)))) {
    v_5 = (int)v_13 << 5;
    v_13 = (unsigned char)(! ((unsigned long long)v_17 * ((unsigned long long)p_15 + v_19)));
    result = (signed char)p_15;
    v_9 = (int)(- (- ((double)p / (p_11[2] + 26.))));
  }
  while_0_break: ;
  while ((long long)-2.88798695045e+38f % -114525686LL >= (long long)(
         (unsigned int)((float)((unsigned int)v + 4294909806U) - - p) * v_5)) {
    v = (unsigned char)30;
    v_9 = (int)((double)(- v_9) - p_11[1]);
    v_5 = ((unsigned int)(p / ((float)v_7 + 964.f)) / (v_5 + 104U)) / (unsigned int)(
          ((v_9 << ((int)result & 31)) + (int)(! v)) + 397);
  }
  while_0_break_0: ;
  return result;
}


