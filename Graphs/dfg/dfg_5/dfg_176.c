//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 402978664
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(char p, unsigned long long p_9, short p_11,
                  signed char p_13, short p_15)
{
  float v_17;
  unsigned long long v_7;
  unsigned long long v_4;
  signed char v;
  unsigned char result;
  v_7 = 22394ULL;
  v_17 = (float)(short)10298;
  v = (signed char)((int)((short)(- (0.f - -17366.f / (v_17 + 866.f)))) - 16029);
  v_4 = (unsigned long long)(((long long)v | -36789LL) * (long long)(
                             (unsigned int)p / 4252849461U)) / (v_7 + 269ULL) - ! (
        p_9 * (unsigned long long)p_11 & (unsigned long long)((int)p_13 % (
                                                              (int)p_15 + 331)));
  result = (unsigned char)((unsigned long long)((5648 % ((int)v + 155)) % 24807) - v_4);
  return result;
}


