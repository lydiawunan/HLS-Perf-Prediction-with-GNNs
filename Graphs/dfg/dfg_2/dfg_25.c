//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1036811983
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned long long p_11[3][1])
{
  unsigned int v_13;
  signed char v_9;
  unsigned char v_7;
  unsigned long v_4;
  int v;
  short result;
  v_13 = (unsigned int)p_11[1][0];
  v_7 = p;
  v = (int)p_11[1][0];
  v_4 = (unsigned long)v_13;
  v_9 = (signed char)((unsigned long long)((((int)p - 21580) * ((int)p / (
                                                                (int)p + 478))) * (int)(~ p)) & (
                      (unsigned long long)(((unsigned long)v_7 - 47183UL) % (unsigned long)(
                                           ((int)p + 87) + 1)) + (0ULL - 
                                                                  p_11[2][0] / (unsigned long long)(
                                                                  v_4 + 43UL))));
  v_7 = p;
  result = (short)(((unsigned long long)((unsigned long)(v + -56) * - v_4) % (
                    (unsigned long long)((int)p % ((int)v_7 + 940)) * 18446744073709520154ULL + 81ULL)) * (unsigned long long)v_9);
  return result;
}


