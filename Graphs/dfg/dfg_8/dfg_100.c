//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329086965
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, char p_11)
{
  short v_13;
  long long v_9;
  unsigned int v_7;
  short v_5;
  int v;
  double result;
  v_9 = 23155LL;
  v_7 = 9716U;
  v_13 = (short)232;
  v = (int)((p * (unsigned long long)(((long)p_11 - 18287L) % (long)(
                                      (int)v_13 + 998))) % ((1281524506ULL - (unsigned long long)(
                                                             3851497345U << (
                                                             (unsigned int)p_11 % (
                                                             v_7 + 378U) & 31U))) + 870ULL));
  v_5 = (short)(- ((unsigned long long)(~ v_9) - (p / 18446744073709499734ULL - 18446744073709551517ULL)));
  result = (double)(- (((unsigned long)v - 290114504UL) >> (p % (unsigned long long)(
                                                            v + 126) & 31ULL)) % (unsigned long)(
                    ! ((unsigned int)(- v_5) % (v_7 / (unsigned int)(v + 585) + 947U)) + 152U));
  return result;
}


