#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 920559625
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, unsigned int p_5, unsigned int p_13[1][5], double p_15)
{
  int v_21;
  float v_19;
  char v_17;
  short v_11;
  unsigned short v_9;
  short v_7;
  signed char v;
  char result;
  v_21 = (int)p_15;
  v_19 = (float)p_5;
  v_17 = (char)-113;
  v_11 = (short)p_15;
  v_9 = (unsigned short)26050;
  v_7 = (short)p;
  v = (signed char)47;
  result = (char)73;
  while ((325448305LL / (p / (long long)((int)v_9 + 850) + 1017LL)) * 101LL >= 
         (long long)(((unsigned long)p_5 ^ 187522448UL) & (unsigned long)(
                     (double)v_17 * -815.025440069)) % (~ (p * (long long)v) + 447LL)) {
    result = v_21 - (int)(v_19 + -494.484069824f);
    v_21 = -17670;
    v_7 = (short)1.44314698886e+38f;
    v = (signed char)(- (! ((int)v_11 / ((int)v_9 + 1001))));
  }
  while_0_break: ;
  while (! ((-25730LL | (long long)v) / (p * 5308770304LL + 666LL)) < (long long)(
         - ((double)p_5 + -4034310438.23) - (double)((unsigned int)(! v_7) | ! p_5))) {
    v_9 = (int)v_11 ^ ((int)v_9 - 899);
    v_11 = (short)p_15;
    v_7 = (short)(- (! (17999U % (p_13[0][1] + 813U))));
    v = (signed char)(p_5 % 7614U);
  }
  while_0_break_0: ;
  return result;
}


