#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 378551641
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, short p_4, unsigned long long p_6,
                  double p_8[2][3], long p_10)
{
  signed char v_17;
  float v_15;
  signed char v_13;
  double v;
  unsigned long result;
  v_13 = (signed char)94;
  v = (double)p;
  result = (unsigned long)p_8[0][2];
  while (- ((double)p_4 * v) / (p_8[0][2] + 51.) > (double)(38UL - (4294915190UL >> (
                                                                    (int)p_4 & 31))) - - (- p_8[1][2])) {
    v_17 = (int)v_13 / ((int)((signed char)-5520237568.f) + 362);
    v_15 = (float)(- p_6 | (unsigned long long)(~ ((long)v_17 * p_10)));
    v_13 = (signed char)(~ p_6 - (unsigned long long)(- v_15));
    v = (double)(18446744073709503858ULL + (unsigned long long)((int)((signed char)-9.7406936693e+37) * (int)v_13) * 18446744073655894140ULL);
  }
  while_0_break: ;
  if ((double)((unsigned long long)((double)result + (-23860. + p_8[0][1])) + p_6) <= p_8[1][0]) 
    result = (unsigned long)p;
  else result = (unsigned long)(- ((int)4314523648.f * ((int)p_4 << (
                                                        p_6 & 15ULL))));
  return result;
}


