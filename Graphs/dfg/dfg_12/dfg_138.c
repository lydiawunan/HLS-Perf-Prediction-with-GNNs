#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 525742799
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, long p_4, long long p_7,
                   unsigned char p_9[1])
{
  unsigned char v_19;
  unsigned short v_17;
  signed char v_15;
  unsigned long long v_13;
  unsigned long long v_11;
  unsigned long long v;
  unsigned short result;
  v_19 = (unsigned char)133;
  v_17 = (unsigned short)37735;
  v_15 = (signed char)-64;
  v_13 = 5730ULL;
  v_11 = (unsigned long long)p_9[0];
  v = 18446744073059964984ULL;
  result = (unsigned short)p;
  result = (unsigned short)(((1280816448ULL + (v - (unsigned long long)p_9[0])) - (
                             v_11 % (v_13 + 529ULL) - 3980964889ULL)) * (unsigned long long)(
                            ((long long)v_15 | p_7) % (long long)((int)result + 340) & (long long)(- (
                            (int)v_17 + (int)v_19))));
  v = (unsigned long long)(~ (~ ((long)result ^ -569188791L)) + -1L);
  result = (unsigned short)((int)((short)(-3.26793004218e+38 * (double)(
                                          0ULL / ((v - (unsigned long long)p_7) + 744ULL)))) + -14939);
  result = (unsigned short)((unsigned long)(~ (p % (unsigned int)((int)result + 678)) << (
                                            p_4 & 31L)) % (unsigned long)(
                            (- (p_4 * (long)result) - p_4) + 825L));
  return result;
}


