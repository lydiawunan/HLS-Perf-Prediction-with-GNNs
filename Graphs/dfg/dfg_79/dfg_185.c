#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 605400913
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, long long p_5[3], float p_7[4][3],
                       long long p_9[2][3])
{
  char v_13;
  short v_11;
  unsigned char v;
  unsigned long long result;
  v_13 = (char)-77;
  v = (unsigned char)(207395655UL % (unsigned long)((int)(- v_13) + 684));
  v_11 = (short)(3934324570U - (unsigned int)(~ (51072 + (int)v % 52)));
  result = (unsigned long long)(p_9[1][1] * (long long)v_11);
  result = - (((unsigned long long)(~ v) & ((unsigned long long)p + result)) % (unsigned long long)(
              (! p_5[2] + (long long)(- p_7[3][1])) + 280LL));
  return result;
}


