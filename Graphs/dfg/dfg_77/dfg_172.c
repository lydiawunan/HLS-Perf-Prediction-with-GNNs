#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 83626903
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p[4], short p_4, unsigned short p_6,
         unsigned long long p_11, unsigned long long p_13[2][3][5])
{
  long v_9;
  long long v;
  char result;
  result = (char)51;
  v = (long long)p_13[0][2][1];
  v_9 = (long)p_11;
  result = (char)(((long)p_4 + (long)(~ p_6) * ((long)result * v_9)) % 25L);
  result = (char)((unsigned long long)((long long)((int)p[3] % (((int)p_4 << 5UL) + 325)) / (
                                       (long long)(~ p_6) / ((long long)result / (
                                                             v + 368LL) + 14LL) + 938LL)) - 
                  (unsigned long long)(- v_9 + (long)(- p_6)) % (503508215ULL / (unsigned long long)(
                                                                 -31506LL / (
                                                                 v + 359LL) + 639LL) + 315ULL));
  return result;
}


