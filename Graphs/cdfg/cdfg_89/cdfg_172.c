#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925124361
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long long p_4, short p_7,
                 signed char p_13, unsigned int p_15[1][5][5])
{
  char v_17;
  double v_11;
  unsigned char v_9;
  unsigned long long v;
  unsigned int result;
  v_17 = (char)p_15[0][4][1];
  v_9 = (unsigned char)p_15[0][4][3];
  v = (unsigned long long)p_7;
  result = (unsigned int)p;
  if ((((unsigned long long)p_7 % (p_4 + 32ULL) + v / 18446744073069081858ULL) | (unsigned long long)(
       (unsigned int)((int)p_13 ^ (int)v_17) * 4294964601U)) != ~ (! (
      (unsigned long long)p_13 + v))) {
    v_11 = (double)p_4;
    v = p_4 * (unsigned long long)(913235840UL % (unsigned long)(result + 500U) | (unsigned long)p_15[0][3][1]);
    v_9 = (unsigned char)v_11;
  }
  else {
    result = (unsigned int)(~ (29711 | (int)(~ p_13)));
    v = (unsigned long long)(470529554LL | ((long long)(p_15[0][2][4] >> 13L) | -1030113428LL));
    v_11 = (double)(~ ((long)(-1020442236 * (int)-1.19707468992e+38) % (
                       (392850005L + (long)v_17) + 964L)));
  }
  while ((unsigned long long)(~ ((unsigned int)p + ! result)) < ((unsigned long long)(
                                                                 1 | 
                                                                 (int)p / (
                                                                 (int)p + 197)) ^ p_4)) {
    result = (unsigned int)((int)p_13 / 142);
    v = (unsigned long long)(11262 * (int)p_7 - (int)((double)v_9 * v_11)) / (
        ((unsigned long long)((unsigned int)p_13 - result) + v) + 298ULL);
    result = (unsigned int)p_4;
  }
  while_0_break: ;
  return result;
}


