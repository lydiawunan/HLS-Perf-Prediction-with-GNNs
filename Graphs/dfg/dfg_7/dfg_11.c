//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 292484644
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(long p, unsigned char p_5, short p_11, long p_13,
                       short p_15[3][2][5])
{
  unsigned int v_9;
  signed char v_7;
  unsigned long long v;
  unsigned long long result;
  v = 18446744072999586453ULL;
  v_7 = (signed char)(v - 18446744073602435357ULL);
  v = 18446744073709546894ULL;
  v_9 = (unsigned int)(- (((float)(p_13 + 66L) + -7635190784.f) - (float)p_15[2][0][0]));
  result = ((18446744073369634314ULL - v) >> (((unsigned long)(p / 27L) - (
                                               772889231UL | (unsigned long)p_5)) & 63UL)) * (unsigned long long)(
           (unsigned int)v_7 + v_9 % (unsigned int)(((int)p_11 & 57722) + 579));
  return result;
}


