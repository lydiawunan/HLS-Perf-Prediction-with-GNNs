//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 22295903
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, long p_13, short p_15)
{
  float v_11;
  unsigned short v_8;
  signed char v_6;
  long long v_4;
  unsigned long v;
  int result;
  v_8 = (unsigned short)p_13;
  v_6 = (signed char)p;
  v_11 = (float)(~ (p_13 % (long)((int)(~ p_15) + 599) - (long)2.87516238286e+38f));
  v_4 = (long long)((v_11 + (float)p_13) - (float)p_15);
  v = (unsigned long)(v_4 ^ ! (706885707LL + (long long)v_6) % (long long)(
                            (4294955000UL - ((unsigned long)v_8 + p)) + 714UL));
  result = (int)v;
  return result;
}


