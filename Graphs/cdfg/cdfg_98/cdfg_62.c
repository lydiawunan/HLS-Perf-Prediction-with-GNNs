#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 270249695
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, double p_9, char p_11, float p_13)
{
  long long v_15;
  char v_6;
  unsigned long v_4;
  unsigned int v;
  unsigned char result;
  v_15 = -1008576449LL;
  v_6 = (char)-73;
  v = 20428U;
  result = (unsigned char)(! v_15);
  while ((4294967266U & v) == 36U) {
    v_4 = (unsigned int)v_6 + 4294936555U;
    result = (unsigned char)((float)(-544482163LL * (long long)(3796L - (long)p)) + - p_13);
    v = (unsigned int)(p_9 - (double)(! ((unsigned long)p_11 - v_4)));
    v = - ((unsigned int)result + v % (unsigned int)(p + 655));
  }
  while_0_break: ;
  return result;
}


