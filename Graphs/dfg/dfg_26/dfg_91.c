#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 843863152
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned long p_7[3][5][4], long p_15,
                  signed char p_19)
{
  unsigned short v_17;
  unsigned short v_13;
  unsigned long long v_11;
  unsigned int v_9;
  long long v_4;
  int v;
  unsigned char result;
  v_17 = (unsigned short)9983;
  v_13 = (unsigned short)11704;
  v_11 = 31029ULL;
  v_4 = 875702439LL;
  v_9 = (unsigned int)(! ((v_4 + (long long)(~ p_19)) * ((-31224LL / (
                                                          v_4 + 140LL)) % 33LL)));
  v = (int)(! (! (v_11 + 25ULL)) / (unsigned long long)(((unsigned long)(
                                                         ((int)v_13 >> (
                                                          p_15 & 15L)) + (int)v_17) - 
                                                         (unsigned long)(! p_19) / (
                                                         p_7[1][1][1] + 153UL)) + 516UL));
  v_4 = (long long)v_9;
  result = (unsigned char)((unsigned long long)(-1LL >> (! (! v) & 63)) - 
                           ((unsigned long long)(v_4 % 3855937878LL) + 749783438ULL) % (unsigned long long)(
                           ((unsigned long)p / (p_7[1][0][3] + 5UL) ^ (unsigned long)(
                            -37 * (int)((char)586.947220755))) + 309UL));
  return result;
}


