#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 650554393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, long p_7, unsigned int p_17)
{
  int v_15;
  float v_13;
  unsigned int v_11;
  short v_9;
  double v_4;
  long long v;
  signed char result;
  v_15 = (int)p;
  v_11 = 3791229040U;
  v_4 = -7496743572.49;
  v = 24954LL;
  result = (signed char)77;
  v_13 = (float)result;
  if ((long long)(! (- v_15) & (int)p) > ~ ((long long)(61952UL + (unsigned long)v_13) - (
                                            (long long)p_17 ^ 54818LL))) 
    result = (signed char)(- 882.262616067);
  else {
    v_9 = (short)(((unsigned int)(v_4 * v_4) - (v_11 | (unsigned int)result)) / (
                  ((unsigned int)2.91239865583e+38f - (v_11 - (unsigned int)v_13)) + 771U));
    v_4 = (double)(8495LL % ((21750LL - v / 18305LL) + 23LL));
    result = (signed char)((int)((short)(((double)v - v_4) - (double)(
                                         (long)p * p_7))) % ((int)v_9 + 44));
  }
  return result;
}


