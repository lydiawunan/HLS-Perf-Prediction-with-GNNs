#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 929735228
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, int p_7, short p_9,
                   long long p_11[2][1][1], unsigned long long p_13)
{
  signed char v_19;
  char v_17;
  unsigned long v_15;
  signed char v_5;
  unsigned long long v;
  unsigned short result;
  v_19 = (signed char)98;
  v_17 = (char)-88;
  v_15 = (unsigned long)p_7;
  v = 18446744072700869036ULL;
  if ((int)((-84.302520752f + (float)(653653785ULL * v)) + 56999.f) >= - (
      (-34 / ((int)v_17 + 846)) / (((int)p_9 - (int)v_19) + 276))) {
    v_5 = (signed char)(! ((unsigned long long)p_11[0][0][0] * p_13) - ! (
                        p_13 | (unsigned long long)v_15));
    v = (unsigned long long)p_9;
    v = (p / (v + 796ULL) & (p & v)) * (unsigned long long)(((int)((signed char)-2.74759172306e+38) + (int)v_5) + 
                                                            (int)7653572608.f * p_7);
  }
  else v = - ((unsigned long long)(-69 & p_7) - ! p_13);
  result = (unsigned short)v;
  return result;
}


